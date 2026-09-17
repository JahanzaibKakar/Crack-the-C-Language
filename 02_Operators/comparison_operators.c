#include <stdio.h>

int main(void)
{
    int a = 110;
    int b = 20;

    // ==  Equal to
    // Checks whether two values are equal.
    // Embedded example: Check whether ADC value == expected reference value.
    printf("a == b : %d\n", a == b);

    // !=  Not equal to
    // Checks whether two values are different.
    // Embedded example: Check whether sensor_status != SENSOR_OK.
    printf("a != b : %d\n", a != b);

    // >  Greater than
    // Checks whether the left value is greater than the right value.
    // Embedded example: Check whether temperature > 40°C to activate cooling.
    printf("a > b  : %d\n", a > b);

    // <  Less than
    // Checks whether the left value is smaller than the right value.
    // Embedded example: Check whether battery_voltage < minimum safe voltage.
    printf("a < b  : %d\n", a < b);

    // >=  Greater than or equal to
    // Checks whether the left value is greater than or equal to the right value.
    // Embedded example: Cooling ON when temperature >= 40°C.
    printf("a >= b : %d\n", a >= b);

    // <=  Less than or equal to
    // Checks whether the left value is less than or equal to the right value.
    // Embedded example: Check whether motor_speed <= maximum allowed speed.
    printf("a <= b : %d\n", a <= b);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int temperature = 45;
    int battery_ok = 1;

    // &&  Logical AND
    // Returns true only when BOTH conditions are true.
    // Embedded example: Start cooling only if temperature is high AND battery is healthy.
    printf("temperature > 40 && battery_ok == 1 : %d\n",
           temperature > 40 && battery_ok == 1);

    // ||  Logical OR
    // Returns true when AT LEAST ONE of the conditions is true.
    // Embedded example: Set a fault if temperature is too high OR battery voltage is too low.
    printf("temperature > 40 || battery_ok == 0 : %d\n",
           temperature > 40 || battery_ok == 0);

    // !  Logical NOT
    // Reverses a logical result: true becomes false, false becomes true.
    // Embedded example: Detect a fault when sensor_ok is NOT true.
    printf("!battery_ok : %d\n", !battery_ok);

    return 0;
}
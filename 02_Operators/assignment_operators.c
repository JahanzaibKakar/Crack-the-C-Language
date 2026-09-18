#include <stdio.h>

int main(void)
{
    int value = 10;

    // =  Assignment operator
    // Stores a value inside a variable.
    // Embedded example: Store the latest ADC reading in a variable.
    value = 20;
    printf("After =  : %d\n", value);

    // +=  Add and assign
    // Adds a value to the current variable and stores the result back.
    // Embedded example: Increase an error counter when a fault occurs.
    value += 5;
    printf("After += : %d\n", value);

    // -=  Subtract and assign
    // Subtracts a value from the current variable and stores the result back.
    // Embedded example: Reduce a timer count or remaining battery estimate.
    value -= 3;
    printf("After -= : %d\n", value);

    // *=  Multiply and assign
    // Multiplies the current variable by a value and stores the result back.
    // Embedded example: Apply a scaling factor to a sensor value.
    value *= 2;
    printf("After *= : %d\n", value);

    // /=  Divide and assign
    // Divides the current variable by a value and stores the result back.
    // Embedded example: Convert a summed sensor reading into an average.
    value /= 4;
    printf("After /= : %d\n", value);

    // %=  Modulus and assign
    // Stores the remainder after division back into the variable.
    // Embedded example: Wrap a counter repeatedly within a fixed range.
    value %= 3;
    printf("After %%= : %d\n", value);

    return 0;
}
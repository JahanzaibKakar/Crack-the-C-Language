#include <stdio.h>

int main(void)
{
    int value;
    int result;

    // ---------------------------------------------------------
    // 1. POST-INCREMENT: value++
    // ---------------------------------------------------------
    // The CURRENT value is used first.
    // After that, the variable is increased by 1.
    //
    // Embedded example:
    // Store the current sensor sample index, then move to
    // the next position in the ADC sample buffer.

    value = 5;

    result = value++;

    printf("Post-increment:\n");
    printf("result = %d\n", result);
    printf("value  = %d\n\n", value);


    // ---------------------------------------------------------
    // 2. PRE-INCREMENT: ++value
    // ---------------------------------------------------------
    // The variable is increased by 1 FIRST.
    // Then the NEW value is used.
    //
    // Embedded example:
    // Increase a fault counter first and immediately use
    // the updated number of detected faults.

    value = 5;

    result = ++value;

    printf("Pre-increment:\n");
    printf("result = %d\n", result);
    printf("value  = %d\n\n", value);


    // ---------------------------------------------------------
    // 3. POST-DECREMENT: value--
    // ---------------------------------------------------------
    // The CURRENT value is used first.
    // After that, the variable is decreased by 1.
    //
    // Embedded example:
    // Use the current remaining timer count and then
    // reduce the countdown by one tick.

    value = 5;

    result = value--;

    printf("Post-decrement:\n");
    printf("result = %d\n", result);
    printf("value  = %d\n\n", value);


    // ---------------------------------------------------------
    // 4. PRE-DECREMENT: --value
    // ---------------------------------------------------------
    // The variable is decreased by 1 FIRST.
    // Then the NEW value is used.
    //
    // Embedded example:
    // Reduce the remaining retry attempts first and then
    // check/use the updated number of retries.

    value = 5;

    result = --value;

    printf("Pre-decrement:\n");
    printf("result = %d\n", result);
    printf("value  = %d\n\n", value);


    // ---------------------------------------------------------
    // 5. SIMPLE COUNTER EXAMPLE
    // ---------------------------------------------------------
    // When ++ or -- is used alone, pre and post forms both
    // simply change the variable by one.
    //
    // Embedded example:
    // Count how many CAN communication errors have occurred.

    int fault_count = 0;

    fault_count++;
    fault_count++;
    fault_count++;

    printf("Fault counter after 3 faults = %d\n", fault_count);


    // Embedded countdown example:
    // A timer decreases once for every system tick.

    int remaining_ticks = 3;

    remaining_ticks--;

    printf("Remaining timer ticks = %d\n", remaining_ticks);

    return 0;
}
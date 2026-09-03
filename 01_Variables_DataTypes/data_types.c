// Basic C data types practice

#include <stdio.h>

int main()
{
    int age = 30;    // Integer : int → stores whole numbers, like 10, -5, 30
    float temperature = 25.5f;   // float → stores decimal numbers, like 25.5
    char grade = 'A';   // Charactor : char → stores one character, like 'A'
    char name[] = "Alex";  // char[] / string → stores text, like "Alex"
    unsigned int count = 10;  //unsigned int → stores only zero or positive whole numbers, like 0, 10, 100

    printf("Alex Age is= %d\n", age);   
    printf("Temperature = %f\n", temperature);   
    printf("Grade = %c\n", grade);   
    printf("Name = %s\n", name);    
    printf("Count = %u\n", count);

    return 0;
}
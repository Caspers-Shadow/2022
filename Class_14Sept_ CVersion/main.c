#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 20;

    printf("Value of number: %d\n", num);
    printf("Address of number: %p\n\n", &num);

    int* ptr ;

    ptr = &num;

    printf("Value of number: %d\n", ptr);
    printf("Address of number: %p\n\n", &ptr);

    printf("Value of number:\n");
    printf("Address of number:\n\n");

    printf("Value of number:\n");
    printf("Address of number:\n\n");

    printf("Value of number:\n");
    printf("Address of number:\n\n");

    printf("Value of number:\n");
    printf("Address of number:\n\n");
    return 0;
}

//ch11lab2.c

#include <stdio.h>

int main()
{
    int x = 8, y = 10;

    printf("x = %d\n", x); // 8
    printf("X = %d\n", ++x); // 9
    printf("x = %d\n", x); // 9

    printf("y = %d\n", y); // 10
    printf("y = %d\n", y++); // 10
    printf("y = %d\n", y); //11

    return 0;
}

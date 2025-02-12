//ch13lab1.c

#include <stdio.h>

int main()
{
    int num;
    int *pX;
    int *pY;

    num= 30;
    pX = &num;
    pY = &num;

    printf("num: %d *pX: %d, *pY: %d\n", num, *pX, *pY);

    num= 35;
    printf("num: %d *pX: %d, *pY: %d\n", num, *pX, *pY);

    return 0;
}

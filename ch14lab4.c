//ch14lab4.c

#include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;

    printf("x = %d, y = %d", x, y);

    swap(&x, &y);

    printf("swap()È£Ãâ µÚ\n");
    printf("x = %d,. y = %d\n", x, y);

    return 0;
}

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

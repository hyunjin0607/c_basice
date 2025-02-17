//ch14lab2_±¸±¸´Ü.c

#include <stdio.h>

int main()
{
    for(int i = 1; i <= 9; i++)
    {
        ggd(i);
    }
    return 0;
}
void ggd(int n)
{
    for(int i = 2; i <= 9; i++)
    {
        printf("%2d * %2d = %2d ", i, n, i * n);
    }
    printf("\n");
}

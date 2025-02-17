//ch14ex4_구구단.c

#include <stdio.h>

int main()
{
    int n;

    printf("구구단 중 몇 단을 출력할까요?");
    scanf("%d", &n);

    ggd(n);

    return 0;
}

void ggd(int n1)
{
    for(int i = 1; i <= 9; i++)
    {
        printf("%d * %d =%d ", n1, i, n1 * i);
    }
}

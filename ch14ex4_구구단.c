//ch14ex4_������.c

#include <stdio.h>

int main()
{
    int n;

    printf("������ �� �� ���� ����ұ��?");
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

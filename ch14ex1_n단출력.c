//ch14ex1_n�����.c

#include <stdio.h>

int main()
{
    int n;
    int i;

    printf("�� ���� ����ұ��? ");
    scanf("%d", &n);

    for(i = 1; i <= 9; i++)
    {
        printf("%02d * %02d = %02d\n", n, i, n * i);
    }
    return 0;
}

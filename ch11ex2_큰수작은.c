//ch11ex2_ū������.c

#include <stdio.h>

int main()
{
    int n1, n2;
    int large;
    int small;

    printf("2���� ������ �Է��ϼ���: ");
    scanf("%d %d", &n1, &n2);

    large = (n1 > n2) ? n1 : n2;
    small = (n1 < n2) ? n1 : n2;

    printf("ū ��: %d\n", large);
    printf("���� ��: %d\n", small);
}

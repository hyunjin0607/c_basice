// ch8lab1.c

#include <stdio.h>

int main()
{
    int year = 0;  // ����
    int sales;  // �����

    printf("ù���� ������� �Է��ϼ���(��������): ");
    scanf("%d", &sales);

    printf("\n");

    year += 1;
    sales *= 1.1;  // 1.1 ---> 110%
    printf("%d�� ���� ������� %d�����Դϴ�.\n", year, sales);

    year += 1;
    sales *= 1.1;  // 1.1 ---> 110%
    printf("%d�� ���� ������� %d�����Դϴ�.\n", year, sales);

    return 0;
}

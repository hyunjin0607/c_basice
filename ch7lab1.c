// ch7lab1.c

#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int q;
    int r;

    printf("ù��° ����:");
    scanf("%d", &n1);

    printf("�ι�° ����:");
    scanf("%d", &n2);

    q = n1/ n2;
    r = n1 % n2;

    printf("\n");
    printf("���� %d�Դϴ�.\n", q);
    printf("�������� %d�Դϴ�.\n", r);

    return 0;
}

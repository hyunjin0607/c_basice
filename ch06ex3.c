//ch06ex3.c

#include <stdio.h>

int main()
{
    char ch1;
    char ch2;

    printf("���� �ѱ��ڸ� �Է��ϼ���:");
    scanf("%c", &ch1);
    printf("���� �ѱ��ڸ� �Է��ϼ���:");
    scanf(" %c", &ch2);

    printf("�Էµ� ���ڴ� %c�Դϴ�.\n", ch1);
    printf("�Էµ� ���ڴ� %c�Դϴ�.\n", ch2);

    return 0;
}

//ch11ex1_Ȧ¦.c

#include <stdio.h>

int main()
{
    int num;

    printf("������ �Է��ϼ���:");
    scanf("%d", &num);

    printf("%d�� %s\n", num, (num % 2 == 0)? "¦��" : "Ȧ��");

    return 0;
}

//ch12lab2.c

#include <stdio.h>

int main()
{
    int n1, n2, result;
    char op;

    printf("�� ���� ���� �Է�: ");
    scanf("%d %d", &n1, &n2);

    printf("%d�� %d�� ������ �����ϼ���(+, -, *, /, %):", n1, n2);
    scanf(" %c", &op);

    switch(op)
    {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        result = n1 / n2;
        break;
    case '%':
        result = n1 % n2;
        break;
    default:
        printf("�߸��� �������Դϴ�.");
        break;
    }
        printf("%d %c %d �� %d �Դϴ�.\n", n1, op, n2, result);

    return 0;
}

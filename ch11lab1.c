//ch11lab1.c

#include <stdio.h>

int main()
{
    int n1, n2;
    int result;

    printf("���� �� ���� �Է��ϼ���: ");
    scanf("%d %d", &n1, &n2);

    result = (n1 > n2) ? n1 - n2 : n2 - n1;

    printf("%d", result);

    return 0;
}

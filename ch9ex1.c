// ch9ex1_���̰��.c

#include <stdio.h>
#define CURRENT_YEAR    2025

int main()
{
    int year;
    int age;

    printf("�� �⵵�� �¾�̳���? ");
    scanf("%d", &year);

    if(year <= CURRENT_YEAR)
    {
        age = CURRENT_YEAR - year + 1;
        printf("���� %d���̱���!\n", age);
    }
    else
    {
        printf("����⵵�� �ٽ� Ȯ���ϼ���!\n");
    }

    return 0;
}

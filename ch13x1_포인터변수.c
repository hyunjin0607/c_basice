//ch13x1_�����ͺ���.c

#include <stdio.h>

int main()
{
    int age;
    int* pAge;   // * ������

    age = 19;
    pAge = &age;

    printf("age ��: %d, age �ּ�: %p\n", age, &age);
    printf("pAge ��: %p\n", pAge);

    printf("pAge �޸� ��: %d\n", *pAge);

    return 0;
}

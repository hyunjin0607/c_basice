//ch13ex2_�����ͺ���.c

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int *pNum;  //������ ���� pNum

    //num1�� 25 ����
    num1 = 25;

    //pNum�� num1�� �ּ� ����
    pNum = &num1;

    //num1�� pNum�������� ���
    printf("num1: %d, *pNum: %d\n", num1, *pNum);


    //pNum�޸� ���� 30���� ����
    *pNum = 30;
    printf("num1: %d, *pNum: %d\n", num1, *pNum);


    //num2�� pNum �޸� ���� ����(������)
    num2 = *pNum;
    printf("num1: %d, num2: %d, *pNum: %d\n", num1, num2, *pNum);

    num1 = 20;
    printf("num1: %d, num2: %d, *pNum: %d\n", num1, num2, *pNum);

    return 0;
}

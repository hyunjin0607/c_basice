//ch14ex1_�迭��������.c

#include <stdio.h>

int main()
{
    int num[5] = {10, 20, 30, 40, 50};
    int* pNum;

    pNum = num; //num�� &num[0] �迭 ù ���� �ּҿ� ����

    // �迭�� ���� ������ pNum���� ����ϱ�
    printf("num[0]: %d\n", *pNum);
    printf("num[1]: %d\n", (*pNum + 1)); //pNum + 1: pNum�� ���� �ּ�
    printf("num[2]: %d\n", (*pNum + 2));
    printf("num[3]: %d\n", (*pNum + 3));
    printf("num[4]: %d\n", (*pNum + 4));


    return 0;


}

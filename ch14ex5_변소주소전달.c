//ch14ex5_�����ּ�����.c

#include <stdio.h>

int main()
{
    int num;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);

    twiceVal(num);
    printf("in main num: %d\n", num);

    twiceRef(&num);
    printf("in main num: %d\n", num);

    return 0;
}

void twiceRef(int* pNum)
{
    *pNum *= 2;
    printf("in twiceRef pNum: %d\n", *pNum);
}

void twiceVal(int num)
{
    num = num * 2;
    printf("In twiceVal num: %d\n", num);
}

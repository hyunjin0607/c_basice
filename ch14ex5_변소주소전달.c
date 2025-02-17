//ch14ex5_변소주소전달.c

#include <stdio.h>

int main()
{
    int num;
    printf("정수를 입력하세요: ");
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

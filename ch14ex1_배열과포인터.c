//ch14ex1_배열과포인터.c

#include <stdio.h>

int main()
{
    int num[5] = {10, 20, 30, 40, 50};
    int* pNum;

    pNum = num; //num은 &num[0] 배열 첫 값의 주소와 같다

    // 배열의 값을 포인터 pNum으로 출력하기
    printf("num[0]: %d\n", *pNum);
    printf("num[1]: %d\n", (*pNum + 1)); //pNum + 1: pNum의 다음 주소
    printf("num[2]: %d\n", (*pNum + 2));
    printf("num[3]: %d\n", (*pNum + 3));
    printf("num[4]: %d\n", (*pNum + 4));


    return 0;


}

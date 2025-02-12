//ch13ex2_포인터변수.c

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int *pNum;  //포인터 변수 pNum

    //num1에 25 대입
    num1 = 25;

    //pNum에 num1의 주소 대입
    pNum = &num1;

    //num1과 pNum여참조값 출력
    printf("num1: %d, *pNum: %d\n", num1, *pNum);


    //pNum메모리 값을 30으로 변경
    *pNum = 30;
    printf("num1: %d, *pNum: %d\n", num1, *pNum);


    //num2에 pNum 메모리 값을 저장(역참조)
    num2 = *pNum;
    printf("num1: %d, num2: %d, *pNum: %d\n", num1, num2, *pNum);

    num1 = 20;
    printf("num1: %d, num2: %d, *pNum: %d\n", num1, num2, *pNum);

    return 0;
}

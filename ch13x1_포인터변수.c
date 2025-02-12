//ch13x1_포인터변수.c

#include <stdio.h>

int main()
{
    int age;
    int* pAge;   // * 포인터

    age = 19;
    pAge = &age;

    printf("age 값: %d, age 주소: %p\n", age, &age);
    printf("pAge 값: %p\n", pAge);

    printf("pAge 메모리 값: %d\n", *pAge);

    return 0;
}

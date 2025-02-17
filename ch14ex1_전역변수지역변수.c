//ch14ex1_전역변수지역변수.c

#include <stdio.h>

int globaVar1;

void func();

int main()
{
    int localVar1 = 10;
    int x = 5;

    globaVar1 = 999;
    printf("In main function\n");
    printf("globaVar1: %d\n", globaVar1);
    printf("localVar1: %d\n", localVar1);
    printf("x: %d\n", x);

    func();

    return 0;
}


void func()
{
    int localVar2 = 20;
    int x = 7;

    printf("\n");
    printf("In main function\n");
    printf("globaVar1: %d\n", globaVar1);
    printf("localVar2: %d\n", localVar2);
    printf("x: %d\n", x);

}

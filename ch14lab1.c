//ch14lab1.c

#include <Stdio.h>

int main()
{
    int num1;
    int num2;

    printf("두개의 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    print_square(num1, num2);

    printf("num1 = %d, num2 = %d", num1, num2);

    return 0;
}

void print_square(int n1, int n2)
{
    printf("num1 = %d, num2 = %d\n", n1 * n1, n2 * n2);
}


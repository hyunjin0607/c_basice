// ch7ex2_³ª´°¼À.c

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;
    float x = 10.0;
    float y = 3.0;
    int i_result;
    float f_result;

    i_result = a / b;
    printf("i_result: %d\n", i_result);

    f_result = a / b;
    printf("i_result: %f\n", f_result);

    f_result = a / (float)b;
    printf("i_result: %f ---- type casting\n", f_result);

    f_result = x / y;
    printf("i_result: %f\n", f_result);

    f_result = x / b;
    printf("f_result: %f\n", f_result);

    return 0;
}

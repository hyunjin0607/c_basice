// ch9ex1_나이계산.c

#include <stdio.h>
#define CURRENT_YEAR    2025

int main()
{
    int year;
    int age;

    printf("몇 년도에 태어나셨나요? ");
    scanf("%d", &year);

    if(year <= CURRENT_YEAR)
    {
        age = CURRENT_YEAR - year + 1;
        printf("현재 %d살이군요!\n", age);
    }
    else
    {
        printf("출생년도를 다시 확인하세요!\n");
    }

    return 0;
}

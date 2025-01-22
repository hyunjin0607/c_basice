// ch10p_논리연산자.c

#include <stdio.h>

int main()
{
    int age;
    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    if(age >= 20)
    {
        if(age <= 60)
        {
            printf("아직 젊으시군요!\n");
        }
    }

    if(age >= 20 && age <= 60)
    {
        printf("아직 젊으시군요!\n");
    }

    // 10이상 20미만은 '청소년입니다.' 출력하기
    if(age >= 10 && age < 20)
    {
        printf("청소년입니다.\n");
    }

    if(age < 10 || age > 60)
    {
        printf("노약자입니다.\n");
    }

    return 0;
}

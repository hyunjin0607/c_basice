//ch11lab1.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char pw[20];
    int cnt_upper = 0;
    int cnt_lower = 0;
    int cnt_digit = 0;
    int pw_length;


    printf("암호를 입력하세요: ");
    scanf("%s", pw);

    pw_length = strlen(pw);

    for(int i = 0; i < pw_length; i++)
    {
        if (isupper(pw[i])) cnt_upper++;
        if (islower(pw[i])) cnt_lower++;
        if (isdigit(pw[i])) cnt_digit++;
    }

    if(cnt_upper == 0|| cnt_lower == 0 || cnt_digit == 0)
        printf("암호를 다시 만들어 주세요.");
    else
        printf("암호가 안전합니다.");

    return 0;
}

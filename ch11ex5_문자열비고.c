//ch11ex5_문자열비고.c

#include <Stdio.h>

int main()
{
    char str1[21];
    char str2[21];

    puts("첫번째 문자열 입력: ");
    gets(str1);

    puts("두번째 문자열 입력:");
    gets(str2);

    if(strcmp(str1, str2) == 0)
        puts("두 문자열 일치!");
    else if(strcmp(str1, str2) < 0)
        puts("첫번째 문자열이 사전 검색순으로 앞입니다.");
    else
        puts("두번째 문자열이 사전 검색순으로 앞입니다.");

    return 0;
}

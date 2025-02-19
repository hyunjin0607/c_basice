//ch14lab7.c

#include <stdio.h>

int count(char*);

int main()
{
    char str[100];
    int cnt;

    printf("문자열을 입력하세요: ");
    gets(str);

    cnt = count(str);
    printf("입력된 문자열 %s는 %d글자 입니다. ", str, cnt);

    return 0;
}

int count(char* st)
{

    int cnt = 0;
    for(int i = 0; st[i] != '\0'; i++)
    {
        cnt++;
    }

    return cnt;
}

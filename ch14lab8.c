//ch14lab8.c

#include <stdio.h>

int countChar(char*, char);
void printchar(char* , char);

int main()
{
    char str[100];
    int cnt;
    int ch;


    printf("문자열을 입력하세요\n");
    gets(str);

    printf("찾을 문자를 입력하세요\n ");
    scanf(" %c", &ch);

    cnt = countChar(str, ch);

    printf("\n");
    printf("문자열 %s에서 %c는 %d글자입니다.\n", str, ch, cnt);
    printchar(str, ch);

    return 0;
}

int countChar(char* st, char c)
{
    int cnt = 0;
    for(int i = 0; st[i] != '\0'; i++)
    {
        if(st[i] == c) cnt++;
    }
    return cnt;
}

void printchar(char* st, char c)
{
    char p;
    for(int i = 0; st[i] != '\0'; i++)
    {
        p = (st[i] == c) ? c : '*';
        printf("%c", p);
    }
}

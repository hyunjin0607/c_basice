//ch12_모음판별.c

#include <stdio.h>

int main()
{
    char ch;

    printf("영문자를 입력하세요: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        ch += 'a' - 'A';
    }
    printf("입력된 문자: %c\n", ch);

    switch(ch)
    {
    case 'a': case 'e': case 'i': case 'o' : case 'u':
        printf("%c는 모음입니다.\n",ch);
        break;
    default:
        if(ch >= 'a' && ch <= 'z')
        {
            printf("%c는 자음입니다.\n", ch);
        }
        else
        {
            printf("영문자를 입력하세요.\n");
        }
    }

    return 0;
}

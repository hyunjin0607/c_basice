// ch16ex1_대문자로변환.c
#include <stdio.h>
#include <ctype.h>
#define TRUE     1
int main()
{
    char ch;
    while(TRUE)
    {


        ch = getchar();
        if(ch == EOF) break;
        if(islower(ch))
        {
            ch = toupper(ch);
        }
        putchar(ch);

    }

    return 0;
}


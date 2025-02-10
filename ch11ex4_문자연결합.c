//ch11ex4_문자연결합.c

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "안녕하세요! ";
    char str2[20] = "반갑습니다.";

    //strcpy(str1, str2); //str1에 str2복사
    strcat(str1, str2);
    puts(str1);

    return 0;
}

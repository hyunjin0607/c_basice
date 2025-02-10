//ch11ex1_영화목록.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char movie[50];
    int length;

    printf("최근에 본 영화제목을 입력하세요: ");
    scanf("%s", movie);

    printf("%s", movie);

    // 입력 받은 문자열을 대문자로 변환해 출력

    length = strlen(movie);
    printf("영화제목 글자수: %d자\n", length);

    for(int i = 0; i < length; i++)
    {
        if(islower(movie[i])) movie[i] = toupper(movie[i]);
    }
    printf("%s\n", movie);

    //입력 받은 문장열을 모두 소문자로 변환후 출력하기



    return 0;
}

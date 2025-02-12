//ch14ex2_과목이름.c

#include <stdio.h>

int main()
{
    char sub[10] = "English";
    printf("%s\n", sub);  //sub은 sub[0]의 주소는, %s는 주소부터 \0까지 출력

    char *pSub = "Math";  // 문자열 상수 "Math"주소 저장
    printf("%s\n", pSub);

    pSub = "Science";  //문자열 성수 "Science: 주소 저장
    printf("%s\n", pSub);

    //sub[10] = "History"; X
    //printf("%s\n", sub); //sub은 sub[0]의 주소, %s는 주소부터 \0까지 출력

    char* subject[] = {"English", "Math", "History", "Science"};
    for(int i = 0; i < 4; i++)
    {
        printf("Subject: %s\n", subject[i]);
    }

    return 0;
}

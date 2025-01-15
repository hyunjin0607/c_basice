//ch6lab1.c

#include <stdio.h>

int main()
{
    char la;
    int le;

    printf("배우는 언어는?");
    scanf("%c", &la);
    printf("느까는 난이도는?");
    scanf("%d", &le);

    printf("당신은 %c를 배우면서 난이도 %d정도 어렵다고 느끼시는군요!", la, le);
}

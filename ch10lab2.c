//ch10lab2.c

#include <stdio.h>

int main()
{
    int n1;
    int n2;

    printf("Á¤¼ö 2°³¸¦ ÀÔ·ÂÇÏ¼¼¿ä:");
    scanf("%d %d", &n1, &n2);

    if(n1 % 2 == 0 && n2 % 2 == 0)
    {
        printf("Â¦¼ö\n");
    }
    else if(n1 % 2 == 1 && n2 % 2 == 1)
    {
        printf("È¦¼ö\n");
    }
    else
    {
        printf("È¦Â¦\n");
    }

    return 0;
}

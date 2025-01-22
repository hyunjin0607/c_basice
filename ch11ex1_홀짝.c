//ch11ex1_È¦Â¦.c

#include <stdio.h>

int main()
{
    int num;

    printf("Á¤¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä:");
    scanf("%d", &num);

    printf("%d´Â %s\n", num, (num % 2 == 0)? "Â¦¼ö" : "È¦¼ö");

    return 0;
}

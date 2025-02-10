//ch11p_문자와문자열.c

#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    char month[10] = "April";

    c= 'C';

    printf("c: %c\n", c);
    printf("month: %s\n", month);

    // month = "Saturday";  X
    month[0] = 'J';
    month[1] = 'u';
    month[2] = 'l';
    month[3] = 'y';
    month[4] = '\0';

    printf("month: %s\n", month);


    strcpy(month, "Fall");
    printf("month: %s\n", month);
    return 0;
}

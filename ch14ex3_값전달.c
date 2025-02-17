//ch14ex3_АЊРќДо.c

#include <stdio.h>

int main()
{
    int val = 10;
    printline('-', 10);
    twice(val);
    printline('-', 5);
    printline('-', 15);
    printUpper(5);
    printlower('c', 3);

    return 0;
}

void twice(int temp)
{
    printf("in twice: %d\n", temp * 2);
}

void printline(char ch, int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("%c", ch);
    }
    printf("\n");
}

void printUpper(int n1)
{
    for(int i = 0; i < n1; i++)
    {
        printf("%c", 'A' + i);
    }
}

void printlower(char c, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%c", c + i);
    }
    printf("\n");
}

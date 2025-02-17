//ch14ex7_¹®ÀÚ¿­.c

#include <stdio.h>
#include <string.h>

int main()
{
    char* msg = "you need C";
    int c = strlen(msg);

    upperMsg(msg, c);

    return 0;
}

void upperMsg(char* pMsg, int c)
{
    for(int i = 0; i < c; i++)
    {
        if(pMsg[i] >= 'a' && pMsg[i] <= 'z')
        {
            printf("%c", pMsg[i] - ('a' - 'A'));
        }
        else
        {
            printf("%c", pMsg[i]);
        }
    }
    printf("\n");
}

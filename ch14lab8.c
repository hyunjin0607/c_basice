//ch14lab8.c

#include <stdio.h>

int countChar(char*, char);
void printchar(char* , char);

int main()
{
    char str[100];
    int cnt;
    int ch;


    printf("���ڿ��� �Է��ϼ���\n");
    gets(str);

    printf("ã�� ���ڸ� �Է��ϼ���\n ");
    scanf(" %c", &ch);

    cnt = countChar(str, ch);

    printf("\n");
    printf("���ڿ� %s���� %c�� %d�����Դϴ�.\n", str, ch, cnt);
    printchar(str, ch);

    return 0;
}

int countChar(char* st, char c)
{
    int cnt = 0;
    for(int i = 0; st[i] != '\0'; i++)
    {
        if(st[i] == c) cnt++;
    }
    return cnt;
}

void printchar(char* st, char c)
{
    char p;
    for(int i = 0; st[i] != '\0'; i++)
    {
        p = (st[i] == c) ? c : '*';
        printf("%c", p);
    }
}

//ch14lab7.c

#include <stdio.h>

int count(char*);

int main()
{
    char str[100];
    int cnt;

    printf("���ڿ��� �Է��ϼ���: ");
    gets(str);

    cnt = count(str);
    printf("�Էµ� ���ڿ� %s�� %d���� �Դϴ�. ", str, cnt);

    return 0;
}

int count(char* st)
{

    int cnt = 0;
    for(int i = 0; st[i] != '\0'; i++)
    {
        cnt++;
    }

    return cnt;
}

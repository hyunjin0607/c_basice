//ch11ex4_���ڿ�����.c

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "�ȳ��ϼ���! ";
    char str2[20] = "�ݰ����ϴ�.";

    //strcpy(str1, str2); //str1�� str2����
    strcat(str1, str2);
    puts(str1);

    return 0;
}

//ch11ex5_���ڿ����.c

#include <Stdio.h>

int main()
{
    char str1[21];
    char str2[21];

    puts("ù��° ���ڿ� �Է�: ");
    gets(str1);

    puts("�ι�° ���ڿ� �Է�:");
    gets(str2);

    if(strcmp(str1, str2) == 0)
        puts("�� ���ڿ� ��ġ!");
    else if(strcmp(str1, str2) < 0)
        puts("ù��° ���ڿ��� ���� �˻������� ���Դϴ�.");
    else
        puts("�ι�° ���ڿ��� ���� �˻������� ���Դϴ�.");

    return 0;
}

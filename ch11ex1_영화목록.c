//ch11ex1_��ȭ���.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char movie[50];
    int length;

    printf("�ֱٿ� �� ��ȭ������ �Է��ϼ���: ");
    scanf("%s", movie);

    printf("%s", movie);

    // �Է� ���� ���ڿ��� �빮�ڷ� ��ȯ�� ���

    length = strlen(movie);
    printf("��ȭ���� ���ڼ�: %d��\n", length);

    for(int i = 0; i < length; i++)
    {
        if(islower(movie[i])) movie[i] = toupper(movie[i]);
    }
    printf("%s\n", movie);

    //�Է� ���� ���忭�� ��� �ҹ��ڷ� ��ȯ�� ����ϱ�



    return 0;
}

//ch12_�����Ǻ�.c

#include <stdio.h>

int main()
{
    char ch;

    printf("�����ڸ� �Է��ϼ���: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        ch += 'a' - 'A';
    }
    printf("�Էµ� ����: %c\n", ch);

    switch(ch)
    {
    case 'a': case 'e': case 'i': case 'o' : case 'u':
        printf("%c�� �����Դϴ�.\n",ch);
        break;
    default:
        if(ch >= 'a' && ch <= 'z')
        {
            printf("%c�� �����Դϴ�.\n", ch);
        }
        else
        {
            printf("�����ڸ� �Է��ϼ���.\n");
        }
    }

    return 0;
}

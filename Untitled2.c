//ch16lab.c
#include <stdio.h>
#include <ctype.h>

int main()
{
    char n1;

    printf("���� �ϳ��� �Է��ϼ���:");
    scanf("%c", &n1);

    if(islower(n1))
    {
        printf("%c�� �ҹ����Դϴ�.\n", n1);
    }
    else if(isupper(n1))
    {
        printf("%c�� �빮���Դϴ�.\n", n1);
    }
    else if(isdigit(n1))
    {
        printf("%c�� �����Դϴ�.\n", n1);
    }
    else
    {
        printf("%c�� �빮��, �ҹ���, ���ڰ� �ƴմϴ�.\n", n1);
    }

   return 0;
}

//ch11lab1.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char pw[20];
    int cnt_upper = 0;
    int cnt_lower = 0;
    int cnt_digit = 0;
    int pw_length;


    printf("��ȣ�� �Է��ϼ���: ");
    scanf("%s", pw);

    pw_length = strlen(pw);

    for(int i = 0; i < pw_length; i++)
    {
        if (isupper(pw[i])) cnt_upper++;
        if (islower(pw[i])) cnt_lower++;
        if (isdigit(pw[i])) cnt_digit++;
    }

    if(cnt_upper == 0|| cnt_lower == 0 || cnt_digit == 0)
        printf("��ȣ�� �ٽ� ����� �ּ���.");
    else
        printf("��ȣ�� �����մϴ�.");

    return 0;
}

//ch10lab1.c

#include <stdio.h>

int main()
{
    int result;
    int num = 25;
    char ch = 'a';

    //num�� 10���� ũ�ų� ����, 30 ���� �۴ٸ�
    result = (num >= 10 && num < 30);
    printf("num�� 10���� ũ�ų� ����, 30���� �۴ٸ�:%d\n", result);

    result = (num % 3 == 0 && num % 5 == 0);
    printf("num�� 3�� ����̰ų� 5�� ������:%d\n", result);

    result = (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <='z');
    printf("�빮�� ch�� �빮�� �Ǵ� �ҹ��ڶ��: %d\n", result);

    result = !(ch >= '0' && ch <= '9'); //not !
    printf("���� ch�� ���ڹ��ڰ� �ƴ϶��: %d\n", result);

    return 0;
}

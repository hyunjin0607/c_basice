//ch14lab5.c

#include <stdio.h>

int get_max(int, int);

int main()
{
    int n1, n2;
    int m;

    printf("�� ���� �Է��ϼ���: ");
    scanf("%d %d", &n1, &n2);

    m = get_max(n1, n2);

    printf("�� �� �߿� ���� ū ���� %d�Դϴ�.", m);

}

int get_max(int n1, int n2)
{
    int m;
    if (n1 > n2)
    {
        m = n1;
    }
    else
    {
        m = n2;
    }

    return m;
}


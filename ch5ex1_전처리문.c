//ch5ex1_��ó����.c

#include <stdio.h>
#include "ch5ex1_pp.h"


int main()
{
    int age = 10;
    char first_initial = 'C';
    char last_initial = 'S';

    printf("�� ������ %s�Դϴ�\n", FAMILY_NAME);
    printf("%s������ ��%d���Դϴ�.\n", FAMILY_NAME, NUM_FAMILY);
    printf("ù ���� �̸��� %c%c�̰�, ���̴� %d�� �Դϴ�.\n", first_initial, last_initial, age);
    printf("ù ���� �̸��� %c%c�̰�, ���̴� %d�� �Դϴ�.\n", first_initial, last_initial, age);


    age = 6;
    first_initial = 'P';
    last_initial  = 's';
    printf("�Ѥ� ���� �̸��� %c%c�̰�, ���̴� %d�� �Դϴ�.\n", first_initial, last_initial, age);


    return 0;
}

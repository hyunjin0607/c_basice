//ch14ex2_����ǥ

#include <stdio.h>

int main()
{
    int score[3] = {90, 70, 85};
    char* name[3] = {"ȫ�浿", "��ö��", "�ڿ���"};


    printf("�̸�\t����\n");
    printf("---------------\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%s\t%d\n", name[i], score[i]);
    }

    // X *name[0] ="��"; ������ ������ ���� �Ұ�
    return 0;
}

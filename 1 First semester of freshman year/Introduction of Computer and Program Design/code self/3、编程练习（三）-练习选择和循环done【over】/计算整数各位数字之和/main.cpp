# include <stdio.h>

int main(void)
{
    int a; //�����������������
    int b; //��Ϊÿλ���ı�����
    int sum = 0; //��������ĺͣ�

    scanf("%d", &a);

    //�������������и�λ���ĺͣ�����ȡ��ͳ���
    int i; //����ѭ���м����
    for (i=1; a>0; i++)
    {
        b = a % 10;
        sum = sum +b;
        a = a / 10;
    }

    printf("%d\n", sum);

    return 0;
}

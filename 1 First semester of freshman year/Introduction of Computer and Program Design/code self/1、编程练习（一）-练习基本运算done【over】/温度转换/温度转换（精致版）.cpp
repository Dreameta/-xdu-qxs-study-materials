# include <stdio.h>

int main(void)
{
    int t;
    float j;

    printf("�����뻪���¶� t =");
    scanf("%d", &t);

    j = ((float)t-32)*5/9;
    //ִ�н��ƻ��㣺����������ִ�У��ȳ��ٳ���
    //���㣺��ͬ�������͵�ǿ��ת����

    printf("�����¶� = %.2f\n", j);

    return 0;
}

# include <stdio.h>

int f(int x)
{
    int b, sum, d;
    while (x)
    {
        d = x%10;
        sum = sum*10 + d;
        x = x/10;
    }
    if (x == sum)
        return sum;
}

/*
������
a=12321 b=12321
sum = 0*10 + 1 = 1
b = b/10 = 1232

b=1232
sum =  1*10 + 1232%10 = 12
b = b/10 = 123
*/

int main()
{
    int a, b; //aΪ���������
    int sum; //��Ϊ�������Ľ�����
    int c[100]; //����ÿλ����
    int d; //�������ֵ�ÿλ����

    scanf("%d", &a);

    sum = f(a);//��aΪ����������ֵ��sum

/*
    b = a;
    //���ж��Ƿ�Ϊ��������
    while (b)
    {
        d = b%10;
        sum = sum*10 + d;
        b = b/10;
    }
*/

    int i; //ѭ����������
    int e = 0; //��������ÿλ��֮��

    //�����ǻ����������ж�
    if (a == sum)
    {
        for(i=0;b!=0;i++)
        {
            d = d%10;
            c[i] = d;  //��ÿλ����ֵ�����飻

            b = b/10;

            e = e + c[i];

        }
        printf("%d", e); //��Ϊ�������������
    }
    else
        printf("no");

    return 0;
}

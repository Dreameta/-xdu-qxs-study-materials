# include <stdio.h>

int main (void)
{
    float a; //�����
    float b; //���

    scanf("%f", &a);

    //�ж������ĸ�����
    if (a > 0 && a <= 110)
        b = 0.5 * a;

    else if (a > 100 && a <= 210)
        b = 55 + 0.55*(a - 110);

    else
        b = 110 + 0.7*(a - 210);

    printf("%.2f\n", b);

    return 0;
}

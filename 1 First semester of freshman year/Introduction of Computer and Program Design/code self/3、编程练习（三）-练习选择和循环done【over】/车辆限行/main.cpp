#include <stdio.h>

bool f(int i)
{
    if (i >= 1 && i <= 5)
        return true;
    else
        return false;
}

int main(void)
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);///�ֱ������ڣ� ����ָ�������ƺ�
    c %= 10;

    //�������ж�:�ֱ�Ϊ ���ڡ�ָ�������ƺ�
    if (f(a))
    {
        if (b < 200)
            printf("%d no", c);
        else if (b >= 200 && b <= 400)
        {
            if (a==1&&(c==1||c==6))
                printf("%d yes", c);
            else if (a==2&&(c==2||c==7))
                printf("%d yes", c);
            else if (a==3&&(c==3||c==8))
                printf("%d yes", c);
            else if (a==4&&(c==4||c==9))
                printf("%d yes", c);
            else if (a==5&&(c==5||c==0))
                printf("%d yes", c);
            else
                printf("%d no", c);
        }
        else
        {
            if ((a==1||a==3||a==5)&&(c==1||c==3||c==5||c==7||c==9))
                printf("%d yes", c);
            else if ((a==2||a==4)&&(c==0||c==2||c==4||c==6||c==8))
                printf("%d yes", c);
            else
                printf("%d no", c); //ÿ������������Ҫ���ǵ���else������ط�
        }

    }
    else
        printf("%d no", c);

    return 0;
}

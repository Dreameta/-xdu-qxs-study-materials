# include <stdio.h>

int main()
{
    int m, n;
    int c[100][100]; //�ֱ�������������������������ݣ�

    scanf("%d%d", &m, &n);

    int i, j; //������������ѭ��������
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &c[i][j]);
        }
    }

    int a; //��Ϊ�м丳ֵ��,�ҳ�ÿ�е���Сֵ��
    int x, y; //���崢��λ�ñ�����
    for (i = 0; i < m; i++)
    {
        for (j = 1; j < n; j++)
        {
                a = c[i][0];
            if (c[i][j] < c[i][0])
                a = c[i][j];
                x = i;
                y = j;
        }
    }

    int b; //��Ϊ�м丳ֵ�������ҳ�ÿ�е����ֵ��
    for (j = 0; j < m; j++)
    {
        for (i = 1; i < n; i++)
        {
        b = c[0][j];
        if (c[i][j] > c[0][j])
            b = c[i][j];
        }
    }

    if (a == b)
        printf("%c %c %d", x, y, b);
    else
        printf("no\n");

    return 0;
}


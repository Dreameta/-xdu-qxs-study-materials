//�Լ���д����
# include <stdio.h>

//������ͼ����ת����� 
void szxz(int zb[100][100], int m, int n)
{
	//����������ѭ��������ת����
	int t; //�����м������
	int shift[100][100] = {0};
	
	/*����ת*/
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			shift[i][n-1-j] = zb[j][i]; /*��ؼ���ת���֣�һ��һ�е�����*/
		}
	}
	
	/*�����*/
	for (int i=0; i<m; i++)
	{
		for (int j = 0;j < n;j++)
		{
			printf("%d ", shift[i][j]);
		}
		printf ("\n");
	}
}

/*
������
��n=2,m=3Ϊ��
shift[0][1] = zb[0][0]
shift[0][0] = zb[1][0]

shift[1][1] = zb[0][1]
shift[1][0] = zb[1][1]

shift[2][1] = zb[0][2]
shift[2][0] = zb[1][2]
*/

int main(void)
{
	/*��������*/
	int n, m; //n��������m������������ת֮�󣬾ͱ��ˣ�
	scanf("%d%d", &n, &m);

	int zb[100][100] = {0};
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf("%d", &zb[i][j]);
		}		
	}
	
	/*������ת��������*/
	szxz(zb, m, n);
	
	return 0;
}

//ѧϰ����
/*
#include <stdio.h>
int main ()
{
	int m = 0,n = 0;
	scanf ("%d %d\n",&m,&n);
	int a[100][100] = {0};
	int i = 0,j = 0;
	for (i = 0;i < m;i++)
	{
		for (j = 0;j < n;j++)
		{
			scanf ("%d",&a[i][j]);
		}
	}

	int b[100][100] = {0};
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < m;j++)
		{
			b[i][m-1-j] = a[j][i];
		}
	}

	for (i = 0;i < n;i++)
	{
		for (j = 0;j < m;j++)
		{
			printf ("%d ",b[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
*/




//STUDY CODE

//��δѧ 

#include<stdio.h>
int main()
{
	/*��������*/
	int n, m;
	scanf("%d%d", &n, &m);
	
	int a[n][m] = {0};
	for(int i=0; i<n; i++) //�� 
		for(int j=0; j<m; j++) //�� 
			scanf("%d",&a[i][j]);
	
	int b[n][m] = {0};
	int c[m][n] = {0}; 		
	// ���������ظ����μ����ϵ����� 
	for(int i=0; i<n; i++)
	{
		int p = 1;
		int k = a[i][0];
		for(int j=1; j<m; j++)
		{
			
			if(a[i][j] == k)
			{
				p++;
			}
			else if(p >= 3)
			{
				int q = j;
				for(int l=0;l<p;l++)
				{
					b[i][q-1] = 1;
					q--;
				}
				k = a[i][j];
				p = 1;
			}
			else
			{
				k = a[i][j];
				p = 1;
			}
			
			if(j == m-1 && p>=3)
			{
				int q = j;
				for(int l=0;l<p;l++)
				{
					b[i][q] = 1;
					q--;
				}
			}
			
		}
	}
	
	// ����������ظ����μ����ϵ����֣�������㷽ʽһ���������Ƚ���ת�ã�����֮ǰ�������м��㣬
	// �����ת�û������൱�ڶ���������ظ��������ϵ����֡� 
	//�Ծ������ת�� 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			c[j][i] = a[i][j];
		}
	}
	
	for(int i=0;i<m;i++)
	{
		int p=1;
		int k = c[i][0];
		for(int j=1;j<n;j++)
		{
			if(c[i][j] == k)
			{
				p++;
			}
			else if(p >= 3)
			{
				int q = j;
				for(int l=0;l<p;l++)
				{
					c[i][q-1] = 0;
					q--;
				}
				k = c[i][j];
				p = 1;
			}
			else
			{
				k = c[i][j];
				p = 1;
			}
			if(j == n-1 && p>=3)
			{
				int q = j;
				for(int l=0;l<p;l++)
				{
					c[i][q] = 0;
					q--;
				}
			}
		}
	}
	
	// �ٽ���ת�� 
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[j][i] = c[i][j];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(b[i][j] == 1)
				a[i][j] = 0;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


/*
#include <stdio.h>

int main(void)
{
	
}
*/	
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	



















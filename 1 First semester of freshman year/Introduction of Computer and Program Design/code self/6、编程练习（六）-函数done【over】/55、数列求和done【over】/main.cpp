/*
����	
�������

���
������ݹ�

ʱ������	
1S

�ڴ�����	
1000Kb

��������	
��һ�������У�
2/1,3/2,5/3,8/5,13/8,21/13,......An/Bn
A1=2��A2=3��An=An-1+An-2��
B1=1��B2=2��Bn=Bn-1+Bn-2��
���������е�ǰn(2<=n<=30)��֮�͡�

����˵��	
һ������n

���˵��	
���һ��ʵ����ʾ����ǰn��֮�ͣ��������2λС�����������룩

��������	
2
�������	
3.50
*/

# include <stdio.h>

//�����������øú�����������е�ǰn��ͣ� 
float Sn(float n)
{
	float Bn[31];
	float An[31];
	float Sn;
	
	An[0] = 2;
	An[1] = 3;
	
	Bn[0] = 1;
	Bn[1] = 2;
	
	if(n == 2)
		Sn = 3.50;
	else if(n > 2)
	{
		Sn = 3.50; 
		for( int i=2; i<n; i++)
		{
			An[i] = An[i-1] + An[i-2];
			Bn[i] = Bn[i-1] + Bn[i-2];
			Sn = Sn + (An[i]/Bn[i]);
		}		
	} 
	return Sn;
}

int main(void)
{
	float n;
	scanf("%f", &n);
	
	printf("%.2f", Sn(n)) ;
	
	return 0;
}
 

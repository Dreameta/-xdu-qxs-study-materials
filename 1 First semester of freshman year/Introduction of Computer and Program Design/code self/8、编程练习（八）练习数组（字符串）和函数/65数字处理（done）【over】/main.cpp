# include <stdio.h>

int main(void)
{
	/*��ʼ������*/
	/*******************������ʼ��********************/
	int sum(int x);
	//int iteration_sum_units_digit(int n);
	/************************************************/
	
	/*��������*/
	int n;
	scanf("%d", &n);
	
	int sum_n; //��������n�ĸ���
	int result_n = 0; //�������ÿλ���ֵĺ� 
	
	while(1)
	{
		
		for(sum_n = sum(n); sum_n>0; sum_n--)
		{	
			result_n = result_n + (n % 10);
			
			n =  n / 10;
			
			//if(result_n >= 0 && result_n <= 9)
			//ǧ��Ҫע����ѭ������ʱ��һ��Ҫע��ÿλ���������� 
			if(result_n >= 0 && result_n <= 9 && sum_n==0)
				break;
		} 
		
		if(result_n >= 0 && result_n <= 9 && sum_n==0)
			break;
		else
		{
			n = result_n;
			result_n = 0; 
		}

	}
	
	printf("%d", result_n);
	
	return 0;
}

//sum����:����һ�������ж���λ�� 
int sum(int x)
{
	int i; //ѭ���������� 
	for(i=1; i>0; i++)
	{
		x = x/10; //�������Ϊȥβ�� 
		if (x == 0)
		break;
	 } 
	return i;
}


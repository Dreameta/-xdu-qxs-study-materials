# include <stdio.h>
# include <math.h>

//sum����:����һ�������ж���λ�� 
double sum(double x)
{
	int y;
	y = (int)x;
	int i; //ѭ���������� 
	for(i=1; i>0; i++)
	{
		y = y/10; //�������Ϊȥβ�� 
		if (y == 0)
		break;
	 } 
	return i;
}

//narcissistic_number����������ĳ��[a,b]��Χ�ڵ�ˮ�ɻ��� 
int narcissistic_number(double a, double b)
{
	int sum_narcissistic_number = 0; //��¼�м���ˮ�ɻ��� 
	double number; //��¼��i�����м������м�λ�� 
	
	for(double i=a; i<=b; i++) //С�᣺����ͨ��forѭ���������������� 
	{
		int b = (int)i; //������ʱ����Ҫ����aֵ�����Ҹ��滻ֵ�� 	
	
		//�ȼ���λ���� 
		number = sum(i);
		if (number == 1)
			continue;
		
		//��ˮ�ɻ����ļ��㷽ʽ���м��㣻
		double intermediate_variable = 0; //��Ǽ�¼��ˮ�ɻ������㷽ʽ����Ľ�� 
		for(int j = number ; j>0; j--)
		{
			intermediate_variable =  intermediate_variable + pow((double)(b%10),number); 
			b /= 10;
		}
		
		//��֤�Ƿ�Ϊˮ�ɻ��� 
		if(i == intermediate_variable)
			sum_narcissistic_number ++;
		else
			continue;		
	} 
	
	return sum_narcissistic_number;
}

int main(void)
{
	double a, b;
	scanf("%lf%lf", &a, &b);
	
	printf("%d", narcissistic_number(a,b));
	
	return 0;
}

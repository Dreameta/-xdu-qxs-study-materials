# include <stdio.h>

//�������ж��Ƿ�Ϊ������ 
bool f(int n)
{
	int m; //������n�ĵ�λ����
	m = n; 
	
	int sum = 0;
	
	for(int i=0; m>0; i++) //ע�����ִ�������� 
	{
		sum = (sum*10)+ (m%10);
		m = m/10;
	} 
	
	if ( sum == n)
		return true;
	else
		return false;
}

//����������ÿλ����֮�� 
int g(int n) 
{
	int i; //ѭ���������� 
	int sum = 0; //����ÿλ���� 
	
	for(i=0; n>0; i++)
	{
		sum = sum + n%10;
		n /= 10;
	}
	
	return sum; 
}

int main(void)
{
	int n;
	
	scanf("%d", &n);
	
	if (f(n))
		printf("%d", g(n));
	else
		printf("no");
	
	return 0;
}


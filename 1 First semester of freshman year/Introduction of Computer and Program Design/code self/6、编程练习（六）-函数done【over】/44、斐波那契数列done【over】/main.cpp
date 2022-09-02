# include <stdio.h>

//���������nλ����쳲������� 
//����ֲ�Խ���̽�֣�ֻ���޸�f쳲��������еĵ�һ������������ֱ����ֲ 
int fib(int n)
{
	int m[41];
	m[0] = 1;
	m[1] = 1;
	int p; //��Ϊ���ֵ 
	
	int i; //ѭ������ 
	
	if (n == 0)
		p = m[0];
	else if (n == 1)
		p = m[1];
	else
	{
		for (i=2; i<=n; i++)
		{
			m[i] = m[i-1] + m[i-2];
		}
	}
	return m[n-1]; //������n�����±ꡪ���±��������������ʾ	 	
} 

//�������ж��Ƿ�Ϊ���� 
bool prime_number (int m)
{
	if (m == 1)
		return true;
	for(int i=2; i<m; i++)
	{
		if(m%i != 0)
			continue;
		else
			return false;
	} 
	return true;
}

int main(void)
{
	int n;
	scanf("%d", &n); //���岢������Ҫ��ĵ�n������ 
	
	int fib_n; //��nλ��쳲��������е���
	fib_n = fib(n);
	
	if(prime_number(fib_n))
		printf("yes");
	else
		printf("%d", fib_n);
	 
	return 0;
 } 

/*
# include <stdio.h>

//���������nλ����쳲������� 
//����ֲ�Խ���̽�֣�ֻ���޸ĵ�һ������Ԫ�ر����ֱ����ֲ 
int fib(int n)
{
	int m[41];
	m[0] = 7;
	m[1] = 11;
	int p; //��Ϊ���ֵ 
	
	int i; //ѭ������ 
	
	if (n == 0)
		p = m[0];
	else if (n == 1)
		p = m[1];
	else
	{
		for (i=2; i<=n; i++)
		{
			m[i] = m[i-1] + m[i-2];
		}
	}
	return m[n]; //������n�����±ꡪ���±��������������ʾ	 	
} 

int main(void)
{
	int n;
	scanf("%d", &n);
	
	printf("%d", fib(n));
	
	return 0;
}
*/

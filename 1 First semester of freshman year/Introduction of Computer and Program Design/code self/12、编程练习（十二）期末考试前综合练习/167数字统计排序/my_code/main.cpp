//second my code

#include <stdio.h>

struct number{
	int example;
	int sum;
};

int main(void)
{
	//�����ʼ���ݣ����벢���� 
	int n;
	scanf("%d", &n);
	
	//ֻ��¼��Ӧ���� 
	int num; //������
	int sum[1001] = {0}; //�����ֳ��ִ��� 
	for(int i=0; i<n; i++)
	{
		scanf("%d", &num[i]);
		sum[num[i]]++;
	}
	
	//��¼	 
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(num[i].sum < num[j].sum)
			{
				struct number temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
			if(num[i].sum == num[j].sum)
			{
				if(num[i].example > num[i].example)
				{
					struct number temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				} 
			}	
		}
	} 
	
	/*
	//�Ƚ�1-1000��ֵ����Ӧ��λ�� 
	int num_0[1000] = {0};
	for(int i=0; i<1000; i++)
	{
		num_0[i] = i;
	} 
	
	//������Ӧ��ֵ 
	int num_1[1000] = {0}; 
	for(int i=0; i<n; i++)
	{
		scanf("%d", &num_1[i]);
	}
	
	//��1000λ���ڵ����ַ�����һ�������У�ͬʱ���ýṹ������¼���Ӧ�Ĵ��� 
	struct number num[1000] = {0, 0}; 
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<1000; j++)
		{
			if(num_0[j] == num_1[i])
				num[i].sum++;		
		}
	}
	
	//����
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(num[i].sum < num[j].sum)
			{
				struct number temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
			if(num[i].sum == num[j].sum)
			{
				if(num[i].example > num[i].example)
				{
					struct number temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				} 
			}	
		}
	} 
	
	for(int i=0; i<1000; i++)
	{
		printf("%d %d\n", num[i].example, num[i].sum);
	}	
	*/
	
	return 0;
}

















//first my code

/*
#include <stdio.h>

struct number{
	int example;
	int sum;
};

int main(void)
{
	//�����ʼ���ݣ����벢���� 
	int n;
	scanf("%d", &n);
	
	//�Ƚ�1-1000��ֵ����Ӧ��λ�� 
	int num_0[1000] = {0};
	for(int i=0; i<1000; i++)
	{
		num_0[i] = i;
	} 
	
	//������Ӧ��ֵ 
	int num_1[1000] = {0}; 
	for(int i=0; i<n; i++)
	{
		scanf("%d", &num_1[i]);
	}
	
	//��1000λ���ڵ����ַ�����һ�������У�ͬʱ���ýṹ������¼���Ӧ�Ĵ��� 
	struct number num[1000] = {0, 0}; 
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<1000; j++)
		{
			if(num_0[j] == num_1[i])
				num[i].sum++;		
		}
	}
	
	//����
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(num[i].sum < num[j].sum)
			{
				struct number temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
			if(num[i].sum == num[j].sum)
			{
				if(num[i].example > num[i].example)
				{
					struct number temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				} 
			}	
		}
	} 
	
	for(int i=0; i<1000; i++)
	{
		printf("%d %d\n", num[i].example, num[i].sum);
	}	
	
	return 0;
}
*/








#include <stdio.h>
#include <string.h>

int main(void)
{
	/*��������*/
	char str[100] = {0};
	gets(str);
	
	/*�ҳ����ϵ����ݣ���ֵ����һ������*/
	char str_1[100] = {0};
	int j = 0;
	for(int i=0; i<strlen(str); i++)
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			str_1[j] = str[i];
			j++;
		}
	}
	
	if(str_1[0] != '\0' )
	{
		int x = 0; //ת������Ӧ�������� 
		for(int i=0; i<strlen(str_1); i++)
		{
			x = x*10 + str_1[i] - '0'; //�ַ���������ת�������������� 
		}
		
		if(x>2)
		{
			int i;
			for(i=x-1; ; i--)
			{
				if(x % i == 0)
					break;
			} 
			printf("%d", i);
		}
		else //������� 
			printf("%d", x);
	}
	else
		printf("0");
	//ע�����else����û�����ִ����ʱ�򣬾Ͳ���Ҫת�����ֺ����������
	//����Ҫע��û�����ִ��滹�������������ת������������������û�б�Ҫ�Ĳ�� 
	
	return 0;
}

/*
int greatest_common_factor(int x, int str[])
{
	int sum = y;
	for(int i=2; ; i++)
	{
		
		y = x % i; 
	}
}
*/


#include <stdio.h>
#include <string.h>

int main(void)
{
	char l; //����if����еıȽ�Ӧ��ֱ��дl��������'l' 
	int n;
	scanf("%c%d", &l, &n);


	char str[100];
	getchar(); //������L 0ʱ�ᰴ�»س������������䣬��gets()������س�Ϊ���������,��������Ϊ�� 
	gets(str);

	int sum = 0; //���ڼ��� 
	if(n == 0)
	{
		for(int i = 0; i<strlen(str); i++)
		{
			//if(str[i] <= 'a' && str[i] >= 'z')
			if(str[i] >= 'a' && str[i] <= 'z')
			{
			//	if(str[i] == l ||  str[i] == l - 32)
				if(str[i] == l ||  str[i] == l + 32)
				{
					sum++; 
				} 
				else
					continue;
			}
			
		//	if(str[i] <= 'A' && str[i] >= 'Z')
			if(str[i] >= 'A' && str[i] <= 'Z')
			{
			//	if(str[i] == l ||  str[i] == l + 32)
				if(str[i] == l ||  str[i] == l - 32)
				{
					sum++; 
				} 
				else
					continue;
			}
		}
	}
	
	else
	{
		for(int i = 0; i<strlen(str); i++)
		{
			if(str[i] == l)
				sum++;
		}
	}	
			
	printf("%d", sum);

	return 0;
} 


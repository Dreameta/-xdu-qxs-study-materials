#include <stdio.h>
#include <string.h>

int main (void)
{
	/*��������*/
	char str[5];
	char*p = str;
	
	gets(str); 
	
	/*���ַ������д���*/
	//��Сд��ĸת�� 
	for (int i = 0; i< strlen(str); i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32; 
	} 
	
	//ͨ��ָ����ƶ�Ӧλ�ý������ 
	//������������ָ��ֱ�������Ӧλ�õ��ַ� 
	for (int i = 0; i<(strlen(str)/2+1) ; i++)
	{
		printf("%c", p[0]);
		p = p + 2;
	}
	printf("!");
	
	return 0;
}

/*��һ�γ�����д 
int main (void)
{
	char str[5];
	char*p = str;
	
	for(int i = 0; i<9; i++)
	{
		scanf("%c", &str[i]);
	}
	
	//ȥ��|��
	for (int i = 0; i<strlen(str); i++)
	{
		if (str[i] == '|')
			str[i] = ' ';
	} 
	
	//��Сд��ĸת�� 
	for (int i = 0; i< strlen(str); i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32; 
	} 
	
	//ȥ�ո� 
	//int temp1, temp2;
	/*
	int t;
	for( int i = 0; i< strlen(str); i++)
	{
		if(str[i] == ' ')
		{
			t = str[i+1];
			str[i+1] = str[i];
			str[i] = t;
			
			temp1 = str[i+1];
			str[i] = temp1;
			str[i+1] = ' ';
			
			for(int j = i; j < strlen(str); j++)
			{
				temp2 = str[j+2];
	            str[j+1] = temp1;
	      		temp1 = temp2;
			}
		}
	}

	
	for (int i = 0; i<strlen(str) ; i++)
	{
		printf("%c", str[i]);
	}
	printf("!");
	
	return 0;
}
*/






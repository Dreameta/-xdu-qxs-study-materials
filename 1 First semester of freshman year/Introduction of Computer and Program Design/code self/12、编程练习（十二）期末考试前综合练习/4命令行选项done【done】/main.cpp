//�Լ��Ĵ��� 

#include <stdio.h>
#include <string.h>

int main(void)
{
	//�������� 
	char str[255];
	gets(str);
	
	//���������ݴ�����һ�������� 
	char str_1[255] = {0}; //�����е���ĸ��ȡ��������ע���ʼ����������л����� 
	int j = 0; 
	for(int i=0; i<strlen(str)-1; i++)
	{
		if(str[i] == '-')
			if(str[i+1] >= 'a' && str[i+1] <= 'z')
			{
				str_1[j] = str[i+1];
				j++;
			}
	}
	
	//����+���ظ���� 
	if(str_1[0] != '\0') //�������ĸ�Ļ���������������� 
	{
		for(int i=0; i<strlen(str_1)-1; i++)
		{
			for(int j=i+1; j<strlen(str_1); j++)
			{
				if(str_1[i] > str_1[j])
				{
					char t = str_1[i];
					str_1[i] = str_1[j];
					str_1[j] = t;
				}
			}
		}
	
		for(int i=0; i<strlen(str_1); i++)
		{
			if(str_1[i] != str_1[i+1]) //����ɨ�裬������ͬ���������>����رܿ���ȥ���ظ����ݵ��㷨 
	   			printf("-%c ", str_1[i]);
		}
	}
	
	else
		printf("no");
	
	return 0;
}





/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	
	char a[255]={'\0'}, b[200]={'\0'};
	gets(a);
	
	int flag=0, j=0, count=0, limit=0;
	
	//ÿ���ַ����з��� 
 	for(int i=0; a[i] != '\0'; i++)
 	{
		if(a[i] == '-')
	    {
			flag = 1;
			limit = 0;
		}
	  	else if(a[i] == ' ')
	  		flag = 0;
		else if(flag == 1 && limit < 1)
		{
			b[j++] = a[i]; //�ȸ�ֵ�������� 
			count++;
		 	limit++;
		}
	}
	
	if(count > 0)
	{
		for(int i=0; i<strlen(b)-1; i++)
	    	for(j=0; j<strlen(b)-1-i; j++)
	    	{
				if(b[j]>b[j+1])
		   		{
					char temp=b[j];
			    	b[j]=b[j+1];
			    	b[j+1]=temp;
				}
			}
		/*
		if(count > 0)
		{
			for(int i=0; i<strlen(b); i++)
			{
				if(b[i] != b[i+1])
		   		printf("-%c ",b[i]);
			}
		}
		//
		for(int i=0; i<strlen(b); i++)
		{
			if(b[i] != b[i+1])
	   			printf("-%c ",b[i]);
		}
	}
	
	else
		printf("no");
	
	return 0;
}
*/

/*

ѧϰ����һ 

#include <stdio.h>
#include <string.h>

int main(void)
{
	//�������ݣ� 
	char string[256];
	gets(string);
	
	int n;
	
	int flag = 0;
	
	int j = 0;
	
	char str[100][20]; 
	for(int i=0; string[i] != '\0'; i++)
	{
		
		if(string[i] == '-')
		{
			flag=1;//���������ڣ����Բ���no
			
			for(int k=0; string[i] != ' ' && string[i] != '\0'; i++, k++)
				str[j][k] = string[i];
				
			str[j][k] = '\0';  //��ά���������ַ�����һ�� �����\0����
			
			j++; //j�����б� k�����б� ��iΪԭ�ַ��������� 
		}
		
		if(string[i]=='\0') 
			break;//����û����
		
	}
	n=j;//��ʱ��jΪ������Ҳ���Ǵ���-���������������
	
	if(flag)//����������� ���Ľ���ֱ���ж�n�Ƿ�Ϊ0����
	{
		for(int i=0;i<n-1;i++)//ѡ������ ��string����ظ����� 
		{
			k=i;
			for(int j=i+1;j<n;j++)
				if(strcmp(str[k],str[j])>0) k=j;
			if(k!=i)
			{
				strcpy(string,str[i]);
				strcpy(str[i],str[k]);
				strcpy(str[k],string);
			}
		}
		
		strcpy(string, str[0]);
		printf("%s", string);
		for(int i=1; i<n; i++)
		{
		 	if(strcmp(string, str[i]) != 0)
		 	{
		 		strcpy(string, str[i]);
		 		printf(" %s", string);
			}
		} 
	}
	else printf("no");
	
	return 0;
}

*/



// ����ѧϰ
//���򣺱����Ǹ�ѡ��ṹ 

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[55];
	gets(str);
 	// scanf("%s",str);

	//�����˼·��һ�μ��ÿ��λ�õ��ַ���������Ӧ���� 
	int a=0, b=0, c=0; //�������ŵļ��� 
	int flag=0;	
	for(int i=0; i<strlen(str); i++)
	{
		
		//ǰ����if�Ǽ�¼��߷��ŵ���Ŀ 
		if(str[i]=='(') 
			a++;
		else if (str[i]=='[') 
			b++;
		else if (str[i]=='{') 
			c++;
			
		//������if�Ǽ�¼�ұ߷��ŵ���Ŀ 
		else if (str[i]==')')
		{
			a--;
			if(a<0)
			{
				flag=1;
				break;
			}
		}
		else if (str[i]==']')
		{
			b--;
			if(b<0)
			{
				flag=1;
				break;
			}
		}
		else if (str[i]=='}')
		{
			c--;
			if(c<0)
			{
				flag=1;
				break;
			}
		}
		
	}
	
	if(flag==0 && a==0 && b==0 && c==0)
		printf("yes");	
	else
		printf("no");
	//���飺�������е�if���һ��Ҫ���ǵ����е������ʡ�Ե���else������˵��������� 
}









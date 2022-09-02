
//studycode
/*
#include<stdio.h>
#include<string.h>

int my_pow(int n)
{
    int i;
    int sum=1;
  	for(i=1; i<=n-1; i++)
  	{
      	sum*=10;
  	}
    return sum;
}

void swap (int *x , int *y)
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}

int main(void)
{
   	char x[101];
   	gets(x);
   	int len = strlen(x);
   	int i,j;
  	int zx[100]={0}; //�������� 
   	int k=0;
   	int a=0;       //��¼�������ֶθ��� 
   	
  	for (i=0; i<=len-1; i++)
  	{
      	if (x[i]>='0' && x[i]<='9')
      	{	
         	a++;            
          	int tempi=i;
         	int templen=0;    //��¼�����ֵ����泤��
          	while (x[tempi]>='0' && x[tempi]<='9')  //��һ��ɨ�����泤��
          	{
              	templen++;
              	tempi++;
          	}
           	tempi=i;
           	
           	i+=templen;  //�������Ҫ��i��������
          	while (x[tempi]>='0' && x[tempi]<='9')  //�ڶ���ɨ�����֣�ת������
          	{
              	zx[k] += (x[tempi]-'0') * my_pow(templen);
              	templen--;
              	tempi++;
          	}
           	k++;
      	}
  	}
	
	//���� 
	for (i=0; i<a-1; i++)
  	{
       	for (j=0; j<a-1-i; j++)
       	{
           	if (zx[j]<zx[j+1])
           	{
            	swap(zx+j,zx+j+1);
           	}
       }
   	}
	
	//��� 
   	for (i=0; i<=a-1; i++)
   	{
       	printf("%d ",zx[i]);
   	}

    return 0;
}
*/

//mycode
 
#include <stdio.h>
#include <string.h> 

int main(void)
{
	char str[100] = {'\0'};
	gets(str);
	
	int str_nub_sum = 0; //ͳ�ƹ��ж��ٽ�����
	int str_save[100] = {0}; 
	
	/*����ַ�����ȡ������λ���ֵķ���*/
	for(int i=0; i<strlen(str); i++)
	{
		//��˼·���ȼ�¼�����ַ������ȣ�Ȼ�󰴳��Ƚ������͸�ֵ
		 
		if(str[i] >= '0' && str[i] <= '9')
		{
			//STEP1����������ɨ���Ӧ�ַ�������¼ÿС�����ֳ���
			int str_nub_len = 0;
			for(int j=i; (str[j] >= '0' && str[j] <= '9'); j++)
			{
				str_nub_len++;
			}
			
			//STEP2:��������ȵ����֡��ۡ���������ֵ��һ�����鴢�� 
			for(int k=i; k<i+str_nub_len; k++)
			{
				str_save[str_nub_sum] = str_save[str_nub_sum] * 10 + str[k] - '0';
			}
			
			//STEP3����¼���ֵĽ���
			str_nub_sum++;
			
			//�ָ�i��ɨ��λ�� 
			i = i + (str_nub_len-1);
		}
	}
	
	/*ѡ������*/
	for(int i=0; i<str_nub_sum; i++)
	{
		for(int j=i+1; j<str_nub_sum; j++)
		{
			if(str_save[i] < str_save[j])
			{
				int temp = str_save[i];
				str_save[i] = str_save[j];
				str_save[j] = temp;
			}
		}
	}
	
	/*���*/
	for(int i=0; i<str_nub_sum; i++) 
	{
		printf("%d ", str_save[i]);
	}
	
	return 0;
}







//study code 1
/*
	study point
	(1)ֱ������ѭ�������Ӷ���������ɸѡ 
*/ 
/*
#include <stdio.h>
int main() 
{ 
	//�������ݣ����Բ������ݽ���ͳ�� 
  	int n;
  	scanf("%d", &n);
  	
  	int a[1005]={0}; //��ʼ��ÿ�����ֳ��ֵĴ���Ϊ0 
	int num;
	for(int i=1; i<=n; i++)
	{ 
		scanf("%d", &num);
		a[num]++;	//�������ͳ�����ֳ��ֵĴ��� 
	} 
	
	//�������� 
	for(int i=1000; i>0; i--)  //i������ǳ��ֵĴ��� ���Ϊ1000��ֱ�ӶԳ��ֵĴ����ɶൽ�ٽ��������� 
		for(int j=0; j<=1000; j++) //������0��ʼ����������ֱ�ӴӴ�С�������� 
			if(a[j] == i)	//������һ�����ֵĳ��ִ���Ϊi 
				printf("%d %d\n", j, a[j]);
				
	return 0;
}
*/
//study code 2
 
#include <stdio.h>

struct sort{
	int num;
	int times;
};
/**************************��������********************************************
*all					������ 
*num[all],xnum[all]		����ԭֵ�ʹ���ϲ��õ�ֵ
*i,j,k,l 				��ʱ���� 
*struct sort{
	int num;			���� 
	int times;			���� 
};
*******************************************************************************/
int main()
{

	/*�������1*/ 
	int all;
	scanf("%d",&all);
	
	/*�������2 ���塾��֧��C99�Ժ�*/
	struct sort num[all],xnum[all];
	for(int i=0;i<all;i++)
 		scanf("%d", &num[i].num);
	
	/*��ʼ����ÿ�����ֳ��ֵĴ�������Ϊ1*/
	int l=0;
	for(int i=0; i<all; i++)
		num[i].times=1;
	
	/*�ϲ�*/ 
	for(int i=0; i<all; i++)
 		for(int j=i+1; j<all; j++)			  			  
			if(num[i].num == num[j].num)
			{
				num[j].times = num[j].times + num[i].times;
				num[i].num = -1;
				break;
			}	
	
	/*����ת��*/	
	for(int i=0; i<all; i++)
		if(num[i].num >= 0)
		{
			xnum[l].num = num[i].num;
			xnum[l].times = num[i].times;
			l++;
		}

	/*����*/	
	for(int i=0; i<l-1; i++)
		for(int j=i; j<l; j++){
			if(xnum[i].times < xnum[j].times)
			{
				int k=xnum[i].times;
				xnum[i].times=xnum[j].times;
				xnum[j].times=k;
				
				k=xnum[i].num;
				xnum[i].num=xnum[j].num;
				xnum[j].num=k;
			}
			else if(xnum[i].times==xnum[j].times){
				if(xnum[i].num>xnum[j].num){
					int k=xnum[i].num;
					xnum[i].num=xnum[j].num;
					xnum[j].num=k;
				}
			}
		}	
	
	/*��ӡ*/
	for(int i=0;i<l;i++)
		printf("%d %d\n",xnum[i].num,xnum[i].times);
		
	return 0;									  				  			  
 } 





















# include <stdio.h>

/*
心得：做一个题就当做学习一种算法；
1、排序算法在指针中的实现； 
2、输出算法，需要每行进行改变，通过循环输出相应的结果； 
*/ 

int main()
{
	/*声明函数*/
	void place(int *p,int a,int b); //只是声明函数 
	
	/*输入数据*/
	int num[50],*p1,m,n; //定义所需变量 
	
	scanf("%d%d", &m, &n); //输入分成的行和列； 
	
	for(p1 = num; p1 < (num + m*n); p1++)
		scanf("%d", p1);
 //☆很重要：用指针表示数组的输入。思路：将数组首地址赋给指针，scanf直接赋值给指针对应的变量，随后指针自增进行输入。 
	
	p1=num; //将p1的地址初始化，进入函数执行。 
	
	place(p1, m, n); //分别代表，指针，行，列； 
	
	return 0;
 } 

void place(int *p, int a, int b)
 {
 	/*先选择排序*/
	for(int i=0; i<a*b-1; i++) 
    	for(int j=0; j<a*b-1-i; j++) 
			if(*(p+j+1) < *(p+j)) 
			    {
					t=*(p+j);
					*(p+j)=*(p+j+1);
					*(p+j+1)=t;
				}
			
	/*算法：进行S型输出*/
	int flag = 1; 
	for(int i=0; i<a; i++) //先一行一行的输入 
	{
		if(flag == 1)
		{
			for(int j = b*(i+1)-1; j >= b*i; j--) //分别含义：每行最后一位的位置，每行的起始位置，递减输出； 
			{
				printf("%3d", *(p+j));	
				
				if(j == b*i && i!=a-1) //当 j（控制列的变量） 加到这行的在最后一位，而且i（控制行的变量）不是最后一位，那么就要输出一行空格，使得下一行的数据进行输出； 
					printf("\n");
			}
			///change
			flag = 0;
		}
		
		else
		{
			for(int j = b*i; j <= b*(i+1)-1; j++) //和上面完全对应相反，也就是反向输出； 
			{
				printf("%3d", *(p+j));
				
				if(j == b*(i+1)-1 && i!=a-1) 
					printf("\n");
			}
			///change
			flag = 1;
		}
	
	/*
	这里有个输出算法：当输出需要s型输出时，需要以下的几个思路： 
	1、利用flag进行标注，来转换输出方向；
	2、注意每种循环的各种参数调整，使得能够实现题目中“S“形式的输出； 
	*/
	
	}
 }




#include <stdio.h>

//����ѧϰ����Ҫ˼·��ֱ����������˳��Ľṹ�������򡢼���ͳһ������ 
int main(void)
{
	/*��������1*/
	int n;
	scanf("%d", &n); 
	/*��������2+����*/
	int integer[100000] = {0};
	int integer_n; //��Ӧ����
	for (int i = 0; i < n; i++ )
	{
		scanf("%d", &integer_n); //��Ӧ��ÿλ���� 
		integer[integer_n]++; //ÿλ���ֳ��ִ����ļ�¼ 
	}
	
	/*���������������*/
	for(int i=0; i<100000; i++)
	{
		if(integer[i])//ֻҪ����0���ͻ������ 
		{
			printf("%d:%d\n", i, integer[i]); 
		}
	} 
	
	return 0;
}



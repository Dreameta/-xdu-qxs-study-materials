#include <stdio.h>

int main()
{
	int n;
	int an[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &an[i]);
	
	//�Ƚ�������
	for (int i = 0; i <n; ++i)  
		for (int j = i + 1; j < n; ++j)  
			if (an[j] < an[i])
			{
				int t = an[i];
				an[i] = an[j];
				an[j] = t;  //����Ľ����ǽ���iλ֮����Сֵ���н��� 
			} 
	
	//Ȼ���жϵȲ�
	for(int i=0; i<n-2; i++)
	{
		if (an[i+1]-an[i] != an[i+2]-an[i+1])
		{
			printf("no");
			return 0;
		}
		else
			continue;
	} 
	
	printf("%d", an[1]-an[0]);
	
	return 0;
} 








# include <stdio.h>
# include <string.h>

int main(void)
{
	bool judgement_Palindrome_string(char* p);

	char x[50];
	gets(x);
	
	char* p = x; //�������ַת����ָ��
	
	if (judgement_Palindrome_string(p))
		printf("yes");
	else
		printf("no");
	
	return 0;
}

bool judgement_Palindrome_string(char* p)
{
	//step1����Ҫ��¼��ָ���Ӧ������ĳ��ȣ��Ա�֮��֪��ѭ����ֹ�Ľ��� 
		//����һ�����ü����ַ������ȵĺ���
		/*
		int sum;
		sum = strlen(p);
	 	*/
		//��������ֱ�ӱ�д��Ӧ����
		
		int sum = 0; 
		char *m = p; //�ڼ��㳤�ȵĹ����У�����ָ�뱻�ı� 
		while(*m != '\0')
		{
			sum++;
			m++;
		}
		
		//for(sum = 0; *p != '\0'; sum++){}
		
	//step2���ж��Ƿ�Ϊ���ġ���Ҫ˼��������ǰ���Ӧλ���Ƿ�һ�� 
	for(int i = 0; i <= sum; i++){
		if(p[i] == p[sum-1]) //ע��ָ����±������Ϊ����ʹ�ã�
			 sum--; 
		else
			return false;
	} 
	return true;
}



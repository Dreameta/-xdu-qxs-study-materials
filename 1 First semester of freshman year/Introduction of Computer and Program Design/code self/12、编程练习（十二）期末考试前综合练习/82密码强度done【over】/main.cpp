#include <stdio.h>
#include <string.h>

//����ṹ�壬ͳһ������ʽ����¼���ַ����� 
struct score{
	int score_sum;
	/*
	int score_litte_letter;
	int score_capital_letter;
	int score_number;
	int score_no_letter;
	*/
	int score_basic; 
	int score_more1;
	int score_more2; 
};

int main(void)
{
	char password[100]; //�����ַ��� 
	gets(password);
	
	struct score SCORE = {0, 0, 0, 0}; //��¼��������ʼ�� 
	//��������ʹ���
	if (strlen(password) == 0)
		SCORE.score_basic = 0; //���ַ�����0 
	else
	{
		SCORE.score_basic = 1; //���ַ�����1 
		
		if(strlen(password) > 8)
			SCORE.score_more1 = 1;
		
		for(int i=0; i<strlen(password); i++)
			if(password[i] >= 'a' && password[i] <= 'z')
			{
				SCORE.score_more2++;
				break; 
			} 
		
		for(int i=0; i<strlen(password); i++)
			if(password[i] >= 'A' && password[i] <= 'Z')
			{
				SCORE.score_more2++;
				break; 
			}
			
		for(int i=0; i<strlen(password); i++)
			if(password[i] >= '0' && password[i] <= '9')
			{
				SCORE.score_more2++;
				break; 
			}	
		
		for(int i=0; i<strlen(password); i++)
			if ( ((password[i] >= '0' && password[i] <= '9')||(password[i] >= 'A' && password[i] <= 'Z')||(password[i] >= 'a' && password[i] <= 'z')) != true) 
			//attention��ע��ȡ������䣬��ʾʣ�·��������˵�� 
			//if ( (password[i] >= '0' && password[i] <= '9')||(password[i] >= 'A' && password[i] <= 'Z')||(password[i] >= 'a' && password[i] <= 'z') != 1)
			{
				SCORE.score_more2++;
				break; 
			}
		
		if(SCORE.score_more2 == 1)
			SCORE.score_more2 = 0;
		else if(SCORE.score_more2 == 2)
			SCORE.score_more2 = 1;
		else if(SCORE.score_more2 == 3)
			SCORE.score_more2 = 2;
		else
			SCORE.score_more2 = 3;	
	}
	
	SCORE.score_sum = SCORE.score_basic + SCORE.score_more1 + SCORE.score_more2;
	printf("%d", SCORE.score_sum);
	
	return 0;
}

 


# include <stdio.h>
# include <string.h>

int main(void)
{
	/*��ʼ������*/
	void copystr(char* p, int m);
	
	/*�������ݶ�*/
	char str[50];
	gets(str);
	char *p = str;
	
	int m;
	scanf("%d", &m);
	
	copystr(p, m);
	
	return 0;
}


/*
	@relief �ӵ�m��ضϲ���ֵ������������� 
*/
void copystr(char* p, int m)
{
	char str1[50] = {0};
	
	for(int i = 0; i<strlen(p); i++){
		str1[i] = p[m-1+i];
	}
	
	if(m > strlen(p))
		printf("error");
	else{
		for(int i = 0; i<(strlen(p))-m+1; i++){
			printf("%c", str1[i]);
		}
	}
}

/*
	С�᣺��ʵ����ⲻ��ָ��Ҳ�ǿ��Եģ�����û���漰��ָ���������㡣
	�����������ʵ�о�û��д�ĺܺã�ֻ����������Ľضϸ�ֵ��
	��Ҳ������������񣬽��Ҫ�Ѿ�������һЩ����Ҫ�Ҿ����һЩ�㷨���档 
*/




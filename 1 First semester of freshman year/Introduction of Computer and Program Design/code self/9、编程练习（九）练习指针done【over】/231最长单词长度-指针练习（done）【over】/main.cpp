# include <stdio.h>
# include <string.h>

/*
	���ܣ�ÿ�����ⶼ����ѵ��or�����Լ��߼��Ĳ�����֮���� 
*/

int main(void)
{
	void Find_the_longest_word (char *str);
	
	char string[100];
	
	for(int i = 0; i<100; i++){
		scanf("%c", &string[i]);
		if (string[i] == '.')
			break;
	}
	
	Find_the_longest_word(string);

	return 0;
}

void Find_the_longest_word (char *str)
{
	char *p = str; //�������ָ�루��ַ���������һ��ָ�������
	
	int sum[100] = {0}; //ʹ��������ж������
	int cycle_index = 0; 
	
	/*����ÿ�����ʵĳ��ȡ�һ��ǰ�ᣬÿ���ַ�ָ����ռ��1��bite��ƾ�������м����� */
	for (int i = 0; (*p != '.'); i++){ //ֻҪ������β�Ͳ�ֹͣѭ����
		if (*p == ' ')	//���пո��������ո� 
		{
			p++; //���������ո��Ӧ��λ�� 
			
			while( *p != ' ' ){ //ÿ���ո����һ�μ��� 
				p++; 
				sum[i]++;
				if(*p == '.')
					break;
			}
			/*
			������߼��ǲ��Եģ��� ���͡�.����������ʵ��һֱ�����ģ�����Ҫ˼��ÿ���߼���˳�� 
			while( (*p != ' ') || (*p != '.') ){ //ÿ���ո����һ�μ��� 
				p++; 
				sum[i]++;
			}
			*/
			cycle_index ++; //��¼ѭ������ 
		}
		else  //û�пո���ֱ�Ӽ��� 
		{
			while(*p != ' '){ //ÿ���ո����һ�μ��� 
				p++; 
				sum[i]++;
			}
			cycle_index ++; //��¼ѭ������ 
		}
	}
	
	/*�����㷨���ҳ�����ʵĳ��ȡ������������㷨�ҳ��������*/�� 
	for(int i = 0; i<cycle_index; i++){
		for(int j = i + 1; j<cycle_index; j++){
			if(sum[j] > sum[i]){
				int t;
				t = sum[j];
				sum[j] = sum[i];
				sum[i] = t;
			}	
		}
	}
	
	/*ֱ���ں�����������Ľ��*/
	printf("%d", sum[0]);

}






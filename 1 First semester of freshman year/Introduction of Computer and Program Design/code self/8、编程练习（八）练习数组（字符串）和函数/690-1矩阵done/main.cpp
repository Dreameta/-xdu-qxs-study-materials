//studycode from teacher 
#include <stdio.h>

int main(void)
{
	/*��������*/
	int m,n;
	scanf("%d%d",&m,&n);
	
	int matrix[100][100];
	for(int i=0; i<m; i++)
	{
		for(int j =0; j<n; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	
	/*�㷨����������*/ 
	int finding_one_flag; //����һ��1�ı�־ 
	int temp_start, temp_end, temp_length; //��¼ĳ��1�Ŀ�ʼ��βλ�úͳ��� 
	int longest_start, longest_end, max_length; //��¼�1�Ŀ�ʼ��βλ�úͳ���
	 
	for(int i=0; i<m; i++)
	{
		//��ʼ�����ݣ����û������1����ô����������-1 
		longest_start=-1;
		longest_end = -1;
		
		max_length=0;
		finding_one_flag=0;
		
		//ÿ��ÿ�е�ɨ�����ݣ�����ĳ��1���ٴ����ֹλ�� 
		for(int j =0; j<n; j++)
		{
			//�ж�����1�������ˡ�1 ��������ֻ������ʼ�ĵ�һ��
			//ע�⣺����ֻ�ǲ�����һ����֮�������1��ֻ��������� 
			if(finding_one_flag == 0 && matrix[i][j] == 1)
			{
				
				if(j == n-1)//���������������һλ����λ�þ������һλ 
				{
					if(1 > max_length)
					{
						longest_start = j;
						longest_end = j;
					}
				}
				
				else //��һλ����λ��δ���߽� 
				{
					temp_start = j; //ĳ��1�Ŀ�ʼλ 
					finding_one_flag = 1;	
				}
			}
			
			//�ж�����2_1_��ֹ�жϣ��Ѿ��ҵ�һ��1��λ�ã��ҵ�����0Ϊ��β��λ�� 
			else if(finding_one_flag == 1 && matrix[i][j] == 0) 
			{
				temp_end = j-1; //ĳ��1�Ľ���λ 
				finding_one_flag = 0; //���ҵ���־���и�ֵ��Ϊ0��
				
				temp_length = temp_end - temp_start + 1; //�����Ӧ���� ��> �������1������� 
				
				//�жϣ������ĳ��1�Ŀ�ʼ�����ͳ���λ �� ����н��� 
				if(temp_length > max_length)
				{
					longest_start=temp_start;
					longest_end = temp_end;
					max_length = temp_length;
				}		
					
			}

			//�ж�����2_2_��ֹ�жϣ�����������������һ����111111����û������������ֹ��������ôlongest_start��longest_end��ʼֵ�ǲ���ġ�  
			else if(finding_one_flag == 1 && matrix[i][j] == 1 && j == n-1)
			{
				
				temp_end = j;
				finding_one_flag = 0; 
				temp_length = temp_end - temp_start+1;
				
				//�жϣ������ĳ��1�Ŀ�ʼ�����ͳ���λ �� ����н��� 
				if(temp_length > max_length)
				{
					longest_start = temp_start;
					longest_end = temp_end;
				}
							
			}
			
		}

		printf("%d %d\n", longest_start, longest_end); //�������ֵ�λ�� 
		
	}

	return 0;
}




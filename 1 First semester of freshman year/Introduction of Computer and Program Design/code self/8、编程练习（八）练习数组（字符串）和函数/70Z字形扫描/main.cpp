//studycode 
#include <stdio.h>

#define LEFT_DOWN 2
#define RIGHT_UP  4
//������������־�����еĵ��� 

int main(void)
{
	/*��������*/ 
	int n;
	int matrix[100][100];
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}

	/*��ʼ����z����ɨ��*/
	int row, column; //�У��� 
	//int output_count = 0;
	int direction;
	int left_dowm_row, left_dowm_col, right_up_row, right_up_col;// 
	
	/*
	ѧϰ�㣺
	1�������ͨ�����ñ�־λ����ת�������º����ϵ�ɨ�� 
	*/
	direction = RIGHT_UP;
	for(int output_count=0; output_count<2*n-1; output_count++)
	{
		
		//
		/*�ж�ɨ��ķ�Χ*/
		if(output_count < n)//�����ڴﵽ���ɨ��߽�֮ǰ 
		{
			left_dowm_row = output_count;
			left_dowm_col = 0;
			right_up_row = 0;
			right_up_col = output_count;
		}
		else//���Ǵﵽ���߽�֮�� 
		{
			left_dowm_row = n-1;
			left_dowm_col = output_count - (n-1) ;
			right_up_row = output_count-(n-1);
			right_up_col = n-1;
		}
		
		/*����ɨ�貢���*/
		if(direction == RIGHT_UP)
		{
			
			row = left_dowm_row;
			column = left_dowm_col;
			do
			{
				printf("%d ", matrix[row][column]);
				row--;
				column++;
			}
			while(row >= right_up_row);
			///ת�� 
			direction = LEFT_DOWN;
		}
		else if(direction == LEFT_DOWN)
		{
			row = right_up_row;
			column = right_up_col;
			do
			{
				printf("%d ", matrix[row][column]);
				row++;
				column--;
			}
			//while(row <= left_dowm_row); ���� 
			while(column >= left_dowm_col);
			///ת��
			direction = RIGHT_UP;
		}
		//

	}
	return 0;
}


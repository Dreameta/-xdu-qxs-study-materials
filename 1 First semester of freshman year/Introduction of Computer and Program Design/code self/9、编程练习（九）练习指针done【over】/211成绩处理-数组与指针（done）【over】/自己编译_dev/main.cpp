# include <stdio.h>

/*
	@relief ���һ�ſε�ƽ���� 
*/
float aver(float a[5][4])
{
	float sum = 0;
	for (int i = 0; i<5; i++)
	{
		sum = sum + a[i][0];
	}
	
	float average_scores;
	average_scores = sum / 5;
	
	return average_scores;
}

/*
	@relief ͳ����2�����Ͽγ̲������ͬѧ���� 
*/
int fals(float a[5][4])
{
	int Nonconforming_number = 0;
	
	for(int i=0; i<5; i++)
	{
		int flag = 0;
		
		for(int j=0; j<4; j++)
		{
			if(a[i][j] < 60)
				flag++;	
		} 
		
		if(flag >= 2)
		Nonconforming_number++;	
	}
	return Nonconforming_number;
}

/*
	@relief ͳ�Ƴɼ��������� 
*/
int well(float a[5][4])
{
	
	int Number_of_Excellent_students = 0;
	
	for(int i=0; i<5; i++)
	{
		int flag = 0;
		float average_scores;
		int j;
		
		for(j=0; j<4; j++)
		{
			float sum = 0;
			sum = sum + a[i][j];
			average_scores = sum / 4;
		
			if(a[i][j] > 85)
				flag++;
		}
		
		if((average_scores > 90) && (j == 4))
			{
				Number_of_Excellent_students++;
				continue;
			}
		if(flag == 4)
			{
				Number_of_Excellent_students++;
				continue;
			} 
	} 
	
	return Number_of_Excellent_students;
}

int main(void)
{
	
	float stu[5][4];
	for (int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			scanf("%f", &stu[i][j]);
		}
	}
	
	float average_scores;
	average_scores = aver(stu);
	
	int Nonconforming_number;
	Nonconforming_number = fals(stu);
	
	int Number_of_Excellent_students;
	Number_of_Excellent_students = well(stu);
	
	printf("%.1f %d %d",average_scores, Nonconforming_number, Number_of_Excellent_students);
	
	return 0;
}




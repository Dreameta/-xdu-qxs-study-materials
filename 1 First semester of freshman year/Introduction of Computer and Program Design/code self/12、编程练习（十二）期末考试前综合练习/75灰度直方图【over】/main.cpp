#include <stdio.h>

int main()
{
	/*����*/ 
	int m,n;
	scanf("%d%d", &m, &n);
	
	/*���벢����*/ 
	int a[256][256],b[16]={0};
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf("%d", &a[i][j]);
			
			//��switc���м����������޸����ݶ�Ӧ 
			switch(a[i][j])
			{
				case 0: 
					b[0] = b[0] + 1;
					break; 
				case 1: 
					b[1] = b[1] + 1;
					break;
				case 2: 
					b[2] = b[2] + 1;
					break;
				case 3: 
					b[3] = b[3] + 1;
					break;
				case 4: 
					b[4] = b[4] + 1;
					break;
				case 5: 
					b[5] = b[5] + 1;
					break;
				case 6: 
					b[6] = b[6] + 1;
					break;
				case 7: 
					b[7] = b[7] + 1;
					break;
				case 8: 
					b[8] = b[8] + 1;
					break;
				case 9: 
					b[9] = b[9] + 1;
					break;
				case 10: 
					b[10] = b[10] + 1;
					break;
				case 11: 
					b[11] = b[11] + 1;
					break;
				case 12: 
					b[12] = b[12] + 1;
					break;
				case 13:
					b[13] = b[13]+1;
					break;
				case 14:
					b[14] = b[14]+1;
					break;
				case 15:
					b[15] = b[15]+1;
					break;
			}
		}
	}
	
	/*���*/
	//piont��ֱ������forѭ��˳������ 
	for(int i=0; i<16; i++)
	{
		if(b[i] == 0) 
			continue;
		else 
			printf("%d %d\n", i, b[i]);
	}	
	
	return 0;
 } 






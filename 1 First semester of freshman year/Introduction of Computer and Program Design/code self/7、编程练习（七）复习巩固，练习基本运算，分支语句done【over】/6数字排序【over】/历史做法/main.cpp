# include <stdio.h>

void selection_sort(int *a, int *b, int n) {
	for (int i = 0; i < n; ++i) {
		int ith = i;
		for (int j = i + 1; j <= n; ++j) {
			if (a[j] > a[ith])
				ith = j;
		}
		//����
		//����a��˵����������
		int t = a[i];
		a[i] = a[ith];
		a[ith] = t;

		//����b��˵��Ҫ���ú�ÿ�����ֵĶ�Ӧ
		int p = b[i];
		b[i] = b[ith];
		b[ith] = p;
	}
}
/*
������
�� a[0]= 27; a[1]=10; a[2]=2; a[3]=2; a[4]=1
n = 5

i=0
    ith=0
        j = 1
            a[1]<a[0] :  ith = j = 1
        j = 2
            a[2]<a[1] :  ith = j = 2
        j = 3
            a[3]=a[2] ;  stay  ith = 2
        j = 4
            a[4]<a[2] :  ith = j = 5
    t = a[1]
    a[i] = a[ith] = 1
    a[ith] = t;
˼·�ܽ�
    ÿ������ѭ���ҳ���С�ķ���ǰ��
    ���޸ĺ�������Ϊ
    �Ӵ�С���μ�С
*/

int main(void) {
	int n;//������������
	int m[1000];//��������ÿ������
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m[i]);
	}

	int Sn[1000] = {0};//��������ÿ��������ÿλ����֮��
	for (int i = 0; i < n; i++) {
		int t = m[i]; //ǧ��Ҫ��סҪ���������ı�������Ҫ���м��������
		for (int j = 0; t != 0; j++) {
			Sn[i] = Sn[i] + (t % 10);
			t = t / 10;
		}
	}

	//��������ѧϰ�㷨
	selection_sort(Sn, m, n);

	for (int i = 0; i < n; i++) {
		printf("%d %d", m[i], Sn[i]);
		printf("\n");
	}

	return 0;
}



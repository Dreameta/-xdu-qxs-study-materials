# include <stdio.h>

/*
	@relief �ж� n �Ƿ�Ϊ����
*/

bool Primes_judgment(int n) 
{
	int a = 0;
	if (n == 2)
		return true;
	else {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				return false;
			} 
		}
		return true;
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	//printf("%d %d\n", Primes_judgment(3),Primes_judgment(9));
	//˼·�����жϵ�һ�����ǲ������������жϵڶ������ǲ�������
	
	/*�����жϸ�°ͺղ��룬����ͷ���з�����ֵ������ӡ��ġ�����ǹؼ���˼ά*/
	for (int j = 2; j < n; j++) {
		if (Primes_judgment(j)) {
			if (Primes_judgment(n - j)) {
				printf("%d %d\n", j, n - j);
				break;
			} else
				continue;
		} else
			continue;
	}

	return 0;
}


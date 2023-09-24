#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int digits[100000] = { 0 };
int main()
{
	long long int ch, i = 0, j = 0, q, n;
	scanf("%lld", &n);
	for (; i < n; i++) {
		scanf("%lld", &ch);
		digits[i] = ch;
	}							//ch=n
	ch = n;
	n--;
	i = 0, j = 1;
	for (; j < ch; j++,i++) {
		q = digits[i] - digits[j];
		for (n=ch; n > 0; n--) {
			if (q >= 0) {
				if (q == n)
					break;
			}
			else {
				if (n == -q)
					break;
			}
		}
		if (n == 0) {
			printf("Not jolly");
			return 0;
		}
	}
	printf("Jolly");
	return 0;
}
	
	/*
	for (; n > 0; n--) {        //相减比对数
		for (j = 1; j < ch; j++) {        //两数相减j改变
			for (i = 0; i < j; i++) {     //两数相减i改变
				q = digits[i] - digits[j];
				if (q >= 0) {
					if (n == q)
						goto end;
				}
				else {
					if (n == ( - q))
						goto end;
				}
			}
		}
		printf("Not jolly");
		return 0;
	end:;
	}
	printf("Jolly");
	return 0;
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long long a, b, c;
	// 범위 a,b,c -> 1 ~ 10^12
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld", (a + b +c));

	return 0;
}

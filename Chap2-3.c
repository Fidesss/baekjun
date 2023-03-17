#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int year;
	scanf("%d", &year);

	if (1 <= year && year <= 4000) 
	{
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
			printf("%d", 1);
		}
		else
			printf("%d", 0);
	}
	//else
	//	printf("주어진 범위에 맞는 연도를 입력해 주세요!");

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B; // int형으로 하면 원하는 결과 출력, double형으로 하면 원하는 결과와 반대인 결과 출력 이게뭐냐?
	scanf("%d %d",&A,&B);

	if (A > B) {
		printf(">");
	}
	else if(A < B)
	{
		printf("<");
	}
	else
		printf("==");

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum, num, price, n;
	scanf("%d", &sum);
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		scanf("%d%d", &price, &n);
		sum = sum - (price * n);
	}
	if (sum == 0)
		printf("Yes");
	else
		printf("No");
	return 0;
}
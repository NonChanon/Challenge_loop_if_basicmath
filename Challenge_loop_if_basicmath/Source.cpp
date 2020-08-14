#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, i, x = 0;
	float sum = 0, sum1 = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > b)
	{
		for (i = a; i >= b; i--)
		{
			printf("%d ", i);
			sum += i;
			sum1 += (i * i);
			x += 1;
		}
		printf("\nAverage = %.1f", sum / x);
		printf("\nSD = %.2f", sqrt((x * sum1 - (sum * sum)) / ((x - 1) * x)));
	}
	if (a < b)
	{
		for (i = a; i <= b; i++)
		{
			printf("%d ", i);
			sum += i;
			sum1 += (i * i);
			x += 1;
		}
		printf("\nAverage = %.1f", sum / x);
		printf("\nSD = %.2f", sqrt((x * sum1 - (sum * sum)) / ((x - 1) * x)));
	}
	return 0;
}
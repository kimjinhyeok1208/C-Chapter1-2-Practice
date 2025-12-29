#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define p 3.14
int Circle()
{
	int r;
	printf("Enter radius:");
	scanf("%d", &r);
	double area = p * r * r;
	printf("Area:%.2f", area);

	return 0;
}

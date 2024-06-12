#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float r = 0.0f;

	float pi = 3.1415926;

	float v = 0.0f;

	if (scanf("%f", &r) != 1)
	{
		printf("error\n");

		return 1;
	}

	v = (4.0 / 3.0) * pi * r * r * r;

	printf("%.2f\n", v);


	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	printf("比较大小数字\n");

	int arr[4] = { 0 };

	int i = 0;

	int max = 0;

	while (i < 4)
	{
		if (scanf("%d",& arr[i]) != 1)
		{
			printf("error\n");
			return 1;
		}
		
		if (max < arr[i])
		{
			max = arr[i];
		}

		i++;
	}


	printf("%d\n", max);
	
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int arr[12] = { 73,32,99,97,110,32,100,111,32,105,116,33 };

	int i = 0;

	while (i >= 0 && i < 12)
	{
		printf("%c ", arr[i]);

		i++;
	}
	return 0;
}
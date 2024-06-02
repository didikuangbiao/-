#define _CRT_SECURE_NO_WARNINGS /*可以避免使用不安全的函数而导致编译器发出警报*/

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int an = 0;
//
//	while (an < 10000)
//	{
//		printf("继续导管%d\n", an);
//
//		an++;
//	}
//	if (an >= 10000)
//	{
//		printf("牛逼\n", an);
//	}
//	else
//	{
//		printf("不要停下来继续冲\n");
//	}
//	return 0;
//}
//
//int add(int x,int y)
//{
//	return x * y;
//}
//
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int k1 = 300;
//	int k2 = 100;
//	scanf("%d %d\n", &n1, &n2);
//
//
//
//	int sum1 = add(n1, n2);
//
//	
//	
//
//	int sum2 = add(k1, k2);
//
//
//	printf("结果为%d 和 %d\n", sum1,sum2);
//
//	return 0;
//i

int main()
{
	int arr[10] = { 12,68,48,96,82,87,23,15,74,63 };

	int i = 0;

	while (i < 10)
	{
		printf("%d ", arr[i]);

		i++;
	}

	return 0;
}
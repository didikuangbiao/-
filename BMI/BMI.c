#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float weight = 0.0f;

	float hight1 = 0.0f;
	float hight2 = 0.0f;

	float BMI = 0.0f;

	printf("Enter your weight and hight\n");

	//scanf输入后返回值
	if (scanf("%f %f", &weight, &hight1) != 2)
	{

		printf("error\n");

		return 1;
	}
	else
	{
		printf("%.2fKG is your weight and %.2f CM is your hight\n", weight, hight1);
	}

	//转换单位 厘米 到 米
	hight2 = hight1 / 100;

	printf("%.2f\n", hight2);

	BMI = weight / (hight2 * hight2);

	printf("Your BMI is %.2f\n", BMI);

	//if 判断数据 输出
	if (BMI >= 18.5 && BMI <= 24.9)
	{
		printf("Normal Range ! ! !  \n");
	}
	else if (BMI < 18.5)
	{
		printf("Beign Underweight\n");

	}
	else if (BMI >= 25 && BMI <= 29.9)
	{
		printf("Overweight\n");
	}
	else
	{
		printf("Obesity\n");
	}

	return 0;
}


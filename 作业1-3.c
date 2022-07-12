#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
打印素数
int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

打印乘法口诀表
int main()
{
	int j = 1;
	int i = 1;
	int h = 1;
	for (i = 1;i <10; i++)
	{
		for (j = 1; j <=i; j++)
		{
			printf("%d*%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}

判断1000年---2000年之间的闰年
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 400 == 0|| year % 4 == 0 && year % 100 != 0)
		{
			count++;
			printf("%d ", year);
		}
		
	}
	printf("\n");
	printf("%d\n ", count);
	return 0;
}
求出10个数中的最大值
int main()
{
	int i = 0;
	int tmp = 0;
	int arr[10] = { 10,220000,14,4,89,23,343,987,12,54 };
	for (i = 0; i < 10; i++)
	{
		if (arr[0] < arr[i])
		{
			tmp = arr[0];
			arr[0] = arr[i];
			arr[i] = tmp;
		}
	}
	printf("%d", arr[0]);
	return 0;
}

将三个数按从大到小输出。
int main()
{
	int a = 50;
	int b = 80;
	int c = 30;
	int tmp = 0;
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}

求两个数的最大公约数。
int main()
{
	int a =6;
	int b = 15;
	int tmp = 0;
	int c = 0;
	if (a < b)
	{
		tmp = a; 
		a = b; 
		b = tmp;
	}
	while (a % b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}

将数组A中的内容和数组B中的内容进行交换。（数组一样大）
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int tmp = 0;
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}

计算1/1 -1/2 +1/3 -1/4 +1/5  …… + 1/99 - 1/100 的值。
int main()
{
	int i = 0;
	double ret = 0;
	for (i = 1; i <= 100; i++)
	{
		if ((i%2)==1)
		{
			ret += 1.0 / i;
		}
		if ((i % 2 )== 0)
		{
			ret -= 1.0 / i;
		}
	}
	printf("%lf", ret);
	return 0;
}
 
 
 
编写程序数一下 1到 100 的所有整数中出现多少个数字9。
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			printf("%d ", i);
			count++;
			if (i / 10 == 9)
			{
				count++;
			}
		}
		
	}
	printf("\n");
	printf("count=%d ",count);
	return 0;
}


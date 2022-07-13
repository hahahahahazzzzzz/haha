#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>

打印图案
#include <stdio.h>
int main()
{
	printf("      *\n");
	printf("     ***\n");
	printf("    *****\n");
	printf("   *******\n");
	printf("  *********\n");
	printf(" ***********\n");
	printf("  *********\n");
	printf("   *******\n");
	printf("    *****\n");
	printf("     ***\n");
	printf("      *\n");
	return 0;
}
求水仙花数
#include <stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int z = 0;
	for (i = 100; i <=999; i++)//153
	{
		c = i % 10;
		b = (i / 10 )% 10;
		a = i % 100;
		if ((a*a*a) + (b*b*b) + (c*c*c) == i)
		{
			printf("%d ",i);
		}
	}
	return 0;
}

求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
#include <stdio.h>
#include <math.h>
int main()
{

	int a = 0;
	printf("请输入一个数：");
	scanf("%d", &a);
	int i = 0;
	int total = 0;
	int ret = 0;
	for (i = 0; i < 5; i++)
	{
		ret += a * (pow(10, i));
		total+=  ret;
	}
	printf("%d ", total);
	return 0;
}


猜数字游戏
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

meun()
{
	printf("******************************\n");
	printf("*******1.les's go*******0.exit\n");
	printf("******************************\n");
}
void game()
{
	int obj = rand()%100+1;
	int num = 0;
	int count = 0;
	while (1)
	{
		printf("请输入一个数：");
		scanf("%d",&num);
		count++;
		if (num == obj)
		{
			printf("猜对了\n");
			return;
		}
		else if(num>obj)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜小了\n");
		}
		if (count == 10)
		{
			printf("游戏失败\n");
			return;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择：");
			break;
		}

	} while (input);
	return 0;
}




写代码可以在整型有序数组中查找想要的数字，
找到了返回下标，找不到返回 - 1.（折半查找）

int checknum(int arr[], int sz, int num)
{
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (right >=left)
	{
		mid = (left+right) / 2;
		if (num > arr[mid])
		{
			left = mid+1;
		}
		else if (num < arr[mid])
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num = 0;
	printf("请输入需要查找的数：");
	scanf("%d", &num);
	int ret = checknum(arr, sz, num);
	if (ret == -1)
	{
		printf("数组中没有这个数\n");
	}
	else
	{
		printf("%d的下标为: %d\n", num, ret);
	}
	return 0;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("%d", a + b);
	return 0;
}

3.编写代码模拟三次密码输入的场景。
最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
可以重新输入，最多输入三次。三次均错，则提示退出程序。
int main()
{
	int a = 123456;
	int b = 0;
	int count = 0;
	while (count!=3)
	{
		printf("请输入密码");
		scanf("%d", &b);
		count++;
		if (a ==b)
		{
			printf("登陆成功\n");
			return 0;
		}
		else
		{
			printf("输入错误\n");
		}
	}
	if (count == 3)
	{
		printf("三次都已输入错误，自动退出程序\n");
	}
	return 0;
}

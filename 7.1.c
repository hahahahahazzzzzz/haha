//杨氏矩阵
//int findnum(int arr[3][3],int k,int* row,int* col)
//{
//	int x = 0;
//	int y = *col - 1;
//	while (x <= *row - 1 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*row= x;
//			*col = y;
//			return 1;
//		}
//	}
//	return 0;
//
//}
//查找数字
//int main()
//{
//	int k = 0;
//	int arr[3][3] = { {1,2,3},{4,5,6 },{7,8,9} };
//	int x = 3;
//	int y = 3;
//	printf("输入查找数：");
//	scanf("%d", &k);
//	int ret = findnum(arr,k,&x,&y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//
//自定义strlen函数
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);
//	printf("%d", len);
//	return 0;
//}
//
//#include<assert.h>
//int my_strlen(char* parr)
//{
//	int count = 0;
//	assert(parr != NULL);
//	while (*parr != '\0')
//	{
//		
//		parr++;
//		count++;
//	}
//	return count;
//	
//
//}
//strlen
//
//int main()
//{
//	char arr[] = "aa";
//	char arr1[] = "aaa";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = my_strlen(arr);
//	/*printf("%d", ret);*/
//	
//	if ((strlen("abc") - strlen("abcdef")) > 0)
//		printf("haha");
//	else
//		printf("hehe");
//	return 0;
//}
//
//int main()
//{
//	int len = strlen("abcedf");
//	char arr[] = { 'c','c','a','a' };
//	printf("%d", arr);
//	return 0;
//}
//
//自定义strcpy函数
//void my_strcpy(char* dest, char* str)
//{
//	while (*dest++ = *str++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";//dest
//	char arr2[] = "bit";//str
//	my_strcpy(arr1, arr2);
//	return 0;
//}
//
//
//自定义strcat函数
//my_strcat(char* dest, char* str)
//{
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *str++)
//	{
//		;	
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[30] = "abcdef";//dest
//	char arr2[] = "bit";//str
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


#include<stdio.h>
int main()
{
	char arr[] = { "zhangjie" };
	char parr[] = { "lisi" };
	int ret = strcmp(arr, parr);
	int a = 5;
	printf("%d", a);
	return 0;
}
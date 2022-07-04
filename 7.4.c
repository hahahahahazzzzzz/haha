//自定义memcpy
#include <assert.h>
//void my_memcpy(void* p1, const void* p2, int num)
//{
//	assert(p1);
//	assert(p2);
//	while(num--)
//	{
//		*(char*)p1 = *(char*)p2;
//		((char*)p1)++;
//		((char*)p2)++;
//		
//	}
//}

//int main()
//
//{
//	int arr1[] = { 1,2,3,4,5 };//p2
//	int arr2[5] = { 0 };//p1
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}


自定义memmove
//void* my_memmove(void* dest, const void* str, int num)
//{
//	void* ret = dest;
//	assert(dest);
//	assert(str);
//
//	if (dest < str)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)str;
//			((char*)dest)++;
//			((char*)str)++;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)(dest)+num) = *((char*)(str)+num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 }; 
//		my_memmove(arr + 2, arr+1, 16);
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		return 0;
//}

//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[50] = "bcd";
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("没有");
//	}
//	else
//	{
//		printf("%s",ret);
//	}	
//	return 0;


//阶乘函数
//int main()
//{
//	printf("请输入：");
//	int a = 0;
//	scanf("%d", &a);
//	int i = 1;
//	int j = 1;
//	int sum = 0;
//	for (j = 1; j <=a; j++)
//	{
//		int ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//自定义strlen
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p)
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
//int main() 
//{
//	char arr[] = "abcdefddd";
//	int len = my_strlen(arr);
//	printf("%d ", len);
//	return 0;
//}

//自定义strcpy
//void my_strcpy(char* p2,const char* p1,int num)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	while ((num--)&&(*p1)!='\0')
//	{
//		*p2++ = *p1++;
//	}
//	*p2 = '\0';
//	
//
//}
//int main()
//{
//	char arr1[] =   "abceef";
//	char arr2[50] = "sadfsdafasdf";
//	my_strcpy(arr2, arr1,4);
//	printf("%s", arr2);
//	return 0;
//
//}
/////////自定义strcmp
//int my_strcmp(const char* p1, const char* p2,int num)//3
//{
//	assert(*p1 != '\0');//lisi
//	assert(*p2 != '\0');//lisii
//	while (*p1 != '\0' || *p2 != '\0'||num--)
//	{
//		if (num == 1)
//		{
//			return 0;
//		}
//		if (*p1 > *p2)
//		{
//			return 1;
//		}
//		else if (*p1 < *p2)
//		{
//			return -1;
//		}
//		else
//		{
//			p1++;
//			p2++;
//		}
//	}
//	
//	if (*p1 == '\0' && *p2 != '\0')
//	{
//		return -1;
//	}
//	else if (*p2 == '\0' && *p1 != '\0')
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//
//}
//int main()
//{
//	char arr1[] = "lisii";
//	char arr2[] = "lisi";
//	int ret = my_strcmp(arr1, arr2,3);
//	printf("%d", ret);
//	return 0;
//}
自定义strstr
char* my_strstr(const char* p1, const char* p2)
{
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;
	if (*p2 == '\0')
	{
		return p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while((*s1 == *s2) && (*s1!='\0') && (*s2!='\0'))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abbbcdefg";//p1
	char arr2[] = "bbc";//p2
	char* p = my_strstr(arr1, arr2);
	if (*p == NULL)
	{
		printf("找不到");
	}
	else
	{
		printf("%s", p);
	}
	return 0;
}
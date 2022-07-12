#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

//int main()
//{
//	int* p=(int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	int* p2 = (int*)realloc(p, 40);
//	if (p2 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	else
//	{
//		p = p2;
//	}
//	int i = 0;
//	int j = 0;
//	for (j = 10; j < 20; j++)
//	{
//		*(p + j) = j;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	printf("hello world");
//	return 0;
//}

//char* GetMemory(void)
//{
//	static char p[] = "hello world";
//	return p;
//}
//void Test(void) 
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void) 
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//int main()
//{
//	int* p = NULL;
//	*(int*)p = 10;
//	printf("%d", *p);
//	return 0;
//}



//struct stu
//{
//	int age;
//	int arr[];
//};
//int main()
//{
//	struct stu* ps=(struct stu*)malloc(sizeof(ps->age) +5 * sizeof(int));
//	ps->age = 10;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct stu* str = realloc(ps,sizeof(struct stu) + 10 * sizeof(int));
//	if (str == NULL)
//	{
//		return 0;
//	}
//	
//	else
//	{
//		ps = str;
//		for (i= 5; i< 10; i++)
//		{
//			ps->arr[i] = i;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}



//struct stu
//{
//	int a;
//	int* arr;
//};
//
//int main()
//{
//	struct stu*ps=(struct stu*)malloc(sizeof(struct stu));
//	ps->a = 100;
//	ps->arr = (int*)malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		ps->arr = ptr;
//		for (i = 5; i < 10; i++)
//		{
//			ps->arr[i] = i;
//		}
//		for (i = 5; i < 10; i++)
//		{
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	return 0;
//}

////#include <stdio.h>
////struct str {
////    int len;
////    char* s;
////};
////
////struct foo 
////{
////    struct str* a;
////};
////
////int main(int argc, char** argv)
////{
////    struct foo f = { 0 };
////    if (f.a->s) 
////    {
////        printf("%x\n", f.a->s);
////    }
//  /*  return 0;
//}*/
//struct test {
//    int i;
//    short c;
//    char* p;
//    char s[10];
//};
//
//int main() {
//    struct test* pt = NULL;
//    printf(" %p\n", pt->s); //等价于 printf("%x\n", &(pt->s) );
//    printf(" %p\n", &pt->i); //因为操作符优先级，我没有写成&(pt->i)
//    printf("%p\n", &pt->c);
//    printf(" %p\n", &pt->p);
//    return 0;
//}


struct stu
{
	int age;
};
int main()
{
	struct stu s;
	s.age = 10;
	printf("%d", s.age);
	return 0;
}


struct stu
{
	int age;
	int arr[];
};

int main()
{
	struct stu* ps=(struct stu*)malloc(sizeof(struct stu) + 5 * sizeof(int));
	ps->age = 10;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	struct stu* ptr=realloc(ps, 44);
	if (ptr == NULL)
	{
		return 0;
	}
	else
	{
		ps= ptr;
		for (i = 5; i < 10; i++)
		{
			ps->arr[i] = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", ps->arr[i]);
		}
	}
	free(ps);
	ps = NULL;
	return 0;
}


////
////#include <stdlib.h>
////struct stu
////{
////	int age;
////	int* arr;
////};
////int main()
////{
////	struct stu* ps = (struct stu*)malloc(sizeof(struct stu) + 5 * sizeof(int));
////	ps->age = 100;
////	ps->arr = (int*)malloc(5 * sizeof(int));
////	int i = 0;
////	for (i = 0; i < 5; i++)
////	{
////		ps->arr[i] = i;
////	}
////	for (i = 0; i < 5; i++)
////	{
////		printf("%d ",ps->arr[i]);
////	}
////	int* ptr=(int *)realloc(ps->arr, sizeof(struct stu) + 10 * sizeof(int));
////	if (ptr == NULL)
////	{
////		return 0;
////	}
////	else
////	{
////		ps->arr = ptr;
////		for (i = 5; i < 10; i++)
////		{

////		}
////		for (i = 5; i < 10; i++)
////		{
////			printf("%d ", ps->arr[i]);
////		}
////	}
////	free(ps->arr);
////	ps->arr = NULL;
////	free(ps);
////	ps = NULL;
////	return 0;
//
//

//
struct stu
{
	int age;
};
int main()
{
	struct stu s;
	s.age = 10;
	printf("%d", s.age);
	return 0;
}


struct stu
{
	int age;
	int arr[];
};

int main()
{
	struct stu* ps = (struct stu*)malloc(sizeof(struct stu) + 5 * sizeof(int));
	ps->age = 10;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	struct stu* ptr = realloc(ps, 44);
	if (ptr == NULL)
	{
		return 0;
	}
	else
	{
		ps = ptr;
		for (i = 5; i < 10; i++)
		{
			ps->arr[i] = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", ps->arr[i]);
		}
	}
	free(ps);
	ps = NULL;
	return 0;
}




struct stu
{
	int age;
	int arr[];
};

int main()
{
	int i = 0;
	struct stu* ps = (struct stu*)malloc(sizeof(struct stu) + 10 * sizeof(int));
	ps->age = 100;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	struct stu* ptr = realloc(ps, sizeof(struct stu) + 20 * sizeof(int));
	if (ptr == NULL)
	{
		return 0;
	}
	else
	{
	
		ps = ptr;
	}
	for (i= 10; i< 20; i++)
	{
		ps->arr[i] = i;
	}
	for (i= 0; i< 20; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps);
	ps = NULL;
	return 0;
}
int main()
{
	while (1)
	{
		Sleep(100);
		printf("hehe");
	}
	return 0;
}



int main()
{
	FILE* ps=fopen("D:\\C语言上课代码\\Project12\\Debug\\test.txt", "w");
	if (ps == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	else
	{
		fclose(ps);
		ps = NULL;
	}
	return 0;
}

int main()
{
	FILE* ps = fopen("abc.txt", "r");

	if (ps == NULL)
	{
		printf("出错");
	}

	printf("%c", fgetc(ps));
	printf("%c", fgetc(ps));


	fclose(ps);
	ps = NULL;
	return 0;
}


int main()
{
	FILE* ps = fopen("txst.txt","r");
	if (ps == NULL)
	{
		return 0;
	}
	else
	{
		char arr[100] = { 0 };
		fgets(arr, 100, stdin);
		fputs(arr, stdout);
	}
	return 0;
}


struct stu
{
	char name[21];
	int age;
	float score;
};

int main()
{
	struct stu s = { 0 };
	fscanf(stdin, "%s %d %f", s.name, &s.age,& s.score);
	fprintf(stdout, "%s %d %f", s.name, s.age, s.score);

	
	return 0;
}

struct stu
{
	char n[100];
	int a;
	double s;

};
int main()
{
	struct stu s = { 0 };
	FILE* pf = fopen("zhangjie.txt", "w");
	fscanf(pf, "%s %d %lf", s.n, &s.a, &s.s);
	printf("%s %d %lf", s.n, s.a, s.s);
	
	return 0;
}




void bubble(int arr[])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		int tmp = 0;
		for (j = 0; j < 10-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	bubble(arr);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


int main()
{
	int sz = sizeof(long);
	printf("%d", sz);
	return 0;
}

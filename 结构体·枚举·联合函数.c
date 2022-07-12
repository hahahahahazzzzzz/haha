自定义结构体章节
//#pragma pack(1)
//struct stu
//{
//	 double a;
//	 char c;
//	 int i;
//};
//#pragma pack()
//struct su
//{
//	int a;
//	char c;
//	int i;
//};
//
//int main()
//{
//	struct stu s1 = { 0 };
//	struct su s2 = { 0 };
//    printf("%d", sizeof(s2));
//	return 0;
//
//}


//#include <stddef.h>
//struct stu
//{
//	char a;
//	int b;
//	double c;
//};
////void INIT(struct stu* tmp)
////{
////	tmp->a = 'c';
////	tmp->b = 100;
////	tmp->c = 3.14;
////
////}
//int main()
//{
//	struct stu s = { 0 };
//	struct stu* ps = &s;
//	ps->c = 3.14;
//	printf("%lf", ps-> c);
//return 0;
	//}




//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}


//int main()
//{
//	int a = 123456789;
//}
#define red 0
//enum sex
//{
//	male,
//	female,
//	secret
//};
//enum color
//{
//	blue,
//	green
//};
//int main()
//{
//	enum sex s = male;
//	enum sex t = female;
//	enum color c = blue;
//	printf("%d", red);
//	return 0;
//}




//union u
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union u s = { 0 };
//	printf("%d\n", sizeof(s));
//	printf("%p\n", &s);
//	printf("%p\n", &s.c);
//	printf("%p\n", &s.i);
//	return 0;
//}

//int check sys(int a)
//{
//	char* p = &a;
//
//}


//union un
//{
//	char c;
//	int i;
//};
//
//
//int main()
//{
//	int a = 100;
//	union un u = { 0 };
//	u.i = 1;
//	printf("%d", u.c);
//	return 0;
//}
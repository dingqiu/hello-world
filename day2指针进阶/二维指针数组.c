#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void test(int (*arr)[5])
//{
//
//}
//
//int main()
//{
//	int arr[3][5] = {0};
//	return 0;
//}

//void test(int** p)
//{
//
//}
//
//int main()
//{
//	int* arr[5] = { 0 };
//	test(arr);      //指针数组传参也可以
//	return 0;
//}

//函数指针，指向函数的指针

int test(int a)
{
	return a;
}

int main8989()           //&函数名和函数名都是函数的地址
{
	int a = 0;
	test(a);
	printf("%p\n", &test);         //（*(void(*)()）0）（）;把0强制转换类型，void(*)()函数指针类型，传递至为0返回无参数，0是函数的地址，*解应用找到那个函数，调用那个函数
	printf("%p\n", test);      //void(*        signal( int,  void)(*)(int) )          )(int)-signal是一个函数声明，函数参数有两个，一个是int一个是函数指针，该函数指针指向int返回void
	                          //signal返回类型也是一个函数指针，该函数指针指向的函数参数是int返回的是void类型
	int(*p)(int) = test;     //int(*)(int)属于函数指针类型
	typedef void(* pfun)(int);              //typedef void(* pfun)(int) pfun 不能这样写         pfun signal( int,  void)(*)(int) )
	printf("%d\n", (p)(3));  //都可以调用
	printf("%d\n", (*p)(4));
	return 0;
}
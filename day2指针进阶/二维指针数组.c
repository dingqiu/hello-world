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
//	test(arr);      //ָ�����鴫��Ҳ����
//	return 0;
//}

//����ָ�룬ָ������ָ��

int test(int a)
{
	return a;
}

int main8989()           //&�������ͺ��������Ǻ����ĵ�ַ
{
	int a = 0;
	test(a);
	printf("%p\n", &test);         //��*(void(*)()��0������;��0ǿ��ת�����ͣ�void(*)()����ָ�����ͣ�������Ϊ0�����޲�����0�Ǻ����ĵ�ַ��*��Ӧ���ҵ��Ǹ������������Ǹ�����
	printf("%p\n", test);      //void(*        signal( int,  void)(*)(int) )          )(int)-signal��һ����������������������������һ����intһ���Ǻ���ָ�룬�ú���ָ��ָ��int����void
	                          //signal��������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ���������int���ص���void����
	int(*p)(int) = test;     //int(*)(int)���ں���ָ������
	typedef void(* pfun)(int);              //typedef void(* pfun)(int) pfun ��������д         pfun signal( int,  void)(*)(int) )
	printf("%d\n", (p)(3));  //�����Ե���
	printf("%d\n", (*p)(4));
	return 0;
}
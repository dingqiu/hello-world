#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int* parr[4];    //�������ָ�������-ָ������
//	char* pch[5];  //����ַ�ָ�������
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5 ,6 };
//	int arr3[] = { 3,4,5 ,6,7 };
//	int* arr4[] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(arr4[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int* p = NULL;       //p������ָ��-ָ�����ε�ָ��-���Դ�����εĵ�ַ
//	char* pc = NULL;     //pc���ַ�ָ��-ָ���ַ���ָ��-���Դ���ַ��ĵ�ַ
//	int arr[10] = { 0 };
//	//arr-��Ԫ�ص�ַ
//	//&arr��0����Ԫ�ص�ַ
//	//&arr����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;        //p��������ָ�룬������������ָ��
//	char* arr1[5] = { 0 };
//	char* (*pz)[5] = &arr1;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; 
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", (*p)[i]);           //*(*p+i)
//	}
//	return 0;
//}

void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p+i) + j));         //*(p+i)�ҵ���һ�� pΪ��һ��+j���ҳ��Ǹ���*(*(p+i) + j)==*(*(p+i)[j])==*(p[i] + j)
		}
		printf("\n");
	}
}
int main7878()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };        //��arr����һά����
	print1(arr, 3, 5);           //arr�ǵ�һ�еĵ�ַ
	print2(arr, 3, 5);
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//int* p = &arr;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d", *(p + i));     //*(p + i)==*(arr+i)==arr[i]==p[i]
	//}
	int(*parr3[10])[5];//parr3��10����һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ������������Ԫ�أ�ÿ��Ԫ����int
	return 0;
}
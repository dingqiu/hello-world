#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int* parr[4];    //存放整形指针的数组-指针数组
//	char* pch[5];  //存放字符指针的数组
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
//	int* p = NULL;       //p是整形指针-指向整形的指针-可以存放整形的地址
//	char* pc = NULL;     //pc是字符指针-指向字符的指针-可以存放字符的地址
//	int arr[10] = { 0 };
//	//arr-首元素地址
//	//&arr【0】首元素地址
//	//&arr数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;        //p就是数组指针，用来存放数组的指针
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
			printf("%d ", *(*(p+i) + j));         //*(p+i)找到那一行 p为那一行+j是找出那个数*(*(p+i) + j)==*(*(p+i)[j])==*(p[i] + j)
		}
		printf("\n");
	}
}
int main7878()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };        //把arr当成一维数组
	print1(arr, 3, 5);           //arr是第一行的地址
	print2(arr, 3, 5);
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//int* p = &arr;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d", *(p + i));     //*(p + i)==*(arr+i)==arr[i]==p[i]
	//}
	int(*parr3[10])[5];//parr3【10】是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有五个元素，每个元素是int
	return 0;
}
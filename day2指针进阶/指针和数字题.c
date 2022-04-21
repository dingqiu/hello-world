#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main666444()
{
	//int a[] = { 1,2,3,4 };
	//printf("%d", sizeof(a+0));       //数组名表示首元素地址，4
	//printf("%d", sizeof(a + 1)); 
	//printf("%d", sizeof(&a));         //4取出的是数组的地址，也是地址，地址的大小就是4
	//printf("%d", sizeof(*&a));         //16   *和&抵消了   
	//printf("%d", sizeof(&a+1));          //4跳过一个数组，还是一个地址
	//printf("%d", sizeof(&a[0]));       //第一个元素地址
	//printf("%d", sizeof(&a[0]+1));       //第二个元素地址

	char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d", sizeof(arr + 0));      //arr是首元素地址  4
	//printf("%d", sizeof(*arr));         //*arr是首元素字符 1

	printf("%d", strlen(arr));             //随机值 strlen要找到\0
	printf("%d", strlen(arr+0)); // 随机值
	printf("%d", strlen(*arr));             //错误的放的是首地址a 97
	printf("%d", strlen(arr[0]));             //错误的
	printf("%d", strlen(&arr));             //随机值 strlen要找到\0
	printf("%d", strlen(&arr+1));             //随机值 strlen要找到\0  与arr差6
	printf("%d", strlen(&arr[0]+1));             //随机值 strlen要找到\0   与arr差1


	char arr1[] = "abcdef";          //abcdef \0
	printf("%d", sizeof(arr1));
	printf("%d", sizeof(&arr1));      //数组的地址也是地址  4

	printf("%d", strlen(arr1));          //6
	printf("%d", strlen(arr1+0));             //6
	printf("%d", strlen(*arr1));        //错误
	printf("%d", strlen(arr1[1]));             //错误的
	printf("%d", strlen(&arr1));        //6         会警告应该用char （*p）【7】
	printf("%d", strlen(&arr1+1));      //随机值
	printf("%d", strlen(&arr1[0] + 1));          //5










	char* p = "abcdef";               //把常量字符串首地址放在p里
	printf("%d\n", sizeof(p));      //指针变量p的大小      4
	printf("%d\n", sizeof(p+1));      //指针变量p中b的的大小        4
	printf("%d\n", sizeof(*p));      //指针变量p的大小         1
	printf("%d\n", sizeof(p[0]));       //  1        arr[0]==*(arr+0)      p[0]==*(p+0)=="a"
	printf("%d\n", sizeof(&p));         //4
	printf("%d\n", sizeof(&p+1));         //4
	printf("%d\n", sizeof(&p[0] + 1));         //4          b的地址

	printf("%d\n", strlen(p));      //a的地址      6
	printf("%d\n", strlen(p + 1));      //b的地址      5       
	printf("%d\n", strlen(*p));      //报错         
	printf("%d\n", strlen(p[0]));       //  报错
	printf("%d\n", strlen(&p));         //随机值   p中放的是a的地址
	printf("%d\n", strlen(&p + 1));         //随机值
	printf("%d\n", strlen(&p[0] + 1));         //5         b的地址





	int a[3][4] = {0};
	printf("%d\n", sizeof(a));                 //48
	printf("%d\n", sizeof(a[0][0]));            //4
	printf("%d\n", sizeof(a[0]));                //16       a[0]相当于第一行做一维数组
	printf("%d\n", sizeof(a[0]+1));               //4       a[0]是第一行的数组名，数 组名此时是首元素地址，a[0]其实是第一行第一个元素的地址
	                                                 //所以a[0]+1  是第一行第二个元素的地址，是4
	printf("%d\n", sizeof(*(a[0] + 1)));      // 4         *(a[0] + 1)是第一行的第二个元素
	printf("%d\n", sizeof(a+1));             // 4       a是首元素的地址也就是看成一位数组第一行的地址，a+1就是第二行的地址
	printf("%d\n", sizeof(*(a + 1)));         //16           计算第二行的大小*(a + 1)=a[1]
	printf("%d\n", sizeof(&a[0] + 1));        //4       第二行的地址
	printf("%d\n", sizeof(*( & a[0] + 1)));         //    16    
	printf("%d\n", sizeof(*a));              //16         第一行地址
	printf("%d\n", sizeof(a[3]));            // 16       sizeof并不参与运算
	return 0;
}
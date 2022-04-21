#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void mon()
{
	printf("***********************************\n");
	printf("**1.add                    2.sub***\n");
	printf("**3.mul                    4.div***\n");
	printf("**0.exit                    *******\n");
	printf("***********************************\n");
}

int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int sub(int x, int y)
{
	int z = 0;
	z = x - y;
	return z;
}

int mul(int x, int y)
{
	int z = 0;
	z = x * y;
	return z;
}

int div(int x, int y)
{
	int z = 0;
	z = x / y;
	return z;
}

//回调函数
//void cala(int(*pp)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数:");
//	scanf("%d%d", &x, &y);
//	printf("%d", pp(x, y));
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*parr[])(int, int) = { 0,add,sub,mul,div };            //parr函数指针数组
//	do 
//	{
//		mon();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数:");
//			scanf("%d%d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出");
//		}
//		else
//		{
//			printf("输入错误");
//		}
//
//		
//		//switch (input)
//		//{
//		/*case 1:                          //cala(add)
//			printf("请输入两个数:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", add(x, y));
//			break;
//		case 2:                                 //cala(sub)
//			printf("请输入两个数:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:                                   cala(mul)
//			printf("请输入两个数:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:                                     cala(div)
//			printf("请输入两个数:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		case 0:printf("退出\n");
//			break;
//		default:printf("输入错误从新输入\n");
//			break;*/
//		/*}*/
//	} while (input);
//	return 0;
//}



//指向函数指针数组的指针
//qsort 排序函数
//int main6969()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	int(*parr[4])(int, int);        //函数指针数组
//	int(*(*parr[4]))(int, int) = &parr;            //是指针
//	//parr是一个数组指针，指针指向数组的四个元素，指向的数组的每个元素类型是一个函数指针int(*)(int, int)
//	return 0;
//}
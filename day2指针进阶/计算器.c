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

//�ص�����
//void cala(int(*pp)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("������������:");
//	scanf("%d%d", &x, &y);
//	printf("%d", pp(x, y));
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*parr[])(int, int) = { 0,add,sub,mul,div };            //parr����ָ������
//	do 
//	{
//		mon();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������:");
//			scanf("%d%d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�");
//		}
//		else
//		{
//			printf("�������");
//		}
//
//		
//		//switch (input)
//		//{
//		/*case 1:                          //cala(add)
//			printf("������������:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", add(x, y));
//			break;
//		case 2:                                 //cala(sub)
//			printf("������������:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:                                   cala(mul)
//			printf("������������:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:                                     cala(div)
//			printf("������������:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		case 0:printf("�˳�\n");
//			break;
//		default:printf("��������������\n");
//			break;*/
//		/*}*/
//	} while (input);
//	return 0;
//}



//ָ����ָ�������ָ��
//qsort ������
//int main6969()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	int(*parr[4])(int, int);        //����ָ������
//	int(*(*parr[4]))(int, int) = &parr;            //��ָ��
//	//parr��һ������ָ�룬ָ��ָ��������ĸ�Ԫ�أ�ָ��������ÿ��Ԫ��������һ������ָ��int(*)(int, int)
//	return 0;
//}
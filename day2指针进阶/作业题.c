#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

//逆序函数       gets()读取一行


//打印前n项之和
//int main()
//{
//	int n;
//	int a;
//	scanf("%d%d", &a,&n);
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = a + ret * 10;
//		sum = ret+sum;
//	}
//	printf("%d", sum);
//	return 0;
//}


//求自幂数
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.计算是几位数
//		//123/10  N++
//		//12/10  n++
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//计算每个的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);       //pow(tmp % 10, n)  n次方
//			tmp = tmp / 10;
//		}
//		//比较i和数
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//打印菱形          //分上下两部分
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//1.打印空格
//		int j = 0;
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line; i++)
//	{
//		//1.打印空格
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//喝汽水，1瓶汽水一块钱，两个空瓶换一瓶汽水
//int main()
//{
//	int money = 0;
//	int total = 0;      //计数器
//	int empty = 0;     //空瓶
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水喝掉
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}


//把偶数提前
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		
//		//从左边找偶数
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		// 从右边找奇数
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,3,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//0X1234         十六进制一个位是4个二进制位所以有16个两个字节    0x1234==0x 00 00 12 34


//打印杨辉三角
//1
//11
//121     第2行第1列
//1331
//14641
//15101051
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i-1][j] + arr[i-1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for(j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//判断凶手
//三个真话一个假话  所以3个1要加起来是3
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if (((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')) == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}




//赛马问题 
//有36匹马，6个跑到，没有计时器，判断需要判断几次，要判断八次   ，第八次在第一名中的三个与第二名中的两个和第三名中的一个

//有25匹马，5个跑到，没有计时器，判断需要判断几次，



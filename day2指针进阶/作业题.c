#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

//������       gets()��ȡһ��


//��ӡǰn��֮��
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


//��������
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.�����Ǽ�λ��
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
//		//����ÿ����n�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);       //pow(tmp % 10, n)  n�η�
//			tmp = tmp / 10;
//		}
//		//�Ƚ�i����
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//��ӡ����          //������������
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//1.��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line; i++)
//	{
//		//1.��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ��1ƿ��ˮһ��Ǯ��������ƿ��һƿ��ˮ
//int main()
//{
//	int money = 0;
//	int total = 0;      //������
//	int empty = 0;     //��ƿ
//	scanf("%d", &money);
//	//���������ˮ�ȵ�
//	total = money;
//	empty = money;
//	//����������ˮ�ȵ�
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}


//��ż����ǰ
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
//		//�������ż��
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		// ���ұ�������
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

//0X1234         ʮ������һ��λ��4��������λ������16�������ֽ�    0x1234==0x 00 00 12 34


//��ӡ�������
//1
//11
//121     ��2�е�1��
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

//�ж�����
//�����滰һ���ٻ�  ����3��1Ҫ��������3
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




//�������� 
//��36ƥ��6���ܵ���û�м�ʱ�����ж���Ҫ�жϼ��Σ�Ҫ�жϰ˴�   ���ڰ˴��ڵ�һ���е�������ڶ����е������͵������е�һ��

//��25ƥ��5���ܵ���û�м�ʱ�����ж���Ҫ�жϼ��Σ�



#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//void qsort(void* buf, size_t num, size_t size, int (*compare)(const void*, const void*));          //void* ���Խ����������͵�ָ�룬���ܽ����ò���
//            ��һ�������������������Ԫ�ص�ַ
//            �ڶ����������������Ԫ�ظ���
//            ������������������ÿ��Ԫ�صĴ�С
//            ���ĸ�������ָ�룬�Ƚ�����Ԫ�����ú����ĵ�ַ���������ʹ�����Լ�ʵ�֣�����ָ������������ǣ����Ƚϵ�����Ԫ�ص�ַ
//

int cmp_int(const void* e1, const void* e2)
{
	return  *(int*) e1 -  *(int*) e2;               //С�ڷ��ظ��������ڷ������������ڷ���0��
}

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 == *(float*)e2)
	{
		return 0;
	}
	else if (*(float*)e1 > *(float*)e2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
	//((int)(*(float*)e1 == *(float*)e2))
}

void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%lf ", f[i]);
	}
}


struct stu
{
	char name;
	int age;
};

int cmp_stu_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

void cmp_stu_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);             //�Ƚ��ַ�������ֱ�Ӵ���С�ڵ���Ӧ����strcmp����
}

void test3()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_age);
}
void swap(char* buf1,char* buf2,int witch)
{
	int i = 0;
	for (i = 0; i < witch; i++)
	{
		char tem = *buf1;
		*buf1 = *buf2;
		*buf2 = tem;
		*buf1++;
		*buf2++;
	}
}

void bubble_sort(void* bash, int sz, int witch, int (*cmp)(void* e1, void* e2))           //ð������ʵ��
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		{
			for (j = 0; j < sz - 1 - i; j++)
			{
				if (cmp((char*)bash + j * witch, (char*)bash + (j + 1) * witch) > 0)
				{
					//����
					swap((char*)bash + j * witch, (char*)bash + (j + 1) * witch, witch);
				}
			}
		}
	}
}

void test4()
{
	int arr1[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	bubble_sort(arr1, sz, sizeof(arr1[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
}

int main6666()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}
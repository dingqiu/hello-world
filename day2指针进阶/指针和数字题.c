#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main666444()
{
	//int a[] = { 1,2,3,4 };
	//printf("%d", sizeof(a+0));       //��������ʾ��Ԫ�ص�ַ��4
	//printf("%d", sizeof(a + 1)); 
	//printf("%d", sizeof(&a));         //4ȡ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4
	//printf("%d", sizeof(*&a));         //16   *��&������   
	//printf("%d", sizeof(&a+1));          //4����һ�����飬����һ����ַ
	//printf("%d", sizeof(&a[0]));       //��һ��Ԫ�ص�ַ
	//printf("%d", sizeof(&a[0]+1));       //�ڶ���Ԫ�ص�ַ

	char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d", sizeof(arr + 0));      //arr����Ԫ�ص�ַ  4
	//printf("%d", sizeof(*arr));         //*arr����Ԫ���ַ� 1

	printf("%d", strlen(arr));             //���ֵ strlenҪ�ҵ�\0
	printf("%d", strlen(arr+0)); // ���ֵ
	printf("%d", strlen(*arr));             //����ķŵ����׵�ַa 97
	printf("%d", strlen(arr[0]));             //�����
	printf("%d", strlen(&arr));             //���ֵ strlenҪ�ҵ�\0
	printf("%d", strlen(&arr+1));             //���ֵ strlenҪ�ҵ�\0  ��arr��6
	printf("%d", strlen(&arr[0]+1));             //���ֵ strlenҪ�ҵ�\0   ��arr��1


	char arr1[] = "abcdef";          //abcdef \0
	printf("%d", sizeof(arr1));
	printf("%d", sizeof(&arr1));      //����ĵ�ַҲ�ǵ�ַ  4

	printf("%d", strlen(arr1));          //6
	printf("%d", strlen(arr1+0));             //6
	printf("%d", strlen(*arr1));        //����
	printf("%d", strlen(arr1[1]));             //�����
	printf("%d", strlen(&arr1));        //6         �ᾯ��Ӧ����char ��*p����7��
	printf("%d", strlen(&arr1+1));      //���ֵ
	printf("%d", strlen(&arr1[0] + 1));          //5










	char* p = "abcdef";               //�ѳ����ַ����׵�ַ����p��
	printf("%d\n", sizeof(p));      //ָ�����p�Ĵ�С      4
	printf("%d\n", sizeof(p+1));      //ָ�����p��b�ĵĴ�С        4
	printf("%d\n", sizeof(*p));      //ָ�����p�Ĵ�С         1
	printf("%d\n", sizeof(p[0]));       //  1        arr[0]==*(arr+0)      p[0]==*(p+0)=="a"
	printf("%d\n", sizeof(&p));         //4
	printf("%d\n", sizeof(&p+1));         //4
	printf("%d\n", sizeof(&p[0] + 1));         //4          b�ĵ�ַ

	printf("%d\n", strlen(p));      //a�ĵ�ַ      6
	printf("%d\n", strlen(p + 1));      //b�ĵ�ַ      5       
	printf("%d\n", strlen(*p));      //����         
	printf("%d\n", strlen(p[0]));       //  ����
	printf("%d\n", strlen(&p));         //���ֵ   p�зŵ���a�ĵ�ַ
	printf("%d\n", strlen(&p + 1));         //���ֵ
	printf("%d\n", strlen(&p[0] + 1));         //5         b�ĵ�ַ





	int a[3][4] = {0};
	printf("%d\n", sizeof(a));                 //48
	printf("%d\n", sizeof(a[0][0]));            //4
	printf("%d\n", sizeof(a[0]));                //16       a[0]�൱�ڵ�һ����һά����
	printf("%d\n", sizeof(a[0]+1));               //4       a[0]�ǵ�һ�е����������� ������ʱ����Ԫ�ص�ַ��a[0]��ʵ�ǵ�һ�е�һ��Ԫ�صĵ�ַ
	                                                 //����a[0]+1  �ǵ�һ�еڶ���Ԫ�صĵ�ַ����4
	printf("%d\n", sizeof(*(a[0] + 1)));      // 4         *(a[0] + 1)�ǵ�һ�еĵڶ���Ԫ��
	printf("%d\n", sizeof(a+1));             // 4       a����Ԫ�صĵ�ַҲ���ǿ���һλ�����һ�еĵ�ַ��a+1���ǵڶ��еĵ�ַ
	printf("%d\n", sizeof(*(a + 1)));         //16           ����ڶ��еĴ�С*(a + 1)=a[1]
	printf("%d\n", sizeof(&a[0] + 1));        //4       �ڶ��еĵ�ַ
	printf("%d\n", sizeof(*( & a[0] + 1)));         //    16    
	printf("%d\n", sizeof(*a));              //16         ��һ�е�ַ
	printf("%d\n", sizeof(a[3]));            // 16       sizeof������������
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//���ײ���

//��һ�����������������ʲô 67

//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//
//}
//
//void main()
//{
//	fib(8);
//	printf("%d",cnt);
//}

//��������������������ʲô ������ѭ��

//int main()
//{
//	int x = 1;
//	do {
//		printf("%2d\n", x++);
//	} while (x--);
//
//	return 0;
//}

//�������������ִ�����i��j��ֵ�ֱ��Ƕ��� 2 1

//int main()
//{
//	int i = 1;
//	int j;
//	j = i++;
//	printf("%d %d", i, j);
//
//	return 0;
//}

//���ģ����³���k������ֵ�Ƕ��� 90

//int main()
//{
//	int i = 10;
//	int j = 20;
//	int k = 3;
//	k *= i + j;
//	printf("%d\n", k);
//
//	return 0;
//}

//���壺���³�����������Ƕ��� 1

#include <stdlib.h>
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//
//int main()
//{
//	test();
//	printf("%d\n", a);
//
//	return 0;
//}

//������ִ�����³���c��ֵ�Ƕ��� -1

//int main()
//{
//	int a = 0, c = 0;
//	do {
//		--c;
//		a = a - 1;
//	} while (a > 0);
//	printf("%d\n", c);
//
//	return 0;
//}

//���ߣ�����forѭ����ִ�д����Ƕ��� 4

//int main()
//{
//	int count = 0;
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; (y = 123) && (x < 4); x++)
//	{
//		count++;
//	}
//	printf("%d\n", count++);
//
//	return 0;
//}

//��ˣ�
//������������A��������B����С��������ָ�ܱ�A��B��������С��������ֵ�����һ���㷨��������A��B����С������
//������������������������A��B
//������������A��B����С������

//����һ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//����a��b����С������
//	int m = (a > b ? a : b);
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	//��ӡ
//	printf("%d\n", m);
//
//	return 0;
//}

//���������Ż�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//����a��b����С������
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	//��ӡ
//	printf("%d\n", a * i);
//
//	return 0;
//}

//��ţ�
//��Ŀ�����������ַ���|ʱ�����ƣ�1s|�ڴ����ƣ�32768k
//��Ŀ���ݣ���һ�仰�ĵ��ʽ��е��ã���㲻���á�����I like beijing.�����������Ϊ��beijing. like I
//����������ÿ�������������1������������I like beijing.�����������Ȳ�����100
//��������������������֮����ַ������Կո�ָ�

//1.�������ַ�������
//2.��ÿ����������
#include <assert.h>
#include <string.h>
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[101] = { 0 };
	//����
	gets(arr);//I like beijing
	//����
	int len = strlen(arr);
	//1.���������ַ���
	reverse(arr, arr + len - 1);
	//2.����ÿ������
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
			end++;
		start = end;
	}
	//���
	printf("%s\n", arr);

	return 0;
}





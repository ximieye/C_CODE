#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//初阶测评

//题一：下面代码输出结果是什么 67

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

//题二：下面代码输出结果是什么 陷入死循环

//int main()
//{
//	int x = 1;
//	do {
//		printf("%2d\n", x++);
//	} while (x--);
//
//	return 0;
//}

//题三：下面代码执行完后，i和j的值分别是多少 2 1

//int main()
//{
//	int i = 1;
//	int j;
//	j = i++;
//	printf("%d %d", i, j);
//
//	return 0;
//}

//题四：以下程序k的最终值是多少 90

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

//题五：以下程序的输出结果是多少 1

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

//题六：执行如下程序，c的值是多少 -1

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

//题七：以下for循环的执行次数是多少 4

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

//题八：
//描述：正整数A和正整数B的最小公倍数是指能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小公倍数
//输入描述：输入两个正整数A和B
//输出描述：输出A和B的最小公倍数

//方案一：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//计算a和b的最小公倍数
//	int m = (a > b ? a : b);
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	//打印
//	printf("%d\n", m);
//
//	return 0;
//}

//方案二：优化
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//计算a和b的最小公倍数
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	//打印
//	printf("%d\n", a * i);
//
//	return 0;
//}

//题九：
//题目描述：倒置字符串|时间限制：1s|内存限制：32768k
//题目内容：将一句话的单词进行倒置，标点不倒置。比如I like beijing.经过函数后变为：beijing. like I
//输入描述：每个测试输入包含1个测试用例：I like beijing.输入用例长度不超过100
//输出描述：依次输出倒置之后的字符串，以空格分割

//1.把整个字符串逆序
//2.把每个单词逆序
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
	//输入
	gets(arr);//I like beijing
	//逆置
	int len = strlen(arr);
	//1.逆序整个字符串
	reverse(arr, arr + len - 1);
	//2.逆序每个单词
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
	//输出
	printf("%s\n", arr);

	return 0;
}





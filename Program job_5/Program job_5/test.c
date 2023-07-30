#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//操作符练习

//题一：
//描述：小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
//输入描述：输入包含一个整数n（1 <= n <= 30）
//输出描述：输出一个整数，即小乐乐可以走的方法数。
//int fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);
//	//计算
//	int m = fib(n);
//	//输出
//	printf("%d\n", m);
//
//	return 0;
//}

//题二：
//描述：有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//数据范围：序列长度和序列中的值都满足1＜n＜50
//输入描述：
//第一行输入一个整数(0<=N<=50)。
//第二行输入N个整数，输入用空格分隔的N个整数。
//第三行输入想要进行删除的一个整数。
//输出描述：
//输出为一行，删除指定数字之后的序列。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	//接收n个数字
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	//接收删除的值
//	scanf("%d", &del);
//	int j = 0;//j作为下标锁定的位置就是用来存放不删除的数据的
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//题三：
//描述：输入n个成绩，换行输出n个成绩中最高分数和最低分数的差
//输入描述：两行，第一行为n，表示n个成绩，不会大于10000。
//第二行为n个成绩（整数表示，范围0~100），以空格隔开。
//输出描述：一行，输出n个成绩中最高分数和最低分数的差。
//方法一：
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10000] = { 0 };
//	int i = 0;
//	//输入
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		//找出最大值
//		if (arr[i] > max)
//			max = arr[i];
//		//找出最小值
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("%d\n", max - min);
//
//	return 0;
//}

//方法二：一个循环，简化很多
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10000] = { 0 };
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < n; i++)
//	{
//		//输入
//		scanf("%d", &arr[i]);
//		//找出最大值
//		if (arr[i] > max)
//			max = arr[i];
//		//找出最小值
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("%d\n", max - min);
//
//	return 0;
//}

//题四：
//描述：小明想完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
//输入描述：多组输入，每一行输入一个字母。
//输出描述：针对每组输入，输出单独占一行，输出字母的对应形式。
//方法一：
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else
//			printf("%c\n", ch + 32);
//
//		getchar();//处理\n
//	}
//
//	return 0;
//}

//方法二：
//int main()
//{
//	char ch = 0;
//	//scanf读取成功的时候，返回的是读取的数据的个数
//	//scanf函数在读取失败的时候返回EOF
//	while (scanf("%c", &ch) != EOF)//或者scanf("%c", &ch) == 1
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else if(ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);
//	}
//
//	return 0;
//}

//方法三：
#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	//scanf读取成功的时候，返回的是读取的数据的个数
//	//scanf函数在读取失败的时候返回EOF
//	while (scanf("%c", &ch) != EOF)//或者scanf("%c", &ch) == 1
//	{
//		if (islower(ch))
//			printf("%c\n", toupper(ch));
//		else if (isupper(ch))
//			printf("%c\n", tolower(ch));
//	}
//
//	return 0;
//}

//题五：
//描述：小明想判断输入的字符是不是字母，请帮他编程实现
//输入描述：多组输入，每一行输入一个字符。
//输出描述：针对每组输入，输出单独占一行，判断输入字符是否为字母，输出内容详见输出样例。
//方法一：
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if ((ch >= 'A' && ch <= 'Z') || ch >= 'a' && ch <= 'z')
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is not an alphabet.\n", ch);
//
//		getchar();//处理\n
//	}
//
//	return 0;
//}

//方法二：
//int main()
//{
//	char ch = 0;
//	//%c的前面加空格
//	//跳过下一个字符之前的所有空白字符
//	while (scanf(" %c", &ch) == 1)
//	{
//		//if ((ch >= 'A' && ch <= 'Z') || ch >= 'a' && ch <= 'z')
//		if(isalpha(ch))
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is not an alphabet.\n", ch);
//	}
//
//	return 0;
//}

//题六：
//描述：小明参加了语文、数学、外语的考试，请帮他判断三科中的最高分、从键盘任意输入三个整数表示的分数，编程判断其中的最高分。
//数据范围：0<=n<=100
//输入描述：输入一行包括三个整数表示的分数(0~100)，用空格分隔。
//输出描述：输出为一行，即三个分数中的最高分。
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int score = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &score);
//		if (score > max)
//			max = score;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//题七：
//描述：
//变种水仙花数 - Lily Number；把任意的数字，从中间拆分成两个数字，比如1461可以拆分成(1和461)。(14和61)，(146和1)，
//如果所有拆分后的乘积之和等于自身，则是一个Lily Number.
//例如：
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//求出5位数中的所有Lily Number。
//输入描述：无
//输出描述：一行，5位数中的所有Lily Number，每两个数之间间隔一个空格。
#include <math.h>
int main()
{
	int i = 0;

	for (i = 10000; i <= 99999; i++)
	{
		//判断i是否为Lily Number。
		int sum = 0;
		int j = 0;
		for (j = 1; j <= 4; j++)
		{
			int k = (int)pow(10, j);
			sum += (i % k) * (i / k);
		}
		if (sum == i)
			printf("%d ", i);
	}

	return 0;
}





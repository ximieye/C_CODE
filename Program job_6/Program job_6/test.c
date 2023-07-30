#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//操作符练习

//题一：下面代码的结果是什么  9 23 8

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6 a=6
//	b = ++c, c++, ++a, a++;//c=8 b=7 a=8
//	b += a++ + c;//a=9 b=23 c=8
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	//9 23 8
//	return 0;
//}

//题二：
//题目名称：统计二进制中1的个数
//题目内容：写一个函数返回参数二进制中1的个数。

//方法一：
////int count_num_of_1(int n)
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//
//	return count;
//}
//-1
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111
//

//方法二：
//int count_num_of_1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//
//	return count;
//}

//方法三：巧妙
//n = 15
//n = n&(n-1)
//1111 n
//1110 n-1
//1110 n
//1101 n-1
//1100 n
//1011 n-1
//1000 n
//0111 n-1
//0000 n
//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//
//	return count;
//}
////如果要判断一个数是不是2的n次方
////2^1
////10
////2^2
////100
////2^3
////1000
////if ((n & (n - 1)) == 0) --> n是2的n次方
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//
//	return 0;
//}

//题三：
//题目名称：求两个数二进制中不同位的个数
//题目内容：编程实现：两个int(32位)整数m和n的二进制表达中，有多少个位(bit)不同？

//方法一：
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//方法二：
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	//^异或操作符
//	//相同为0，相异为1
//	int ret = m ^ n;
//	//统计一下ret中二进制位有几个1
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//题四：
//题目名称：打印整数二进制的奇数位和偶数位
//题目内容：获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//10
//00000000000000000000000000001010
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//
//	//获取奇数位的数字
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	//获取偶数位的数字
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//
//	return 0;
//}

//题五：下面代码的结果是什么 >
//全局变量，静态变量都是放在静态区
//全局变量，静态变量不初始化的时候，默认会被初始化为0
//局部变量，是放在栈区，不初始化，默认值是随机值

//int i;//0
//int main()
//{
//	i--;//-1
//	//sizeof这个操作符计算返回的结果是size_t类型的，是无符号整型的
//	//
//	//类型大于整型大小的时候，进行算术转换，前面i的类型int转换为unsigned int，
//	//当-1被转换成无符号整型的时候，它就会被理解为一个非常大的正数
//	//-1
//	//当-1被当成无符号数来看待的时候，其实是把它的补码当成有效数来计算
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	if (i > sizeof(i))//-1 > 4   算数转换
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//题六：
//描述：KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用***组成的X形图案。
//输入描述：多组输入，一个整数（2~20），表示输出的行数，也表示组成"X"的反斜线和正斜线的长度。
//输出描述：针对每行输入，输出用***组成的X形图案。

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//题七：
//描述：KiKi想获得某年某月有多少天，请帮他编程实现，输入年份和月份，计算这一年这个月有多少天。
//输入描述：多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//输出描述：针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。

//int is_leap_year(int y)
//{
//	return ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));
//	//0表示假
//	//非0表示真
//	//逻辑操作符 && || ！ 的结果如果是真就是1，如果是假就是0
//}
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	//                 1  2  3  4  5  6  7  8  9  10 11 12
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if ((is_leap_year(y) == 1) && (m==2))
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//
//	return 0;
//}

//题八：
//描述：
//KiKi想知道已经给出的条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型(等边三角形、等腰三角形或普通三角形)。
//输入描述：
//题目有多组输入数据，每一行输入三个a，b，c（0 < a，b，c < 1000），作为三角形的三个边，用空格分隔。
//输出描述：
//针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，
//等腰三角形则输出“Isosceles triangle!”，其余的三角形則输出"Ordinary triangle!"，反之输出“Not a triangle!”。

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) == 3)
	{
		//判断
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			if (a == b && b == c)//等边
				printf("Equilateral triangle!\n");
			else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))//等腰
				printf("Isosceles triangle!\n");
			else//普通
				printf("Ordinary triangle!\n");
		}
		else
			printf("Not a triangle!\n");
	}

	return 0;
}






#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//分支和循环语句练习题
//题一：打印结果是什么

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//这里不是判断，而是赋值，i = 5表达式的结果是5
//			printf("%d ", i);//5 5 5 5 5 5....死循环
//	}
//
//	return 0;
//}

//题二：打印结果是什么

//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default:
//			printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//
//	return 0;
//}

//题三：从大到小输出
//内容：写代码将三个整数按从小到大输出

//void Swap(int* px, int* py)
//{
//	int t = *px;
//	*px = *py;
//	*py = t;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//	//调整
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	//输出
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}

//题四：写一个代码打印1~100之间所有3的倍数的数字

//方法一：
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//方法二：
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i+=3)
//		printf("%d ", i);
//
//	return 0;
//}

//题五：给定两个数，求这两个数的最大公约数

//方法一：暴力求解，不够高效
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//求最大公约数
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	//输出
//	printf("%d\n", m);
//
//	return 0;
//}

//方法二：辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = a * b;
//	//输入
//	scanf("%d %d", &a, &b);//24 18
//	//求最大公约数
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	//输出
//	printf("%d\n", b);//最大公约数
//
//	return 0;
//}

//题六：打印结果是什么
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//
//	return 0;
//}

//题七：编写程序数一下1到100的所有整数中出现多少个数字9
//9 19 29 39 49 59 69 79 89 99
//90 91 92 93 94 95 96 97 98 99

//int main()
//{
//	int i = 0;
//	int count = 0;//计数
//	for (i = 1; i <= 100; i++)
//	{
//		//判断个位是不是9
//		if (i % 10 == 9)
//			count++;
//		//判断十位是不是9
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//
//	return 0;
//}

//题八：计算1/1-1/2+1/3-1/4+1/5 ..... +1/99-1/100的值，打印出结果
//分子总是1
//分母是1~100

//方法一：
//int main()
//{
//	int i = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum1 = sum1 + 1.0 / i;
//		else
//			sum2 = sum2 - 1.0 / i;
//	}
//
//	printf("%lf\n", sum1+sum2);
//
//	return 0;
//}

//方法二：效率更高
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}

//题九：求10个整数中的最大值

//int main()
//{
//	//准备10个整数
//	int arr[10] = { 0 };
//	int i = 0;
//	//输入数字
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//找出最大值
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//错误示范：
//int main()
//{
//	//准备10个整数
//	int arr[] = { 0 };
//	//int arr[1] = {0};
//	//这里没有指定数组的元素个数，就会根据初始化的内容来推算元素的个数
//
//	int i = 0;
//	//输入数字
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//找出最大值
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//题十：在屏幕上输出9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//....
//

//int main()
//{
//	int i = 0;
//	//打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印1行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d\t", i, j, i * j);//%-2d 两位左对齐 %2d 两位右对齐
//
//		printf("\n");
//	}
//	
//	return 0;
//}


//函数练习题
//题一：实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//打印1行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d\t", i, j, i * j);//%-2d 两位左对齐 %2d 两位右对齐
//
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}

//题二：打印结果是什么
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//
//int main()
//{
//	int ret = Fun(2);
//	printf("%d\n", ret);
//
//	return 0;
//}

//题三：编写一个函数 reverse_string(char* string)(递归实现)
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。比如：char arr[] = "abcdef"
#include <string.h>

//方法一：循环实现(迭代)
//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f g \0]
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	//int right = sz - 2;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//方法二：函数实现(非递归) - 就是把方法一的循环放到自定义的函数里
//void reverse(char arr[1])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f g \0]
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//方法三：函数实现(递归1)
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//void reverse(char* str)
//{
//	char tmp = *str;//1
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);//4
//	}
//	*(str + len - 1) = tmp;//5
//}
//
//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f g \0]
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//方法四：函数实现(递归2)
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if (left < right)
//		reverse(arr, left + 1, right - 1);
//}
//
//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f g \0]
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	reverse(arr, left, right);
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//题四：写一个递归函数DigitSum(n)，输入一个非负函数，返回组成它的数字之和
//int DigitSum(unsigned int n)//1234
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
////DigitSum(1234)
////DigitSum(123)+4
////DigitSum(12)+3+4
////DigitSum(1)+2+3+4
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}

//题五：编写一个函数实现n的k次方，使用递归实现

//Pow(n, k) -> n*Pow(n, k-1)
//k = 0, 1
//k>0 ,Pow(n, k) -> n*Pow(n, k-1)
//k<0 ,1.0/Pow(n, -k)
double Pow(int n, int k)
{
	if (k > 0)
		return n * Pow(n, k - 1);
	else if (k == 0)
		return 1;
	else
		return 1.0 / Pow(n, -k);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);

	printf("%lf\n", ret);

	return 0;
}





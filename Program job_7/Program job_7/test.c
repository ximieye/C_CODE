#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//指针及结构体练习

//题一：下面代码的结果是多少  0 0 3 4 5

//数据在内存中存放的时候，有一个顺序的问题
//大小端字节序

//0x 00 00 00 01
//0x 00 00 00 02
//0x 00 00 00 03
//0x 00 00 00 04
//0x 00 00 00 05

//arr
//01 00 00 00 |02 00 00 00 |03 00 00 00 |04 00 00 00 |05 00 00 00
//低                                                            高

//int main()
//{
//	int arr[] = { 1,2,3,4,5 }; 
//	short* p = (short*)arr;//arr前面强制转换为short*，代表1,2,3,4,5现在都只占2个字节了
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//题二：下面代码的结果是多少  6 12

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}

//题三：下面代码的结果是多少 11223300

//任何一个变量/表达式，都有2个属性
//值属性  类型属性

//int a = 3;
//a + 4.5 ->
//值属性：7.5
//类型属性：double
//&a ->
//值属性：3
//类型属性：int*

//int main()
//{
//	int a = 0x11223344;
//	//44 33 22 11 - 倒着存的
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);//%x，十六进制形式打印
//
//	return 0;
//}

//题四：
//题目名称：使用指针打印数组内容
//题目内容：写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整型一维数组。

//void print(int* parr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(parr + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}

//题五：
//题目名称：字符串逆序
//题目内容：写一个函数，可以逆序一个字符串的内容。

//int main()
//{
//	char arr[10001] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);
//	//逆序
//	int left = 0;
//	int right = strlen(arr) - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}

//题六：
//题目名称：计算求和
//题目内容：求Sn = a+aa+aaa+aaaa+aaaaa+...的前n项之和，其中a是一个数字。

//2
//2*10+2=22
//22*10+2=222
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);//2 5
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//题七：
//题目名称：打印水仙花数
//题目内容：求出0~100000之间的所有"水仙花数"并输出。
//"水仙花数"是指一个n位数，其各位数字的n次方之和正好等于该数本身，如：153=1^3+5^3+3^3，则153是一个"水仙花数"。

#include <math.h>

//方案一：
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//判断i是否为"水仙花数"
//		//12345
//		//1.计算i是几位数 - n
//		int n = 1;//任何一个数至少是一位数
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2.得到i每一位，计算他的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//方案二：写成函数
//int is_narcissistic_number(int i)
//{
//	//判断i是否为"水仙花数"
//	//12345
//	//1.计算i是几位数 - n
//	int n = 1;//任何一个数至少是一位数
//	int tmp = i;
//	int sum = 0;
//	while (tmp / 10)
//	{
//		n++;
//		tmp /= 10;
//	}
//	//2.得到i每一位，计算他的n次方之和
//	tmp = i;
//	while (tmp)
//	{
//		sum += pow(tmp % 10, n);
//		tmp /= 10;
//	}
//
//	return sum == i;
//	/*if (sum == i)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}*/
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		if (is_narcissistic_number(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//题八：
//题目名称：打印菱形
//题目内容：用C语言在屏幕上输出菱形。

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j <= i ; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//题九：下面代码的结果是多少 wang

//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18} };
//	fun(students + 1);
//
//	return 0;
//}

//题十：
//题目名称：喝汽水问题
//题目内容：喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）

//方案一：
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//
//	//置换
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	
//	return 0;
//}

//方案二：找到规律
int main()
{
	int money = 0;
	scanf("%d", &money);
	if (money > 0)
		printf("%d\n", 2 * money - 1);
	else
		printf("%d\n", 0);

	return 0;
}





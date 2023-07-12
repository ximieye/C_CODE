#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//一、库函数
//学会运用函数手册

//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[] = "hello hgd";
//
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);//hello hgd
//
//	char arr[20] = "hello world";
//	memset(arr+6, 'y', 3);
//	printf("%s\n", arr);
//
//	return 0;
//}


//二、自定义函数
//函数的定义

//写一个函数可以找出两个整数中的最大值。
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//求较大值
//	//函数的调用
//	int m = get_max(a, b);
//
//	printf("%d\n", m);
//
//	return 0;
//}

//写一个函数可以交换两个整形变量的内容。
//x和y叫形式参数
////错误写法
////void Swap(int x, int y)
////{
////	int z = 0;
////	z = x;
////	x = y;
////	y = z;
////}
//
////正确写法
//void Swap(int *px, int *py)
//{
//	int z = *px;//z=a
//	*px = *py;//a=b
//	*py = z;//b=a
//}
//
////当实参传递给形参的时候，形参是实参的一份临时拷贝
////对形参的修改不能改变实参
////
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//交换
//	printf("交换前:a=%d b=%d\n", a, b);
//	//a和b叫实参
//	//Swap(a, b);
//	Swap(&a, &b);
//
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//基础：
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	a = 20;//直接改
//	*p = 30;//间接改
//	return 0;
//}


//三、函数的参数
//实参
//真实传给函数的参数，叫实参。
//实参可以是：常量、变量、表达式、函数等。
//无论实参是何种类型的量，在进行函数调用时，它们都必须有确定的值，以便把这些值传送给形参。
//int c = Add(10, b);
//int c = Add(a + 3, b);
//int c = Add(Add(a, 3), b);

//形参
//形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内存单元），
//所以叫形式参数。形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效。

//四、函数的调用
//传值调用 - 函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参。
//传址调用 - 传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
//这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量。

//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int *px, int *py)
//{
//	int z = *px;//z=a
//	*px = *py;//a=b
//	*py = z;//b=a
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//交换
//	printf("交换前:a=%d b=%d\n", a, b);
//	//a和b叫实参
//	//传值调用
//	Swap1(a, b);
//	//传址调用
//	Swap2(&a, &b);
//
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}


//练习
//1.1 打印100~200之间的素数

//素数只能被1和它本身整除的数
//方法一：
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//是素数就打印
//		//拿2~i-1之间的数字去试除i
//		int flag = 1;//flag是1，表示是素数
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//方法二(优化版):
#include <math.h>
//sqrt是数学库函数 - 开平方
//math.h

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//是素数就打印
//		//拿2~sqrt(i)之间的数字去试除i
//		int flag = 1;//flag是1，表示是素数
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//1.2 写一个函数可以判断一个数是不是素数。

//是素数返回1
//不是素数返回0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}


//2.1 打印1000~2000年之间的闰年
//闰年判断规则：
//1.能被4整除，并且不能被100整除是闰年
//2.能被400整除也是闰年
//
//方法一：
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 100)
//			{
//				printf("%d ", year);
//			}
//		}
//
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//方法二(整合)：
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//2.2 写一个函数判断一年是不是闰年。

//是闰年返回1
//不是闰年返回0
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	//else
//	//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}


//3. 写一个函数，实现一个整形有序数组的二分查找。
//int binary_search(int arr[], int k, int sz)//形参arr看上去是数组，本身是指针变量
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了返回下标
//		}
//	}
//	
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//找到了，返回下标
//	//找不到，返回-1
//	int ret = binary_search(arr, k, sz);//实参直接写数组名arr，不要写成arr[];
//	//数组名作为参数传递给函数时，变为指针变量，只需要存好首元素地址。
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//
//	return 0;
//}

//
//形式参数和实际参数的名字可以相同，也可以不同
//


//这是一个错误的示范
//数组传参实际上传递的是数组首元素的地址，而不是整个数组
//所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的
//int binary_search(int arr[], int k)//形参arr看上去是数组，本身是指针变量
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//不能在函数内部计算一个函数参数部分的数组的元素个数
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了返回下标
//		}
//	}
//
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	int k = 7;
//
//	//找到了，返回下标
//	//找不到，返回-1
//	int ret = binary_search(arr, k);//实参直接写数组名arr，不要写成arr[];
//	//数组名作为参数传递给函数时，变为指针变量，只需要存好首元素地址。
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//
//	return 0;
//}


//布尔类型(C99中引入的) - 1个字节
//bool - 用来表示真假的变量
//bool flag = true;
//          = false;

//写一个函数可以判断一个数是不是素数。
//是素数返回true
//不是素数返回false
//#include <stdbool.h>
//bool is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return false;
//		}
//	}
//
//	return true;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//4. 写一个函数，每调用一次这个函数，就会将 num 的值增加1。
//方法一：
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	Add(&num);
//	printf("%d\n", num);//4
//
//	return 0;
//}

//方法二：
//int Add(int n)
//{
//	return n + 1;//return ++n;
//}
//
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);//1
//	num = Add(num);
//	printf("%d\n", num);//2
//	num = Add(num);
//	printf("%d\n", num);//3
//	num = Add(num);
//	printf("%d\n", num);//4
//
//	return 0;
//}


//五、函数的嵌套调用和链式访问
//5.1 嵌套调用 - 函数可以嵌套调用，但是不能嵌套定义。
//嵌套定义 - 在一个函数内部不能定义另一个函数
//#include <stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();//嵌套调用
//	}
//}
//
//int main()
//{
//	three_line();
//
//	return 0;
//}

//5.2 链式访问
//链式访问的前提条件是函数得有返回值
//#include <string.h>
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//
//	////链式访问
//	//printf("%d\n", strlen("abcdef"));//strlen的返回值作了printf的一个参数
//
//	printf("%d", printf("%d", printf("%d", 43)));//printf函数的返回值是打印在屏幕上字符的个数
//
//	return 0;
//}


//奇怪的写法
//函数不写返回值的时候，默认返回类型是int
//但是不建议不写返回类型
//Add(int x, int y)//不推荐，应写成int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}


//int Add(int x, int y)//不准确，不合适 - 写了int返回类型，就要明确返回一个值
//{
//	printf("hehe\n");//写了int返回类型，但是不明确返回(return)什么，会凭最后一条指令是什么，就返回什么
//}
////
////上面的代码在一些编译器上返回的是函数中执行过程中的最后一条指令执行的结果
////
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}


//void test(void)//()中加void明确拒绝100
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);//不推荐的，没有参数，就不要给函数传参数
//	test();
//
//	return 0;
//}


//明确的说明，main函数不需要参数
//本质上main函数是有参数的
//
//int main(void)//明确表示不要给main函数传参数
//{
//
//	return 0;
//}

//main函数有3个参数
//int main(int argc, char* argv[], char *envp[])
//{
//
//	return 0;
//}


//六、函数的声明和定义

//6.1 函数声明：
//1. 告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在，函数声明决定不了。
//2. 函数的声明一般出现在函数的使用之前。要满足先声明后使用。
//3. 函数的声明一般要放在头文件中的。

//6.2 函数定义：
//函数的定义是指函数的具体实现，交待函数的功能实现。

#include "add.h"
#include "sub.h"

//导入静态库
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	//加法
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	//int ret = Sub(a, b);
//	//printf("%d\n", ret);
//
//	return 0;
//}


//七、函数递归
//7.1 什么是递归？
//程序调用自身的编程技巧称为递归（recursion）。
//递归做为一种算法在程序设计语言中广泛应用。一个过程或函数在其定义或说明中有直接或间接调用自身的一种方法，
//它通常把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解，
//递归策略只需少量的程序就可描述出解题过程所需要的多次重复计算，大大地减少了程序的代码量。

//递归的主要思考方式在于：把大事化小


//7.2 递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//每次递归调用之后越来越接近这个限制条件。

//7.2.1 练习1:（画图理解）
//接受一个整型值（无符号），按照顺序打印它的每一位。
//例如： 输入：1234，输出 1 2 3 4

//%d是打印有符号的整数(会有正负数)
//%u是打印无符号的整数

//打印4 3 2 1的方法
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//1 2 3 4
//	//[4 3 2 1]
//	//
//	while (num)
//	{
//		printf("%d ", num % 10);//这样打印的是4 3 2 1
//		num = num / 10;
//	}
//
//	return 0;
//}

//递归的实习
//打印1 2 3 4

//void print(unsigned int n)
//{
//	//if (n > 9)
//	{
//		print(n / 10);//123
//	}
//	printf("%d ", n % 10);//4
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	print(num);//接受一个整型值（无符号），按照顺序打印它的每一位。
//
//	return 0;
//}
//
////print(1234)
////print(123) 4 - 1234%10
////print(12) 3 4
////print(1) 2 3 4
////1 2 3 4

//7.2.2 练习2:（画图讲解）
//编写函数不允许创建临时变量，求字符串的长度。

//求字符串的长度
//模拟实习strlen

#include <string.h>

////int my_strlen(char arr[])//参数部分写成数组的形式
//int my_strlen(char* str)//参数部分写成指针的形式
//{
//	int count = 0;//计数，临时变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;//找下一个字符
//	}
//
//	return count;
//}


//递归求解

//my_strlen("abc");
//1+my_strlen("bc");
//1+1+my_strlen("c");
//1+1+1+my_strlen("");
//1+1+1+0

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";//[a b c \0]
//	//char*
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}


//7.3 递归与迭代
//7.3.1 练习3：求n的阶乘。（不考虑溢出）

//递归实现
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}

//迭代实现 - 非递归
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//7.3.2 练习4：
//求第n个斐波那契数。(不考虑溢出)
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55 ...

//递归实现 - 对于这道题的计算量太大，效率低
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//40
//39    38
//38    37    37    36
//37 36 36 35 35 34 34 33
//...

//迭代实现 - 对于这道题的计算量小，效率高
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	//printf("%d\n", count);
//
//	return 0;
//}


//使用递归造成栈溢出
//void test(int n)
//{
//	if (n < 10000)
//		test(n + 1);//递归层次太深，这里会出现栈溢出现象
//}
////那如何解决上述的问题：
////1. 将递归改写成非递归。
////2. 使用 static 对象替代 nonstatic 局部对象。
////在递归函数设计中，可以使用 static 对象替代 nonstatic 局部对象（即栈对象），
////这不仅可以减少每次递归调用和返回时产生和释放 nonstatic 对象的开销，
////而且 static 对象还可以保存递归调用的中间状态，并且可为各个调用层所访问。
////
//
//int main()
//{
//	test(1);
//
//	return 0;
//}


//函数递归的几个经典题目(自己写的)
//1. 汉诺塔问题
//2. 青蛙跳台阶问题

//A:起始位置  B:中转位置  C:目的位置
//void move(int n, char A, char B, char C)
//{
//	if (n == 1)
//		printf("%c -> %c   ", A, C);
//	else
//	{
//		//把n-1的圆环从A移动到B，递归调用下一层就是把A移动到C
//		move(n - 1, A, C, B);//第一步需要把n-1个圆环从A通过C移动到B
//		printf("%c -> %c   ", A, C);//第二步把A剩下最大的从A移动到C
//
//		//把n-1的圆环从B移动到C
//		move(n - 1, B, A, C);//第三步把B中的n-1个盘子从B通过A移动到C
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	move(n, 'A', 'B', 'C');
//
//	return 0;
//}


int method(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return method(n - 1) + method(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("青蛙要跳%d个台阶\n",n);
	int ret = method(n);
	printf("青蛙有%d种跳法\n", ret);

	return 0;
}




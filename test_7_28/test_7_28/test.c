#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//实用调试机巧

//1. 什么是bug？
//第一次被发现的导致计算机错误的飞蛾，也是第一个计算机程序错误。

//2. 调试是什么？有多重要？
//2.1 调试是什么？
//调试（英语：Debugging / Debug），又称除错，是发现和减少计算机程序或电子仪器设备中程序错误的一个过程。

//2.2 调试的基本步骤
//发现程序错误的存在
//以隔离、消除等方式对错误进行定位
//确定错误产生的原因
//提出纠正错误的解决办法
//对程序错误予以改正，重新测

//2.3 Debug和Release的介绍。
//Debug 通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程序。
//Release 称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优
//的，以便用户很好地使用。

//3. Windows环境调试介绍
//3.1 调试环境的准备
//在环境中选择 debug 选项，才能使代码正常调试。

//3.2 学会快捷键
//最常使用的几个快捷键：
//F5 - 启动调试，经常用来直接跳到下一个断点处。
//F9 - 创建断点和取消断点
//断点的重要作用，可以在程序的任意位置设置断点。这样就可以使得程序在想要的位置随意停止执行，继而一步步执行下去。
//F10 - 逐过程，通常用来处理一个过程，一个过程可以是一次函数调用，或者是一条语句。
//F11 - 逐语句，就是每次都执行一条语句，但是这个快捷键可以使我们的执行逻辑进入函数内部（这是最常用的）。
//CTRL + F5 - 开始执行不调试，如果你想让程序直接运行起来而不调试就可以直接使用。

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	//赋值
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int Add(int x, int y)
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

//3.3 调试的时候查看程序当前信息
//3.3.1 查看临时变量的值
//在调试开始之后，用于观察变量的值。
//3.3.2 查看内存信息
//在调试开始之后，用于观察内存信息。

//void test(int a[])
//{
//	//
//}
//
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//test(arr);
//	char arr[] = "abcdef";
//	return 0;
//}

//3.3.3 查看调用堆栈
//通过调用堆栈，可以清晰的反应函数的调用关系以及当前调用所处的位置。

//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//
//{
//	test();
//
//	return 0;
//}

//3.3.4 查看汇编信息
//可以切换到汇编代码。

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//
//	return 0;
//}

//3.3.5 查看寄存器信息
//可以查看当前运行环境的寄存器的使用信息。

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//	printf("%d\n", c);
//
//	return 0;
//}

//4.多多动手，尝试调试，才能有进步。

//5. 一些调试的实例
//5.1 实例一
//实现代码：求 1！ + 2！ + 3！ ... + n!；不考虑溢出。

//5! = 1*2*3*4*5
//n! = 1*2*3* ... *n

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//1. 首先推测问题出现的原因。初步确定问题可能的原因最好。
//2. 实际上手调试很有必要。
//3. 调试的时候我们心里有数。

//5.2 实例二
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//0~9
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//在VS2019编译器下，这题会出现死循环。
//研究程序死循环的原因：
//1.栈区内存的使用习惯是先使用高地址处的空间，再使用低地址处的空间。
//2.数组随着下标的增长地址是由低到高变化的。
//3.如果i和arr之间有适当的空间，利用数组的越界操就可能会覆盖到i，就可能会导致死循环出现的。

//6. 如何写出好（易于调试）的代码。
//6.1 优秀的代码：
//1. 代码运行正常
//2. bug很少
//3. 效率高
//4. 可读性高
//5. 可维护性高
//6. 注释清晰
//7. 文档齐全
//常见的coding技巧：
//1. 使用assert
//2. 尽量使用const
//3. 养成良好的编码风格
//4. 添加必要的注释
//5. 避免编码的陷阱。

//6.2 示范：
//模拟实现库函数：strcpy

#include <string.h>

//方案一：
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//方案二：
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//方案三：优化一
#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	//断言
//	assert(src != NULL);
//	assert(dest != NULL);
//	//*src++ = *dest++//err
//	while (*dest++ = *src++)
//	{
//		;//放个空语句
//	}
//}

//方案四：优化二
//为什么返回char*呢？
//是为了实现链式访问
//strcpy函数返回的是目标空间的起始地址

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//断言
//	assert(src != NULL);
//	assert(dest != NULL);
//	//*src++ = *dest++//err
//	while (*dest++ = *src++)
//	{
//		;//放个空语句
//	}
//	//return dest;//err
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "XXXXXXXXXX";
//	char arr2[] = "hello hgd";
//	//char* p = NULL;
//	//strcpy在拷贝字符串的时候，会把源字符串中的\0也拷贝过去
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问：一个函数的返回值作另一个函数的参数
//
//	return 0;
//}
//注意：
//1. 分析参数的设计（命名，类型），返回值类型的设计
//2. 这里讲解野指针，空指针的危害
//3. assert的使用，这里介绍assert的作用
//4. 参数部分 const 的使用，这里讲解const修饰指针的作用
//5. 注释的添加

//6.3 const的作用
//int main()
//{
//	//int num = 10;
//	//num = 20;
//	//printf("%d\n", num);
//
//	const int num = 10;
//	//num = 20;
//
//	//const 修饰指针变量
//	////1.const 放在*的左边
//	//const int* p = &num;	//int const* p = &num;	
//	////意思是：p指向的对象不能通过p来改变了,但是p变量本身的值是可以改变的
//	//int n = 100;
//	//*p = 20;//err
//	//p = &n;//ok
//
//	//2.const 放在*的右边
//	int* const p = &num;
//	//意思是：p指向的对象是可以通过p来改变的，但是不能修改p变量本身的值
//	int n = 100;
//	p = &n;//err
//	*p = 0;//ok
//
//	printf("%d\n", num);
//
//	return 0;
//}
//结论：
//const修饰指针变量的时候：
//1. const如果放在 * 的左边，修饰的是指针指向的内容，保证指针指向的内容不能通过指针来改
//变。但是指针变量本身的内容可变。
//2. const如果放在 * 的右边，修饰的是指针变量本身，保证了指针变量的内容不能修改，但是指
//针指向的内容，可以通过指针改变。

//模拟实现一个strlen函数
//求字符串长度
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello hgd";
//	int len = my_strlen(arr);//char*
//	printf("%d\n", len);
//
//	return 0;
//}

//7. 编程常见的错误
//7.1 编译型错误(语法错误)
//直接看错误提示信息（双击），解决问题。或者凭借经验就可以搞定。相对来说简单。
//int main()
//{
//	int a
//	return 0;
//}

//7.2 链接型错误(出现在链接期间)
//看错误提示信息，主要在代码中找到错误信息中的标识符，然后定位问题所在。一般是标识符名不存在或者拼写错误。
//找不到符号（1.不存在，2.写错了）
//int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 10;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}

//7.3 运行时错误(最难受，调试来解决运行时错误)
//借助调试，逐步定位问题。最难搞。




#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//指针的进阶

//1. 字符指针
//在指针的类型中我们知道有一种指针类型为字符指针 char*;
//int main()
//{
//	//char ch = 'w';
//	//char* pc = &ch;
//	//*pc = 'b';
//	//printf("%c\n", ch);
//
//	const char* p = "abcdef";//把字符串首字符a的地址，赋值给了p
//	//char arr[] = "abcdef";
//	//*p = 'w';//err
//	printf("%s\n", p);
//
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//		printf("p1==p2\n");
//	else
//		printf("p1!=p2\n");
//
//	if (arr1 == arr2)
//		printf("arr1==arr2\n");
//	else
//		printf("arr1!=arr2\n");
//
//	return 0;
//}
//这里p1和p2指向的是一个同一个常量字符串。
//C / C++会把常量字符串存储到单独的一个内存区域，当几个指针指向同一个字符串的时候，他们实际会指向同一块内存。
//但是用相同的常量字符串去初始化不同的数组的时候就会开辟出不同的内存块。
//所以arr1和arr2不同，p1和p2相同。

//2. 指针数组
//在《指针》章节我们也学了指针数组，指针数组是一个存放指针的数组。
//
//int arr[10];//整型数组
//char ch[5];//字符数组
// 
//这里我们再复习一下，下面指针数组是什么意思？
//int* arr1[10]; //整形指针的数组
//char* arr2[4]; //一级字符指针的数组
//char** arr3[5];//二级字符指针的数组

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//
//	//0 1 2
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//*(p+i) --> p[i]
//
//			//printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//3. 数组指针
//3.1 数组指针的定义
//整形指针： int* pint; 能够指向整形数据的指针。
//浮点型指针： float* pf; 能够指向浮点型数据的指针。
//那数组指针应该是：能够指向数组的指针。

//int *p[10]; - 指针数组
//int(*p)[10]; - 数组指针	p2可以指向一个数组，该数组有10个元素，每个元素是int类型
//解释：p先和*结合，说明p是一个指针变量，然后指着指向的是一个大小为10个整型的数组。所以p是一个指针，指向一个数组，叫数组指针。
//这里要注意：[]的优先级要高于*号的，所以必须加上（）来保证p先和*结合。

//3.2 &数组名VS数组名

//再次讨论数组名
//int main()
//{
//	char* arr[5] = { 0 };
//	char* (*pc)[5] = &arr;
//
//	//二级指针是这样的：
//	//char ch = 'w';
//	//char* p1 = &ch;
//	//char** p2 = &p1;
//
//	//int arr[10] = { 0 };
//	//int* p = arr;
//		
//	//int(*p2)[10] = &arr;
//  ////p2的类型是int(*)[10];
//  ////int* p2 = &arr;//有警告
//	////int(*)[10] p2;//err
//
//	//整型指针是用来存放整型的地址
//	//字符指针是用来存放字符的地址
//	//数组指针是用来存放数组的地址
//	 
//	//printf("%p\n", arr);
//	//printf("%p\n", arr + 1);
//
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", &arr[0] + 1);
//
//	//printf("%p\n", &arr);
//	//printf("%p\n", &arr + 1);
//
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//
//	return 0;
//}
//数组名通常表示的都是数组首元素的地址
//但是有2个例外：
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2. &数组名，这里的数组名表示的依然是整个数组，所有&数组名取出的是整个数组的地址

//3.3 数组指针的使用
//既然数组指针指向的是数组，那数组指针中存放的应该是数组的地址。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//正常是这样写：
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	//这里用数组指针很麻烦，不是这样用的，见下面的常见用法
//	int (*p)[10] = &arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i));//p是指向数组的，*p其实就相当于数组名，数组名又是数组首元素的地址
//		//所以*p本质上是数组首元素的地址
//	}
//
//	return 0;
//}

//数组指针的常见用法：
//用数组形式表示
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////用数组指针形式表示
//void print2(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			//printf("%d ", p[i][j]);//*(p+i) <=> p[i]
//		}
//		printf("%\n");
//	}
//}
////int (*p)[5];
////p的类型是：int(*)[5];
////p是指向一个整型数组的，数组5个元素int [5]
////p+1 -> 跳过一个5个int元素的数组
//
////int arr[10];
////int (*p)[10] = &arr;		p的类型是int (*)[10]
////&arr+1 -> 跳过40个字节
////int* p2 = arr;	 p的类型是int*
////arr+1 -> 跳过一个整型(4个字节)
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//	return 0;
//}

//int arr[5];           arr是整型数组
//int* parr1[10];       parr1是整型指针数组
//int(*parr2)[10];      parr2是数组指针
//int(*parr3[10])[5];   parr3是存放数组指针的数组

//4. 数组参数、指针参数
//4.1 一维数组传参
//void test(int arr[])//ok?	√
//{}
//void test(int arr[10])//ok?   √
//{}
//void test(int* arr)//ok?   √
//{}
//void test2(int* arr[20])//ok?	√
//{}
//void test2(int** arr)//ok?   √
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}

//4.2 二维数组传参
//void test(int arr[3][5])//ok？   √
//{}
//void test(int arr[][])//ok？   ×		形参的二维数组，行可以省略，列不能省略
//{}
//void test(int arr[][5])//ok？   √
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)//ok？   ×	二维数组的数组名，表示首元素的地址，其实是第一行的地址。第一行是一个一维数组。
//{}
//void test(int* arr[5])//ok？   ×
//{}
//void test(int(*arr)[5])//ok？   √
//{}
//void test(int** arr)//ok？   ×
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}

//4.3 一级指针传参
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//
//	return 0;
//}

//如果是函数的参数部分是指针
//void print(int* p)
//{}
//
//int a = 10;
//int* ptr = &a;
//int arr[10];
//
//print(&a);
//print(ptr);
//print(arr);

//4.4 二级指针传参
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//
//	return 0;
//}

//如果函数的形式参数是二级指针，调用函数的时候可以传什么实参呢？
//test(int** p)
//{}
//
//int* p1;
//int** p2;
//int* arr[10];//指针数组
//
//test(&p1);
//test(p2);
//test(arr);

//5. 函数指针
//指向函数的指针就是数组指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//	//*pa = 20;
//	//printf("%d\n", *pa);
//
//	int arr[5] = { 0 };
//	//&数组名 - 取出的是数组的地址
//	int(*p)[5] = &arr;//数组指针
//
//	//&函数名 - 取出的就是函数的地址
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	//对于函数来说，&函数名和函数名都是函数的地址
//
//	//int (*pf)(int, int) = &Add;
//	int (*pf)(int, int) = Add;//Add前面的&可以不写
//	//int ret = (*pf)(2, 3);
//	//int ret = Add(2, 3);
//	int ret = pf(2, 3);//pf前面的*可以不写
//	printf("%d\n", ret);
//
//	return 0;
//}

//运用函数指针：
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void calc(int(*pf)(int, int))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	calc(Add);
//
//	return 0;
//}

//阅读两段有趣的代码：
//代码1
//int main()
//{
//	(*(void (*)())0)();
//	//void(*p)();	p是函数指针
//	//void(*)();	函数指针类型
//	//以上代码是一次函数调用，调用的是0作为地址处的函数。
//	//1. 把0强制类型转换为：无参，返回类型是void的函数的地址。
//	//2. 调用0地址处的这个函数。
//
//	return 0;
//}

//代码2
////typedef unsigned int unit;
//typedef void(* pf_t)(int);//把void(*)(int)类型重命名为pf_t
//
//int main()
//{
//	void (*signal(int, void(*)(int)))(int);
//	//signal是函数名，以上代码是一次函数声明。
//	//声明的signal函数的第一个参数的类型是int，第二个参数的类型是函数指针，该函数指针指向的函数参数是int，返回类型是void，
//	//signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int，返回类型是void。
//
//	pf_t signal(int, pf_t);
//
//	return 0;
//}

//函数指针的用途：

//写一个计算器
//加法、减法、乘法、除法
void menu()
{
	printf("***************************\n");
	printf("****  1. add   2. sub  ****\n");
	printf("****  3. mul   4. div  ****\n");
	printf("****  0. exit          ****\n");
	printf("***************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入2个操作数:>");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}



































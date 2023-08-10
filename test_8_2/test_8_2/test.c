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
//void menu()
//{
//	printf("***************************\n");
//	printf("****  1. add   2. sub  ****\n");
//	printf("****  3. mul   4. div  ****\n");
//	printf("****  0. exit          ****\n");
//	printf("***************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入2个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//6. 函数指针数组
//数组是一个存放相同类型数据的存储空间，那我们已经学习了指针数组， 比如：
//int *arr[10];	- 数组的每个元素是int*
//那要把函数的地址存到一个数组中，那这个数组就叫函数指针数组，那函数指针的数组如何定义呢？
//int (*parr1[10])(); - 数组的每个元素是int (*)()

//把函数的地址放在函数指针数组里
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//int (*pf)(int, int) = Add;//pf是函数指针
//	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };//arr就是函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}

//函数指针数组的用途：转移表
//例子:（计算器）
//加法、减法、乘法、除法、...
//void menu()
//{
//	printf("***************************\n");
//	printf("****  1. add   2. sub  ****\n");
//	printf("****  3. mul   4. div  ****\n");
//	printf("****  0. exit          ****\n");
//	printf("***************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//函数指针的数组
//	//转移表
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//
//	return 0;
//}

//7. 指向函数指针数组的指针
//指向函数指针数组的指针是一个【指针】，指针指向一个【数组】，数组的元素都是【函数指针】。
//int main()
//{
//	//函数指针数组
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//
//	//指向【函数指针数组】的指针
//	int(*(*ppfArr)[5])(int, int) = &pfArr;
//
//	return 0;
//}

//8. 回调函数
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个函数，
//当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该函数的实现方直接调用，
//而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进行响应。

//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设数组是已经排好序
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}

//
//qsort - 这个函数可以排序任意类型的数据
//
//void qsort(void* base,//你要排序的数据的起始位置
//		   size_t num,//待排序的数据元素的个数
//	       size_t width,//待排序的数据元素的大小（单位是字节）
//	       int(* cmp)(const void* e1, const void* e2)//函数指针-比较函数
//		  );
//__cdecl - 函数调用约定
//

//比较2个整型元素
//e1指向一个整数
//e2指向另外一个整数
//
//对【void*】的介绍
//int main()
//{
//	int a = 10;
//	//char* pa = &a;//int*
//	void* pv = &a;//void*是无具体类型的指针，可以接受任意类型的地址
//	//void*是无具体类型的指针，所以不能解引用操作，也不能+-整数
//
//	return 0;
//}
//
#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	//if (*(int*)e1 > *(int*)e2)
//	//	return 1;
//	//else if (*(int*)e1 = *(int*)e2)
//	//	return 0;
//	//else
//	//	return -1;
//	return (*(int*)e1 - *(int*)e2);//升序
//	//return (*(int*)e2 - *(int*)e1);//降序
//}
//
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//0 1 2 3 4 5 6 7 8 9
//	//把数组排成升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//#include <string.h>
////int cmp_stu_by_name(const void* e1, const void* e2)
////{
////	//strcmp --> >0 ==0 <0
////	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
////}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	//strcmp --> >0 ==0 <0
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void test2()
//{
//	//测试使用qsort来排序结构数据
//	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//
//}
//
//int main()
//{
//	//test1();
//	test2();
//
//	return 0;
//}

//改造冒泡排序
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设数组是已经排好序
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//cmp的两个参数是待比较的两个元素的地址
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);//升序
//	//return (*(int*)e2 - *(int*)e1);//降序
//}
//
//void test3()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//0 1 2 3 4 5 6 7 8 9
//	//把数组排成升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//strcmp --> >0 ==0 <0
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
////int cmp_stu_by_age(const void* e1, const void* e2)
////{
////	//strcmp --> >0 ==0 <0
////	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
////}
//
//void test4()
//{
//	//测试使用qsort来排序结构数据
//	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int main()
//{
//	//test3();
//	test4();
//
//	return 0;
//}

//9. 指针和数组笔试题解析

//数组名的理解
//指针的运算和指针类型的意义
//
//一维数组
//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//	printf("%d\n", sizeof(a));// 16
//	//sizeof(数组名), 数组名表示整个数组，计算的是整个数组的大小，单位是字节
//	printf("%d\n", sizeof(a + 0));// 4/8
//	//a不是单独放在sizeof内部，也没有取地址，所以a就是首元素的地址，a+0还是首元素的地址，是地址，大小就是4/8个字节
//	printf("%d\n", sizeof(*a));// 4
//	//*a中的a是数组首元素的地址，*a就是对首元素的地址解引用，找到的就是首元素
//	//首元素的大小就是4个字节
//	printf("%d\n", sizeof(a + 1));// 4/8
//	//这里的a是数组首元素的地址
//	//a+1是第二个元素的地址
//	//sizeof(a+1)就是地址的大小
//	printf("%d\n", sizeof(a[1]));// 4
//	//计算的是第二个元素的大小
//	printf("%d\n", sizeof(&a));// 4/8
//	//&a取出的是数组的地址，数组的地址，也就是个地址
//	printf("%d\n", sizeof(*&a));// 16
//	//1.
//	//&a --> int(*)[4]
//	//&a拿到的是数组名的地址，类型是int(*)[4]，是一种数组指针
//	//数组指针解引用找到的是数组
//	//*&a --> a
//	//
//	//2.
//	//*和&抵消了
//	//*&a --> a
//	printf("%d\n", sizeof(&a + 1));// 4/8
//	//&a取出的是数组的地址
//	//&a --> int(*)[4]
//	//&a+1 是从数组a的地址向后跳过了一个（4个整型元素的）数组的大小
//	//&a+1 还是地址，是地址就是4/8字节
//	printf("%d\n", sizeof(&a[0]));// 4/8
//	//&a[0]就是第一个元素的地址
//	//计算的是地址的大小
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8
//	//&a[0]+1是第二个元素的地址
//	//大小是4/8个字节
//	//&a[0]+1 <--> &a[1]
//
//	return 0;
//}

//字符数组
#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));// 6
//	//sizeof(数组名)
//	printf("%d\n", sizeof(arr + 0));// 4/8
//	//arr + 0 是数组首元素的地址
//	printf("%d\n", sizeof(*arr));// 1
//	//*arr就是数组首元素，大小是1字节
//	//*arr --> arr[0]
//	//*(arr+0) --> arr[0]
//	printf("%d\n", sizeof(arr[1]));// 1
//	//数组第二个元素，大小是1字节
//	printf("%d\n", sizeof(&arr));// 4/8
//	//&arr是数组的地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));// 4/8
//	//&arr + 1是数组后的地址
//	printf("%d\n", sizeof(&arr[0] + 1));// 4/8
//	//&arr[0] + 1是第二个元素的地址
//
//	printf("%d\n", strlen(arr));// 随机值
//	printf("%d\n", strlen(arr + 0));// 随机值
//	printf("%d\n", strlen(*arr));// --> strlen('a'); --> strlen(97);//野指针
//	printf("%d\n", strlen(arr[1]));// --> strlen('b'); --> strlen(98);//野指针
//	printf("%d\n", strlen(&arr));// 随机值
//	printf("%d\n", strlen(&arr + 1));// 随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));// 随机值-1
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	//a b c d e f \0
//	//sizeof只关注占用内存空间的大小，不在乎内存中放的是什么
//	//sizeof是操作符
//	printf("%d\n", sizeof(arr));// 7
//	printf("%d\n", sizeof(arr + 0));// 4/8
//	printf("%d\n", sizeof(*arr));// 1
//	printf("%d\n", sizeof(arr[1]));// 1
//	printf("%d\n", sizeof(&arr));// 4/8
//	printf("%d\n", sizeof(&arr + 1));// 4/8
//	printf("%d\n", sizeof(&arr[0] + 1));// 4/8
//
//	//strlen是求字符串长度的，关注的是字符串中的\0，计算的是\0之前出现的字符的个数
//	//strlen是库函数，只针对字符串
//	printf("%d\n", strlen(arr));// 6
//	printf("%d\n", strlen(arr + 0));// 6
//	printf("%d\n", strlen(*arr));// err
//	printf("%d\n", strlen(arr[1]));// err
//	printf("%d\n", strlen(&arr));// 6
//	printf("%d\n", strlen(&arr + 1));// 随机值
//	printf("%d\n", strlen(&arr[0] + 1));// 5
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));// 4/8
//	printf("%d\n", sizeof(p + 1));// 4/8
//	printf("%d\n", sizeof(*p));// 1
//	printf("%d\n", sizeof(p[0]));// 1
//	//p[0] -> *(p+0) -> *p
//	printf("%d\n", sizeof(&p));// 4/8
//	//&p是二级指针，是一级指针p的地址
//	printf("%d\n", sizeof(&p + 1));// 4/8
//	printf("%d\n", sizeof(&p[0] + 1));// 4/8
//
//	printf("%d\n", strlen(p));// 6
//	printf("%d\n", strlen(p + 1));// 5
//	printf("%d\n", strlen(*p));// err
//	printf("%d\n", strlen(p[0]));// err
//	printf("%d\n", strlen(&p));// 随机值
//	printf("%d\n", strlen(&p + 1));// 随机值
//	printf("%d\n", strlen(&p[0] + 1));// 5
//
//	return 0;
//}

//二维数组
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));// 48
//	printf("%d\n", sizeof(a[0][0]));// 4
//	printf("%d\n", sizeof(a[0]));// 16
//	//a[0]是第一行这个一维数组的数组名，单独放在sizeof内部，a[0]表示第一行整个这个一维数组
//	//sizeof(a[0])计算的就是第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));// 4/8
//	//a[0]并没有单独放在sizeof内部，也没取地址，a[0]就表示首元素的地址，
//	//就是第一行这个一维数组的第一个元素的地址，a[0] + 1 就是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));// 4
//	//a[0] + 1 就是第一行第二个元素的地址
//	//*(a[0] + 1)就是第一行第二个元素
//	printf("%d\n", sizeof(a + 1));// 4/8
//	//a虽然是二维数组的地址，但是并没有单独放在sizeof内部，也没取地址
//	//a表示首元素的地址，二维数组的首元素是它的第一行，a就是第一行的地址
//	//a+1就是跳过第一行，表示第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));// 16
//	//*(a + 1)是对第二行地址的解引用，拿到的是第二行
//	//*(a + 1) --> a[1]
//	//sizeof(*(a + 1)) --> sizeof(a[1])
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8
//	//&a[0] - 对第一行的数组名取地址，拿出的是第一行的地址
//	//&a[0]+1 - 得到的是第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));// 16
//	printf("%d\n", sizeof(*a));// 16
//	//a表示首元素的地址，就是第一行的地址
//	//*a就是对第一行地址的解引用，拿到的就是第一行
//	printf("%d\n", sizeof(a[3]));// 16
//	//int a = 10;
//	//sizeof(int);
//	//sizeof(a);
//
//	return 0;
//}
//总结： 数组名的意义：
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//2. & 数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//3. 除此之外所有的数组名都表示首元素的地址。


//10. 指针笔试题

//笔试题1：程序的结果是什么？2 5
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//
//	return 0;
//}

//笔试题2：
//假设p的值为0x100000。如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
//x86
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
//
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014
//	//0x100000+20 --> 0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	//1048576+1 --> 1048577
//	//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	//0x100000+4 --> 0x100004
//
//	return 0;
//}

//笔试题3：
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	//ptr1[-1] <==> *(ptr1+(-1)) <==> *(ptr1-1)
//	int* ptr2 = (int*)((int)a + 1);
//	//a=0x0012ff40
//	//a+1 --> 0x0012ff44
//	//(int)a+1 --> 0x0012ff41
//	printf("%x,%x", ptr1[-1], *ptr2);
//	//1 --> 0x 00 00 00 01
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	//  ptr2
//	//01 [00 00 00 02] 00 00 00 03 00 00 00 04 00 00 00
//	//   *ptr2
//	//*ptr2 = 02 00 00 00 ，即2000000
//
//	return 0;
//}

//笔试题4：
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式 1 3 5
//	int* p;
//	p = a[0];
//	//a[0]是第一行的数组名
//	//a[0]表示首元素的地址，即a[0][0]的地址，&a[0][0]
//	printf("%d", p[0]);//1
//	//p[0] <==> *(p+0) <==> *p
//
//	return 0;
//}

//笔试题5：
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//fffffffc -4
//	//p[4][2] --> *(*(p+4)+2)
//	//-4
//	//10000000000000000000000000000100
//	//11111111111111111111111111111011
//	//11111111111111111111111111111100
//	//0xff ff ff fc
//
//	return 0;
//}

//笔试题6：
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	//*(aa + 1) <==> aa[1]
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5
//	
//	return 0;
//}

//笔试题7：
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//  //char* *pa 、所以pa+1跳过一个char*
//	pa++;
//	printf("%s\n", *pa);//at
//
//	return 0;
//}

//笔试题8：
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);// POINT
	printf("%s\n", *-- * ++cpp + 3);// ER
	printf("%s\n", *cpp[-2] + 3);// ST
	//*cpp[-2] + 3 <==> * *(cpp - 2) + 3
	printf("%s\n", cpp[-1][-1] + 1);// EW
	//cpp[-1][-1] + 1 <==> *(*(cpp - 1) - 1) + 1
	 
	return 0;
}



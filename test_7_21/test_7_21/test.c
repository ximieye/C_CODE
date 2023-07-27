#include <stdio.h>

//指针

//1. 指针是什么？
//指针是什么？
//指针理解的2个要点：
//1' 指针是内存中一个最小单元的编号，也就是地址。(地址也叫指针；指针其实就是地址，地址就是编号；指针就是单元内存的编号)
//2' 平时口语中说的指针，通常指的是指针变量，是用来存放内存地址的变量。
//总结：指针就是地址，口语中说的指针通常指的是指针变量。
//int main()
//{
//	int a = 10;//a是整型变量，占用4个字节的内存空间
//	int* pa = &a;
//
//	//pa是一个指针变量，用来存放地址的
//
//	//pa
//
//	//本质上指针就是地址
//	//口语上说的指针，其实是指针变量，指针变量就是一个变量，指针变量是用来存放地址的一个变量
//
//	//指针变量里面存放的是地址，而通过这个地址，就可以找到一个内存单元
//
//	return 0;
//}
//总结：
//指针变量是用来存放地址的，地址是唯一标示一个内存单元（地址空间）的。
//指针的大小在32位平台是4个字节，在64位平台是8个字节。

//2. 指针和指针类型
//2.1 指针+-整数
//总结：指针的类型决定了指针向前或者向后走一步有多大（距离）
//
//int main()
//{
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//
//	//sizeof 返回的值的
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//	printf("%zu\n", sizeof(pd));
//
//	return 0;
//}

//2.2 指针的解引用
//总结：
//指针的类型决定了，对指针解引用的时候有多大的权限（能操作几个字节）。
//比如：char* 的指针解引用就只能访问一个字节，而 int* 的指针的解引用就能访问四个字节。
//
//指针类型的意义

//0 1 2 3 4 5 6 7 8 9 a b c d e f
//0
//1
//10
//11
//100
//1010
//1111

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	char* pc = (char*)&a;//int*
//	*pc = 0;
//
//	//结论1：
//	//指针类型决定了指针在被解引用的时候访问几个字节
//	//如果是int*的指针，解引用访问4个字节
//	//如果是char*的指针，解引用访问1个字节
//	//推广刀其他类型
//	//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*)&a;
//
//	printf("pa = %p\n", pa);
//	printf("pa + 1 = %p\n", pa + 1);
//	printf("pc=%p\n", pc);
//	printf("pc + 1 = %p\n", pc + 1);
//
//	//结论2：
//	//指针的类型决定了指针+-1操作的时候，跳过几个字节
//	//决定了指针的的步长
//
//	//100 - 10进制
//	//0x64 - 16进制
//	//110 0100 - 2进制
//	//144 - 8进制
//	return 0;
//}

//int main()
//{
//	int a = 0;
//
//	int* pi = &a;//pi 解引用访问4个字节，pi+1也是跳过4个字节
//	float* pf = &a;//pf 解引用访问4个字节，pf+1也是跳过4个字节
//	//int* 和 float* 是不是就可以通用啊？
//	//不能 - 对内存的解读方式是有差异的
//	//*pi = 100;
//	*pf = 100.0;
//
//	return 0;
//}

//int main()
//{
//	//两种方式效果一样
//	int a = 0x11223344;//16进制
//	int b = 287454020;//10进制
//
//	return 0;
//}

//3. 野指针
//概念： 野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//3.1 野指针成因
//1' 指针未初始化
//int main()
//{
//	int* p;
//	//p没有初始化，就意味着没有明确的指向
//	//一个局部变量不初始化的话，放的是随机值：0xcccccccc
//	//
//	*p = 10;//非法访问内存了，这里的p就是野指针
//
//	return 0;
//}

//2' 指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//
//	return 0;
//}

//3' 指针指向的空间释放
//这里放在动态内存开辟的时候讲解，这里可以简单提示一下
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();//p是野指针
//	printf("hehe\n");//覆盖上次一些空间
//	printf("haha\n");//覆盖上次一些空间
//
//	if (p != NULL)
//	{
//		printf("%d\n", *p);
//	}
//
//	return 0;
//}

//3.2 如何规避野指针
//1' 指针初始化
//2' 小心指针越界
//3' 指针指向空间释放，及时置NULL
//4' 避免返回局部变量的地址
//5' 指针使用之前检查有效性
//int main()
//{
//	//int b = 0;
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//NULL -> 0
//
//	//int* p2 = NULL;
//	//*p2 = 100;//err
//
//	//int* p3 = NULL;
//	//if (p3 != NULL)
//	//{
//	//	*p3 = 100;//ok
//	//}
//
//	return 0;
//}

//4. 指针运算
//4.1 指针 +- 整数
#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//指针+-整数；指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//		//*vp = 0
//		//vp++
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组下标的写法
//	//for (i = 0; i < sz; i++)
//	//{
//	//	arr[i] = 1;
//	//}
//
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	*p = 1;
//	//	p++;
//	//}
//
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}

//4.2 指针 - 指针
//指针-指针的绝对值得到的是指针和指针之间元素的个数
//不是所有的指针都能相减
//指向同一块空间的2个指针才能相减
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);	
//	
//	//int arr[10] = { 0 };
//	//char ch[5] = { 0 };
//	//printf("%d\n", &ch[0] - &arr[5]);//err
//
//
//	return 0;
//}

#include <string.h>
//版本一：
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

//版本二(递归)：

//版本三(指针-指针)：
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//
//	return (str - start);
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}

//4.3 指针的关系运算
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//
//
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}
//	//实际在绝大部分的编译器上是可以顺利完成任务的，然而我们还是应该避免这样写，因为标准并不保证它可行。
//
//	//标准规定：
//	//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
//	//但是不允许与指向第一个元素之前的那个内存位置的指针进行比较。
//
//	return 0;
//}

//5. 指针和数组
//数组：一组相同类型元素的集合
//指针变量：是一个变量，存放的是地址
//int main()
//{
//	int arr[10] = { 0 };
//	//arr是首元素的地址
//	//arr[0]
//	int* p = arr;
//	//通过指针来访问数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	//arr - 数组名
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p ------ %p\n ", &arr[i], p + i);
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ------ %d ------ %d\n", arr[i], *(p + 1), *(arr+i));
//	}
//
//	return 0;
//}


//指针形式
//void test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}

//数组形式
//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//arr[i] --> *(arr+i)
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr, 10);
//
//	return 0;
//}

//6. 二级指针
//二级指针变量是用来存放一级指针变量的地址的
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一个指针变量，一级指针变量
//	int** ppa = &pa;//ppa是一个二级指针变量
//	//后一个*说明ppa是指针
//	//前面的int*是说明ppa指向的对象是int*类型
//
//	**ppa = 20;
//	printf("%d\n", a);
//
//	//*pa = 20;
//	//printf("%d\n", a);
//
//
//	return 0;
//}

//7. 指针数组
//存放指针的数组就是指针数组
int main()
{
	//int a = 10;
	//int b = 20;
	//int c = 30;

	//int arr[10];

	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;

	////parr就是存放指针的数组
	////指针数组
	//int* parr[10] = { &a,&b,&c };

	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d ", *(parr[i]));
	//}

	////直接的二维数组
	//int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	////1 2 3 4
	////2 3 4 5
	////3 4 5 6
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}

	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };

	int* parr[3] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);//arr[i] <==> *(arr+i)
		}
		printf("\n");
	}

	return 0;
}


























#include <stdio.h>

//加减乘除取模（算术操作符）
//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 % 2;//取模
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	// / 除号的两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数的除法
//	float a = 7 / 2.0;
//	int b = 7 % 2;//取模
//	//取模操作符的两个操作符只能是整数
//
//	printf("%.2f\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//赋值操作符=、+=、-=、....
//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//
//	a = a + 3;//a=23
//	a += 3;
//
//	a = a - 3;
//	a -= 3;
//
//	return 0;
//}


//双目操作符 - a+b
//单目操作符 - 只有一个操作数的操作符
//C语言中
//0表示假
//非0表示真
//

//int main()
//{
	//int flag = 2;
	//if (!flag)
	//{
	//	printf("hehe\n");
	//}

	//int a = -10;
	//int b = -a;
	//printf("%d\n", b);


	//sizeof是单目操作符

	//int a = 10;
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof a);//4
	//printf("%d\n", sizeof int );//不支持

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小，单位是字节
	//printf("%d\n", sizeof(arr[0]));//
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10 - 数组的元素个数

	//int a = 10;
	//int b = a++;//后置++，先使用，后++
	////int b =a ; a=a+1;

	//int b = ++a;//前置++，先++，后使用
	////a=a+1;b=a;

	//int b = a--;
	////b=a,a=a-1

	//int b = --a;
	////a=a-1,b=a

	//printf("%d\n", b);// 10 11 10 9
	//printf("%d\n", a);// 11 11 9 9

	//int a = (int)3.14;//(类型) - 强制类型转换
	//int a = int(3.14);//err
	//printf("%d\n", a);
	//3.14 字面浮点数，编译器默认理解为double类型

//	return 0;
//}


//关系操作符
// >  >=  <  <=
// == - 用于测试"相等"
// != - 用于测试"不相等"

//int main()
//{
//	int a = 10;
//	if (a == 3)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//逻辑操作符
//&& 逻辑与 - 并且
//|| 逻辑或 - 或者

//int main()
//{
	//&&
	//int a = 0;
	//int b = 20;
	//if (a && b)
	//{
	//	printf("hehe\n");
	//}

	//||
	//int a = 0;
	//int b = 20;
	//if (a || b)
	//{
	//	printf("hehe\n");
	//}

	//return 0;
//}


//条件操作符(三目操作符) - 有三个操作数
//exp1?exp2:exp3
//真   √    ×
//假   ×    √

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int r = (a > b ? a : b);
//	printf("%d\n", r);
//	return 0;
//}


//逗号表达式（逗号隔开的一串表达式）- 从左向右依次计算,整个表达式的结果是最后一个表达式的结果
//exp1,exp2,exp3, ...expN

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//       c=8        a=28       5
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);
//
//	return 0;
//}


//下标引用、函数调用和结构成员
//[]       ()       . ->

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n] = 20;//[]就是下标引用操作符 arr和3就是[]的操作数
//
//	return 0;
//}

//()
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int sum = Add(2, 3);//函数调用操作符，A打打，2,3都是()的操作数
//	printf("%d\n", sum);
//	return 0;
//}


//常见关键字
//auto - 所有局部变量都是auto类型，auto可以省略
int main()
{
	int a = 10;//自动变量

	return 0;
}

//break - 跳出循环(for循环 while循环 do while循环)

//case default - switch(分支语句)

//char short int long float double - 内置类型

//const - 用于修饰变量，常属性

//continue - 用于循环

//do - do while循环

//else - if else语句(分支语句）

//enum  struct  union          sigend    unsigned   自定义
//枚举  结构体   联合体(共用体)   有符号的   无符号的  

//extern - 声明外部符号的

//for - for循环

//goto - 实现跳转，很像分支语句

//register - 寄存器

//return - 函数返回值

//sizeof - 计算大小

//static - 静态的 可以用来修饰函数的变量

//typedef - 类型重命名

//void - 无(函数的返回类型，函数的参数)

//volatile

//while - while循环

//变量的命名：
//1、有意义 int age ; float salary
//2、名字必须是字母、数字、下划线组成，不能有特殊字符，同时不能以数字开头。
//int 2b;//err
//int _2b;//ok
//3、变量名不能是关键字

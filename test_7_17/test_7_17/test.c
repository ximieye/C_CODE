﻿#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//操作符详解

//1. 操作符分类：
//算术操作符   移位操作符   位操作符   赋值操作符   单目操作符
//关系操作符   逻辑操作符   条件操作符   逗号表达式   下标引用、函数调用和结构成员

//2. 算术操作符
//+  -  *  /  %
//1' 除了 % 操作符之外，其他的几个操作符可以作用于整数和浮点数。
//2' 对于 / 操作符如果两个操作数都为整数，执行整数除法。而只要有浮点数执行的就是浮点数除法。
//3' % 操作符的两个操作数必须为整数。返回的是整除之后的余数。

//int main()
//{
//	int a = 7 % 2;//  7/2...1
//	int b = 7 / 2;
//	printf("%d\n", a);//a
//	printf("%d\n", b);//b
//
//	return 0;
//}
//% 取模操作符的两端必须是整数

//3. 移位操作符
// << - 左移操作符
// >> - 右移操作符
//注：移位操作符的操作数只能是整数。

//16进制
//0~9 a~f
//10进制
//0~9
//2进制
//0 1
//8进制
//0~7

//整数的二进制表示有3种
//原码
//反码
//补码

//正整数的原码、反码、补码相同
//负整数的原码、反码、补码是要计算的
//7
//00000000000000000000000000000111 - 原码
//00000000000000000000000000000111 - 反码
//00000000000000000000000000000111 - 补码
//

//-7
//10000000000000000000000000000111 - 原码
//11111111111111111111111111111000 - 反码（原码的符号位不变，其他位按位取反就是反码）
//11111111111111111111111111111001 - 补码（反码+1就是补码）
//

//整数在内存中存储的是补码

//int main()
//{
//	int a = 7;
//	int x = -7;
//	//左移操作符 - 左边丢弃，右边补0
//	//左移有乘2的效果
//	//移动的是二进制位
//	int b = a << 1;
//	int y = x << 1;
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	printf("x=%d\n", x);
//	printf("y=%d\n", y);
//
//	return 0;
//}

//int main()
//{
//	int a = 7;
//	int x = -7;
//	//右移操作符
//	//算术移位 - 右边丢弃，左边补原符号位
//	//逻辑移位 - 右边丢弃，左边补0
//	//VS编译器采用的是算术右移
//	int c = a >> 1;
//	int z = x >> 1;
//	//int d = a >> -2;//警告⚠:对于移位运算符，不要移动负数位，这个是标准未定义的。
//
//	printf("a=%d\n", a);
//	printf("c=%d\n", c);
//	printf("x=%d\n", x);
//	printf("z=%d\n", z);
//
//	return 0;
//}

//4. 位操作符
//& - 按(2进制)位与
//| - 按(2进制)位或
//^ - 按(2进制)位异或 - 相同为0，相异为1
//注：他们的操作数必须是整数。

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	//00000000000000000000000000000011 - 3的补码
//	//11111111111111111111111111111011 - -5的补码
//	//
//	//00000000000000000000000000000011 - 按位与
//	//10000000000000000000000000000101 - 按位或
//	//10000000000000000000000000001000 - 按位异或
//
//	//%d 意味着打印一个有符号的整数
//	printf("c=%d\n", c);
//	printf("d=%d\n", d);
//	printf("e=%d\n", e);
//
//	return 0;
//}

//不能创建临时变量（第三个变量），实现两个数的交换。
//方法一：a,b过大，a+b可能会溢出，从理论上是有问题的
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//方法二：只适用于整数
//a^a = 0
//0^a = a

//3^3^5 = 5
//3^5^3 = 5
//异或操作符支持交换律

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a ^ b;//a=3^5
//	b = a ^ b;//b=3^5^5 --> b=3
//	a = a ^ b;//a=3^5^3 --> a=5
//
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//编写代码实现：求一个整数存储在内存中的二进制中1的个数。
//求补码的二进制中1的个数
//方法一：(错误的) - 2的n次方的数都测不了
//int main()
//{
//	int num = 10;//00000000000000000000000000001010
//	int count = 0;//计数
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//方法二：（利用1的补码进行计算1的个数）
//int main()
//{
//	int num = -1;//11111111111111111111111111111111
//	int i = 0;
//	int count = 0;//计数
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//			count++;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//方法三：(最优但难想)
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//5. 赋值操作符
//赋值操作符是一个很棒的操作符，他可以让你得到一个你之前不满意的值。也就是你可以给自己重新赋值。
//=
//int main()
//{
//	int a = 3;//初始化
//	a = 30;//赋值
//
//	int x = 0;
//	int y = 20;
//	a = x = y + 1;//连续赋值 - 不建议，可读性很差
//
//	return 0;
//}

//复合赋值符：
//+=  -=  *=  /=  %=	
//>>=  <<=  &=  |=  ^=
//int main()
//{
//	int a = 3;
//	a += 5;//a = a + 5;
//	a >>= 1;//a = a >> 1;
//
//	return 0;
//}

//6. 单目操作符
//6.1 单目操作符介绍
//!           逻辑反操作
//-           负值
//+           正值
//&           取地址
//sizeof      操作数的类型长度（以字节为单位）
//~           对一个数的二进制按位取反
//--          前置、后置--
//++          前置、后置++
//*           间接访问操作符(解引用操作符)
//（类型）     强制类型转换

//!
//int main()
//{
//	int flag = 3;
//	//flag为真，进入if
//	if (flag)
//	{}
//
//	//flag为假，进入if
//	if (!flag)
//	{}
//
//	return 0;
//}
//
//C语言中0表示假，非0表示真

//+ -
//int main()
//{
//	int a = -10;
//	int b = +a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//&
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int p = &a;//p就是指针变量
//
//	return 0;
//}

//sizeof
//int main()
//{
//	int arr[5] = { 0 };
//	printf("%d\n", sizeof(arr));
//	int a = 10;
//	int n = sizeof(a);//计算的是a所占内存的大小，单位是字节
//	//sizeof是一个操作符
//	//计算的是变量所在内存空间的大小，单位是字节
//	//计算类型所创建的变量占据空间的大小，单位是字节
//	printf("n=%d\n", n);
//
//	printf("%d\n", sizeof(a));//ok
//	printf("%d\n", sizeof(int));//ok
//	printf("%d\n", sizeof a);//ok
//
//	//sizeof是操作符，不是函数
//	//strlen是库函数，是用来求字符串长度的
//
//	//printf("%d\n", sizeof int);//err
//
//	return 0;
//}

//例：问：
//(1)、(2)两个地方分别输出多少？ 40 8
//(3)、(4)两个地方分别输出多少？ 10 8
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//~
//int main()
//{
//	//int a = 0;
//	////~是按二进制位取反
//	////00000000000000000000000000000000 - 补码
//	////11111111111111111111111111111111 -> ~a
//	////10000000000000000000000000000001 -> -1
//	//printf("%d\n", ~a);
//
//	int a = 13;
//	a |= (1 << 4);//13 -> 29
//	printf("%d\n", a);//a = 29
//	a &= (~(1 << 4));//29 -> 13
//	printf("%d\n", a);//a = 13
//
//	//13 -> 29
//	//00000000000000000000000000001101 - 13
//	//00000000000000000000000000000001 - 1
//	//00000000000000000000000000010000 - (1<<4)
//	//00000000000000000000000000011101 - 29
//
//	//29 -> 13
//	//00000000000000000000000000011101 - 29
//	//00000000000000000000000000000001 - 1
//	//11111111111111111111111111101111 - ~(1<<4)
//	//00000000000000000000000000001101 - 13
//
//	return 0;
//}

//++ --
//int main()
//{
//	int a = 3;
//	int x = 3;
//
//	int b = ++a;//前置++，先++，后使用
//	int y = x++;//后置++，先使用，后++
//
//	printf("%d\n", a);//a = 4
//	printf("%d\n", b);//b = 4
//
//	printf("%d\n", x);//x = 4
//	printf("%d\n", y);//y = 3
//
//	return 0;
//}

//*
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//
//	return 0;
//}

//（类型）
//int main()
//{
//	//time_t;//long long
//	srand((unsigned int)time(NULL));
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	return 0;
//}

//7. 关系操作符
//>
//>=
//<
//<=
//!=   用于测试“不相等”
//==   用于测试“相等”
//警告：在编程的过程中 == 和 = 不小心写错，导致的错误。
//int main()
//{
//	if (3 == 5)
//	{
//
//	}
//	
//	//err
//	if ("abc" == "abcdef")//这样写是在比较2个字符串的首字符的地址
//	{
//
//	}
//	//两个字符串比较相等应该使用strcmp
//
//	return 0;
//}

//8. 逻辑操作符
//&& 逻辑与 - 左边为假，右边就不计算了
//|| 逻辑或 - 左边为真，右边就不计算了
//区分逻辑与和按位与
//区分逻辑或和按位或
//1 & 2----->0
//1 && 2---- > 1
//1 | 2----->3
//1 || 2---- > 1

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;//c = 1
//	printf("%d\n", c);
//	if (a && b)
//	{
//
//	}
//	return 0;
//}

//1. 能被4整除，并且不能被100整除
//2. 能被400整除是闰年
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//
//	return 0;
//}

//程序输出的结果是什么？
//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    i = a++ && ++b && d++;//从左往右，遇到一个0，就为假，后面不用计算
//    //i = a++||++b||d++;//从左往右，遇到一个1，就为真，后面不用计算
//    printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//
//    return 0;
//}

//9. 条件操作符（三目操作符）
//exp1 ? exp2 : exp3
//真      √      ×
//假      ×      √
//int main()
//{
//	int a = 3;
//	int b = 0;
//
//	//三目操作符
//	int max = (a > b ? a : b);
//
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//
//	(a > 5) ? (b = 3) : (b = -3);
//
//	b = (a > 5 ? 3 : -3);
//
//	return 0;
//}

//10. 逗号表达式
//逗号表达式，就是用逗号隔开的多个表达式。
//逗号表达式，从左向右依次执行。整个表达式的结果是最后一个表达式的结果。
//exp1, exp2, exp3, ...expN
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);//c = 13
//
//	return 0;
//}

//int main()
//{
//	//方法一：
//	int a = get_val();
//	count_val(a);
//	while (a > 0)
//	{
//		//业务处理
//		a = get_val();
//		count_val(a);
//	}
//
//	//方法二：
//	//逗号表达式
//	while (a = get_val(), count_val(a), a > 0)
//	{
//		//业务处理
//	}
//
//	return 0;
//}

//11. 下标引用、函数调用和结构成员
//1.[] 下标引用操作符
//操作数：一个数组名 + 一个索引值
//int main()
//{
//	int arr[10] = { 0 };
//	//arr[7] --> *(arr+7) --> *(7+arr) --> 7[arr]
//	//arr是数组首元素的地址
//	//arr+7就是跳过7个元素，指向了第8个元素
//	//*(arr+7)就是第8个元素
//
//	arr[7] = 8;
//	7[arr] = 9;
//	//[]的操作数是arr和7
//
//	return 0;
//}

//2. () 函数调用操作符
//接受一个或者多个操作数：第一个操作数是函数名，剩余的操作数就是传递给函数的参数

//函数定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int c = Add(a, b);//()就是函数调用操作符，Add，a，b
//	//
//	//sizeof a;
//
//	return 0;
//}

//3. 访问一个结构的成员
// .     结构体.成员名
// ->    结构体指针->成员名
#include <string.h>

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//void set_stu(struct Stu* ps)
//{
//	//strcpy((*ps).name, "zhangsan");
//	//(*ps).age = 20;
//	//(*ps).score = 100.0;
//
//	//结构体指针->成员
//	strcpy(ps->name, "zhangsan");
//	ps->age = 20;
//	ps->score = 100.0;
//
//	//(*ps).name 等价于 ps->name
//}
//
//void print_stu(struct Stu ss)
//{
//	//结构体对象.成员
//	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//	return 0;
//}

//12. 表达式求值
//表达式求值的顺序一部分是由操作符的优先级和结合性决定。
//同样，有些表达式的操作数在求值的过程中可能需要转换为其他类型。
//int main()
//{
//	int a = 2 + 6 / 3;
//	int b = 2 + 3 + 4;
//
//	return 0;
//}

//12.1 隐式类型转换
//C的整型算术运算总是至少以缺省整型类型的精度来进行的。
//为了获得这个精度，表达式中的字符和短整型操作数在使用之前被转换为普通整型，这种转换称为整型提升。
//int main()
//{
//	//负数的整形提升
//	char c = -1;//-1是整数，32个比特位
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111 -> -1的补码
//	//11111111 - c
//	//11111111111111111111111111111111 - 高位补充符号位，即为1
//
//	//正数的整形提升
//	char d = 1;//1是整数，32个比特位
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	//00000001 - d
//	//00000000000000000000000000000001 - 高位补充符号位，即为0
//
//	//无符号整形提升，高位补0
//
//	return 0;
//}

//int 4byte - 32bit
//char 1byte - 8bit

//int main()
//{
//	char a = 5;
//	//00000000000000000000000000000101
//	//00000101 - a
//	char b = 126;
//	//00000000000000000000000001111110
//	//01111110 - b
//
//	char c = a + b;
//	//000000000000000000000000 00000101 - a //本身就是补码
//	//000000000000000000000000 01111110 - b //本身就是补码
//	//a和b补码相加，得： 
//	//000000000000000000000000 10000011
//	//10000011 - c
//	//111111111111111111111111 10000011 - 补码
//	//100000000000000000000000 01111101 - 原码
//	//c = -125
//	
//	printf("%d\n", c);
//
//	return 0;
//}

//整形提升的例子:
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//
//	return 0;
//}

//12.2 算术转换
//如果某个操作符的各个操作数属于不同的类型，那么除非其中一个操作数的转换为另一个操作数的类型，
//否则操作就无法进行。下面的层次体系称为寻常算术转换。
//
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int
//向上转换
//如果某个操作数的类型在上面这个列表中排名较低，那么首先要转换为另外一个操作数的类型后执行运算。

//12.3 操作符的属性
//复杂表达式的求值有三个影响的因素。
//1. 操作符的优先级
//2. 操作符的结合性
//3. 是否控制求值顺序。
//两个相邻的操作符先执行哪个？取决于他们的优先级。如果两者的优先级相同，取决于他们的结合性。

//一些问题表达式
//表达式的求值部分由操作符的优先级决定。
//表达式1      a * b + c * d + e * f
//没办法确定它的唯一的计算路径
//注释：代码1在计算的时候，由于* 比 + 的优先级高，只能保证， * 的计算是比 + 早，
//但是优先级并不能决定第三个 * 比第一个 + 早执行。

//表达式2      c + --c;
//注释：同上，操作符的优先级只能决定自减--的运算在 + 的运算的前面，但是我们并没有办法得知，
// + 操作符的左操作数的获取在右操作数之前还是之后求值，所以结果是不可预测的，是有歧义的。

//代码3-非法表达式
//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);
//
//	return 0;
//}
//表达式3在不同编译器中测试结果：非法表达式程序的结果都不相同

//代码4
//int fun()
//{
//    static int count = 1;
//
//    return ++count;
//}
//int main()
//{
//    int answer;
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer);//输出多少？
//
//    return 0;
//}
//有问题！
//虽然在大多数的编译器上求得结果都是相同的。
//但是上述代码 answer = fun() - fun() * fun(); 中我们只能通过操作符的优先级得知：先算乘法，再算减法。
//函数的调用先后顺序无法通过操作符的优先级确定。

//代码5
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	printf("%d\n", i);

	return 0;
}
//这段代码中的第一个 + 在执行的时候，第三个++是否执行，这个是不确定的，
//因为依靠操作符的优先级和结合性是无法决定第一个 + 和第三个前置 ++ 的先后顺序。

//总结：我们写出的表达式如果不能通过操作符的属性确定唯一的计算路径，那这个表达式就是存在问题的。





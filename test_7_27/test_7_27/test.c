#include <stdio.h>

//结构体

//1. 结构体的声明
//1.1 结构的基础知识
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。
//1.2 结构的声明

//人
//声明的结构体类型struct Peo

//建议少用下面这种方法创建结构体变量
//struct Peo
//{
//	//成员变量
//	char name[20];
//	char tele[12];
//	char sex[5];//女 男 保密
//	int high;
//}p1,p2;//p1和p2是两个全局的结构体变量


//struct Peo
//{
//	//成员变量
//	char name[20];
//	char tele[12];
//	char sex[5];//女 男 保密
//	int high;
//};
//
//int main()
//{
//	struct Peo p1 = { 0 };//结构体变量的创建
//
//	return 0;
//}

//1.3 结构成员的类型
//结构的成员可以是标量、数组、指针，甚至是其他结构体。
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];//女 男 保密
//	int high;
//};
//
//struct St//依赖内部的结构体
//{
//	struct Peo p;
//	int num;
//	float f;
//};

//1.4 结构体变量的定义和初始化
//2. 结构体成员的访问
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];//女 男 保密
	int high;
}p3,p4;//全局结构体变量

struct Peo p5, p6;//全局结构体变量

struct St
{
	struct Peo p;
	int num;
	float f;
};

//结构体指针访问指向变量的成员
//有时候我们得到的不是一个结构体变量，而是指向一个结构体的指针。
void print2(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//结构体指针->成员变量
}

//结构体变量访问成员
//结构变量的成员是通过点操作符（.）访问的，点操作符接受两个操作数。
void print1(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//结构体变量.成员变量
}

int main()
{
	//结构体变量的创建与初始化
	struct Peo p1 = { "张三","14652762497","男",177 };//局部结构体变量
	struct St s = { {"李四","14652762498","女",166},100,3.14f };
	
	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);

	print2(&p1);//传地址
	print1(p1);//传结构体

	return 0;
}

//3. 结构体传参
//上面的 print1 和 print2 函数哪个好些？
//答案是：首选print2函数。
//原因：
//函数传参的时候，参数是需要压栈的。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
//结论：
//结构体传参的时候，要传结构体的地址。





















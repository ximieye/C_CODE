#define _CRT_SECURE_NO_WARNINGS

//typedef - 类型定义，类型重命名
//typedef unsigned int uint;
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	struct Node n;
//	Node n2;
//	return 0;
//}


//static - 静态
//1.修饰局部变量-称为静态局部变量
//2.修饰全局变量-称为静态全局变量
//3.修饰函数-称为静态函数

#include <stdio.h>

//修饰局部变量
//void test()
//{
//	static int a = 1;//static修饰局部变量的时候，局部变量出了作用域，不销毁的。
//	//本质上，static修饰局部变量的时候，改变了变量的存储位置的。
//	//static影响了变量的生命周期，生命周期变长，和程序的生命周期一样。
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}



//void test()//void不需要返回
//{
//	//执行任务
//	printf("hello world\n");
//}



//修饰全局变量

//声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


//修饰函数
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//
//	return 0;
//}


//register - 寄存器
//电脑上的存储设备：寄存器(集成到CPU上)、高速缓存(cache)、内存、硬盘
//       空间小、造价高，访问速度快<-----------------空间大、造价低，访问速度慢
//CPU - 中央处理器

//
//int main()
//{
//	//寄存器变量
//	register int num = 3;//建议：3存放在寄存器中
//
//	return 0;
//}
//


////define定义标识符常量
//#define NUM 100
//
//
////define定义宏
////宏是有参数
////     宏名 宏的参数(参数是无类型的)
//#define ADD(x,y) ((x)+(y))
////                宏体
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//printf("%d\n", NUM);
//	//int n = NUM;
//	//printf("%d\n", n);
//	//int arr[NUM] = { 0 };
//
//	int a = 10;
//	int b = 20;
//	int c= ADD(a, b);  //int c = ((a)+(b)); 宏是完成替换
//	printf("%d\n", c);
//
//	return 0;
//}


//
//指针
//内存会划分为一个个内存单元(一个内存单元的大小：1byte)  每个内存单元都有一个编号
//内存单元 编号->地址->地址也被称为指针
//存放指针（地址）的变量就是指针变量

//int main()
//{
//	int a = 10;//向内存申请4个字节，存储10
//	//&a;//取地址操作符
//	//printf("%p\n", &a);//000000B6C6CFFA74
//	int* p = &a;//*说明p是指针变量，int说明p指向的对象是int类型的
//	//p就是指针变量
//	*p = 20;//解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象
//
//	printf("%d\n", a);
//
//
//	//char ch = 'w';
//	//char* pc = &ch;
//
//	return 0;
//}


//指针变量的大小
//int main()
//{
//	//int* p;
//	//char* p2;
//	//不管是什么类型的指针，都是在创建指针变量
//	//指针变量是用来存放地址的
//	//指针变量的大小取决于一个地址存放的时候需要多大空间
//	//32位机器上的地址：32bit位 - 4byte，所以指针变量的大小是4个字节
//	//32位机器上的地址：64bit位 - 8byte，所以指针变量的大小是8个字节
//
//	printf("%zu\n", sizeof(char*));//8
//	printf("%zu\n", sizeof(short*));//8
//	printf("%zu\n", sizeof(int*));//8
//	printf("%zu\n", sizeof(float*));//8
//	printf("%zu\n", sizeof(double*));//8
//
//	return 0;
//}

//*的写法
//int main()
//{
//	char* pc;
//	int* p;
//
//	int* p1, p2, p3;//意思是只定义p1的指针，另外定义了p2，p3是整型
//	int *p1, *p2, *p3;//这样才是p1,p2,p3被全部定义指针
//	return 0;
//}


//结构体
//对于复杂对象，C语言就给了自定义类型的能力，自定义类型中有一种叫：结构体
//struct
//结构体是把一些单一类型组合在一起的做法

//学生
struct Stu
{
	//成员变量
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//->
	//结构体指针变量->成员名
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);//ps指向s的那个成员
}

int main()
{
	struct Stu s = { "zhangsan", 20, "nan", "11258967845" };

	//结构体对象.成员名
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}





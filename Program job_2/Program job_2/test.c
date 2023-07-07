#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//题目
//描述：给定两个整数a和b(0<a，b<10000)，计算a除以b的整数商和余数。
//输入描述：一行，包括两个整数a和b，依次为被除数和除数（不为零），中间用空格隔开。
//输出描述：一行，包括两个整数，依次为整数商和余数，中间用一个空格隔开。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//
//	//计算
//	int m = a / b;
//	int n = a % b;
//
//	//输出
//	printf("%d %d\n", m, n);
//
//	return 0;
//}

//描述：转换以下ASCII码为对应字符并输出他们
//73,32,99,97,110,32,100,111,32,105,116,33
//输入描述：无
//输出描述：一行输出转换题目中给出的所有ASCII码对应的字符，无需以空格隔开

//'a';//97
////打出的都是字符a
//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 97);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//
//	//sizeof(arr) - 计算的是数组的总大小，单位是字节
//	//sizeof(arr[0]) - 计算的是数组元素的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}

//描述：输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
//数据范围：年份满足1990<=y<=2015，月份满足1<=m<=12，日满足1<=d<=30
//输入描述：输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符。
//输出描述：三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要1位数前面补0.
//int main()
//{
//	//输入数据
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//
//	//输出
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);//%02d - 2意思是打印两位，0意思是不够两位左边拿0补足
//	printf("date=%02d\n", date);
//
//	return 0;
//}

//描述：依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩（注：输出成绩时需进行四舍五入且保留2位小数）。
//数据范围：学号满足1<=n<=20000000，各科成绩使用百分制，且不可能出现负数。
//输入描述：学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。
//输出描述：学号，3科成绩，输出格式详见输出样例。
//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	//输入
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	//输出
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);//%.2f - 小数点后面保留两位
//
//	return 0;
//}

//描述：小明写了一个输出"Hello world!"的程序，老师告诉他printf函数有返回值，你能帮他写个程序输出printf("Hello world!")的返回值吗？
//输入描述：无
//输出描述：包括两行：第一行为"Hello world!"  第二行为printf("Hello world!")调用后的返回值
//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n);
//
//	return 0;
//}

//例
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;//static修饰b,b是上一次的值
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//	return 0;
//}

//描述：BoBo老师教了KiKi学习程序设计基础，他知道C++是带类的C语言，这个“++"主要包含三部分内容：对C语言进行语法上的扩展、面向对象(封装、继承和多态)，STL(即模板)。
//这学期KIKi学习了C和C++，学好他们，其他编程语言都可以很轻松掌握。C和C++的输入有区别，请帮KiKi输出C和C++输出Hello world的代码。
//输入描述：无
//输出描述：
//printf("Hello world\n");
//cout<<"Hello world!"<<endl;
//int main()
//{
//	printf("printf(\"Hello world\\n\");\n");
//	printf("cout<<\"Hello world!\"<<endl;\n");
//
//	return 0;
//}

//描述：小乐乐获得4个最大数，请帮他编程找到最大的数。
//输入描述：一行，4个整数，用空格分开。
//输出描述：一行，一个整数，为输入的4个整数中最大的整数。
//第一种写法：
//int main()
//{
//	int arr[4] = { 0 };
//	//0 1 2 3
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	//找最大值
//	//假设第一个元素就是最大值
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//第二种写法：
//int main()
//{	
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	//假设第一个元素就是最大值
//	scanf("%d", &max);
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//			max = n;
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//描述：给定一个球体的半径，计算其体积。其中球体体积公式为V=4/3*π(r的3次方)，其中π=3.1415926。
//数据范围：输入一个浮点值0<=n<=15
//输入描述：一行，用浮点数表示的球体半径。
//输出描述：一行，球体的体积，小数点后保留三位。
//int main()
//{
//	double r = 0.0;
//	double v = 0.0;
//
//	scanf("%lf", &r);
//	v = 4 / 3.0 * 3.1415926 * r * r * r;
//
//	printf("%.3lf\n", v);
//
//	return 0;
//}

//书写风格
//int main()
//{
//	int a = 0;
//	float d = 0.0;
//	float f = 0.0f;
//	//0.0默认是double类型
//	//0.0f就是float类型
//	a++;
//	printf("%d\n", a);
//
//	return 0;
//}

//描述：问题：计算BMI指数《身体质量指数）。BMI指数（即身体质最指数，简称体质指数又称休重，英文为Body Mass Index，简称BMI) 
//是用休重公斤数除以身高米数平方得出的数字，是目前国际上常用的衡量人体胖应程度以及是否健康的一个标准。
//主要用于统计用途，当我们需要比较及分析一个人的体里对于不同高度的人所带来的健康影响时，BMI值是一个中立而可靠的指标。
//数据范围：输入的数据满足50＜=n<=180
//输入描述：一行，两个整数，分别表示体重（公斤），身高（厘米），中间用一个空格分隔。
//输出描述：一行，BM指数（保留两位小数）。
int main()
{
	int weight = 0;
	int high = 0;
	scanf("%d %d", &weight, &high);

	//计算
	float bmi = weight / (high / 100.0) / (high / 100.0);
	//输出
	printf("%.2f\n", bmi);

	return 0;
}
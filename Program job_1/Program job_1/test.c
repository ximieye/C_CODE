#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	printf("     **\n");
	printf("     **\n");
	printf("************\n");
	printf("************\n");
	printf("    *  *    \n");
	printf("    *  *    \n");

	return 0;
}
*/

//输出图形
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//
//	return 0;
//}


//输出学生信息
//int main()
//{
//	printf("Name	Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//
//	return 0;
//}


//发布信息
//int main()
//{
//	printf("I lost my cellphone!\n");
//
//	return 0;
//}


//计算
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int r = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", r);
//
//	return 0;
//}


//
//0 - 数字0
//'0' - 字符0 - ASCII值是48
//'\0' - 字符 - ASCII值是0
//EOF - end of file 文件的结束标志 值是-1
//


//如果数组初始化，可以不指定数组的大小
//int main()
//{
//	int arr1[10];//10个元素
//	int arr2[] = { 1,2,3 };//3个元素
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char arr[7] = { 'b','i','t' };
//	//不完全初始化，剩余的部分默认初始化为0
//	//
//	//[b i t][    ?    ]
//	printf("%d\n", strlen(arr));//随机值
//
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	int arr[n] = { 0 };//err  []里应为常量
//	//C99标准之前，数组的大小都是用常量或者常量表达式来指定
//	int arr2[10];//ok
//	int arr3[4 + 6] = { 1,2,3,4 };//ok
//
//	//C99标准之后，支持了变长数组，这个时候允许数组的大小是变量，但是这种指定方式的数组是不能初始化的。
//	int m = 100;
//	int arr4[m];//所用编译器支持即可
//	int arr4[m] = { 0 };//编译器都不支持
//
//	return 0;
//}

//VS对C99中的一些语法支持不是很好，不支持变长数组的


//比较2个数大小
//int Max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//求2个整数的较大值
//	int r = Max(a, b);
//	printf("%d\n", r);
//
//	return 0;
//}


int main()
{
	//输入
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	//计算
	if (x > 0)
		y = -1;
	else if (x == 0)
		y = 0;
	else
		y = 1;
	//输出
	printf("%d\n", y);

	return 0;
}










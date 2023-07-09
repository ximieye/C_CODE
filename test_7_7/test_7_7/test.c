#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//while循环，初始化、判断、调整三块比较分散，修改的时候容易出现问题
//int main()
//{
//	int i = 1;//初始化
//
//
//
//
//	while (i <= 10)//判断
//	{
//
//
//
//
//		printf("%d ", i);
//		i++;//调整
//	}
//
//	return 0;
//}
 

//循环语句
//for循环(三种循环中使用最多的)
//for(表达式1;表达式2;表达式3)
//表达式1为初始化部分，用于初始化循环变量的；
//表达式2为条件判断部分，用于判断循环时候终止；
//表达式3为调整部分，用于循环条件的调整。
//1.不可在for循环体内修改循环变量，防止for循环失去控制
//2.建议for语句的循环控制变量的取值采用"前闭后开区间"写法

//打印1~10
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
	//for循环判断部分省略意味着判断会恒成立
	//for (;;)
	//{
	//	printf("hehe\n");
	//}

	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("hehe\n");
	//}

	//int i = 0;
	//int j = 0;
	////初始化部分不要随便省略
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("hehe\n");

	//	}
	//}

//	//C99语法才支持这种写法
//	//C++中支持这种写法
//	for (int i = 0; i < 10; i++)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//多个变量控制循环也是可以的
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//请问这个循环要循环多少次
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//判断条件是k=0赋值，表达式为假，不循环
//		k++;
//
//	return 0;
//}


//do while循环 - 至少循环一次
//int main()
//{
//	int i = 1;
//
//	do
//	{
//		i++;
//		if (i == 5)
//			//break;
//			continue;
//
//		printf("%d ", i);
//	}
//	while (i <= 10);
//
//	return 0;
//}

//练习:
//1. 计算 n的阶乘。
//1*2*3...*n
//

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}


//2. 计算 1!+ 2!+ 3!
//方法一：

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3!
//	//1+2+6=9
//	for (n = 1; n <= 3; n++)
//	{	
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//方法二：
//1
//1*2
//1*2*3
//1*2*3*4

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//3. 在一个有序数组中查找具体的某个数字n。（讲解二分查找）
//遍历查找

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//在一个有序数组中查找具体的某个数字n
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//鞋
//不超过300,你猜
//1,2,3,4，.... err
//1-150 225....
//折半查找 二分查找

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//在一个有序数组中查找具体的某个数字n
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left<=right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;//不会超过范围
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}


//4. 编写代码，演示多个字符从两端移动，向中间汇聚。
//welcomne to hgd!!!!
//##################
//w################!
//we##############!!
//wel############!!!
//....
//welcome to hgd!!!!

//char buf[] = "abc";
//[a b c \0]
//4
#include <windows.h>
#include <stdlib.h>

//int main()
//{
//	char arr1[] = "welcome to hgd!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;//int right = sizeof(arr1)/sizeof(arr1[0])-2;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];//可以把++和--放到数组里面
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//清空屏幕
//		system("cls");//system是一个库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//5. 编写代码实现，模拟用户登录情景，并且只能登录三次。
//(只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序)
//比较2个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
//如果返回值是0，表示2个字符串相等
#include <string.h>

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//char ypassword[] = { "abcdef" };这样写也可以，然后下面strcmp里面比较两个数组
//	//假设密码是字符串：abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//
//	return 0;
//}


//电脑产生一个随机数(1~100)
//猜数字
//猜大了
//猜小了
//直到猜对了，结束

#include <stdlib.h>
#include <time.h>

//void menu()
//{
//	printf("**********************\n");
//	printf("******  1.play  ******\n");
//	printf("******  0.exit  ******\n");
//	printf("**********************\n");
//
//}
//
////0~RAND_MAX(32767)
//void game()
//{
//	int guess = 0;
//	//1.生产随机数
//	//0~99 --> 1~100
//	int ret = rand()%100+1;//生成随机数的函数
//	//printf("%d\n", ret);
//	
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}		
//	}	
//}
//
////指针
////int *p = NULL;
////int a = 0;
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字的整个逻辑
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择!\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



//goto语句 - 尽量少使用
//不能跨函数跳转
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}

//关机程序
//1.电脑运行起来后，1分钟内关机
//2.如果输入：等一下，就取消关机
//
//bat
//

//方法一：
#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//system帮我们执行系统命令
//again:
//	printf("请注意，你的电脑将在60秒内关机，如果输入：等一下，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input,"等一下") == 0)//2个字符串比较，应该用strcmp
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//方法二：
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//system帮我们执行系统命令

	while (1)
	{
		printf("请注意，你的电脑将在60秒内关机，如果输入：等一下，就取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "等一下") == 0)//2个字符串比较，应该用strcmp
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}



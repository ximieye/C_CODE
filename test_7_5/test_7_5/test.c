#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//分支语句（选择语句）
//if语句  0表示假，非0表示真
//int main()
//{
//	//int a = 10;
//	//if (a == 3)
//	//	printf("hehe\n");
//
//	//int age = 20;
//	//if (age > 18)
//	//	printf("成年\n");
//
//	//int age = 20;
//
//	//if (age < 18)
//	//{
//	//	printf("未成年\n");
//	//	printf("不能饮酒\n");
//	//}
//	//else
//	//{
//	//	printf("成年\n");
//	//}
//
//	int age = 10;
//	scanf("%d", &age);
//
//	if (age < 18)
//	{
//		printf("青少年\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 28 && age < 40)
//	{
//		printf("壮年\n");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 60 && age <= 100)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老寿星\n");
//	}
//
//	return 0;
//}


//if和else后面默认控制一条语句，执行多条语句必须加上{}，一对{}就是一个代码块
//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{   
//		printf("成年\n");
//		printf("打游戏\n");
//	}
//		
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}	
//	else
//		printf("haha\n");
//
//	return 0;
//}

//代码风格
//1.变量的命名（有意义，规范）
//2.空格，空行，换行

//int main()
//{
//	//char firstname[20] = { 0 };
//	//char firstname[20] = { 0 };
//	//char FirstName[20] = { 0 };
//
//	//int a = 10;//加空格
//
//	return 0;
//}

//int test()
//{
//	int a = 4;
//
//	if (a == 3)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	//if (5 == num)//与 if (num == 5) 一样
//	//	printf("hehe\n");
//
//	if (num = 5)
//	{
//
//	}
//
//	return 0;
//}


//两道练习题目
//int main()
//{
//	//判断一个数是否为奇数
//	int num = 0;
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("No\n");
//
//	return 0;
//}

//输出1-100之间的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//			printf("%d ", i);
//		i+=2;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	//if (1 == day)
//	//{
//	//	printf("星期一\n");
//	//}
//	//else if (2 == day)
//	//{
//	//	printf("星期二\n");
//	//}
//	//else if (3 == day)
//	//{
//	//	printf("星期三\n");
//	//}
//	//else ....
//
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//
//	//1.输入1-5，输出的是"weekday"
//	//2.输入6-7，输出"weekend"
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//
//	}
//
//	return 0;
//}

//练习
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}


//循环语句
//while循环
//break是用于永久的终止循环
//continue跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断

//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//打印1~10数字
//break - 1~4
//continue - 1~4死循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			//break;//终止整个循环
//			continue;//跳过本次循环i=5这次循环后面的代码，直接去判断要不要进行进行下一次循环
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}
//
////continue - 2~11,跳过5
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;//跳过本次循环i=5这次循环后面的代码，直接去判断要不要进行进行下一次循环
//
//		printf("%d ", i);
//		
//	}
//
//	return 0;
//}

//int main()
//{
//	//int ch = getchar();//获取一个字符
//	//printf("%c\n", ch);//方法1
//	//putchar(ch);//方法2 //打印ch
//
//	/*
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//    */
//
//	//举一个例子
//	//假设密码是一个字符串
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//数组名，本来就是一个地址
//
//	//getchar();//读取了\n
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}


int main()
{
    char ch = '\0';
    while ((ch = getchar()) != EOF)
    {
        if (ch < '0' || ch > '9')
            continue;
        putchar(ch);
    }
    //只打印数字字符

    return 0;
}







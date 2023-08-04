#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//实用调试技巧练习(其实与调试没什么关系)

//题一：
//题目名称：调整奇数偶数顺序
//题目内容：调整数组使奇数全部都位于偶数前面
//题目：输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left < right)
//	{
//		//从左向右找一个偶数，停下来
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从右向左找一个奇数，停下来
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		//交换奇数和偶数
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	//输入
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//scanf("%d", &arr[i]);
//		scanf("%d", arr + i);
//	}
//	//1 2 3 4 5 6 7 8 9 10
//	//调整
//	move_odd_even(arr, sz);
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//题二：
//描述：输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//数据范围：1 <= n,m <= 1000，序列中的值满足 0 <= val <= 30000
//输入描述：输入包含三行，
//第一行包含两个正整数n，m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//第二行包含n个整数，用空格分隔。
//第三行包含m个整数，用空格分隔。
//输出描述：输出为一行，输出长度为 n+m 的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。

//方法一：边排列边打印
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	//int arr1[n];//c99 - 变长数组
//	//int arr2[m];
//	int arr1[1000];
//	int arr2[1000];
//	//输入n个整数
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	//输入m个整数
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//合并打印
//	int j = 0;
//	int k = 0;
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			printf("%d ", arr1[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr2[k]);
//			k++;
//		}
//	}
//	if (j < n)
//	{
//		for (; j < n; j++)
//		{
//			printf("%d", arr1[j]);
//		}
//	}
//	else
//	{
//		for (; k < m; k++)
//		{
//			printf("%d", arr2[k]);
//		}
//
//	}
//
//	return 0;
//}

//方法二：创建第三个数组，边排列边放入第三个数组中，最后一起打印
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	//int arr1[n];//c99 - 变长数组
//	//int arr2[m];
//	//int arr3[n+m];
//	int arr1[1000];
//	int arr2[1000];
//	int arr3[2000];
//	//输入n个整数
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	//输入m个整数
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//合并打印
//	int j = 0;
//	int k = 0;
//	int r = 0;
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			arr3[r] = arr1[j];
//			r++;
//			j++;
//		}
//		else
//		{
//			arr3[r] = arr2[k];
//			r++;
//			k++;
//		}
//	}
//	if (j < n)
//	{
//		for (; j < n; j++)
//		{
//			arr3[r] = arr1[j];
//			r++;
//		}
//	}
//	else
//	{
//		for (; k < m; k++)
//		{
//			arr3[r] = arr2[k];
//			r++;
//		}
//	}
//	//打印
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//
//	return 0;
//}

//题三：
//描述：小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
//输入描述：输入包含一个整数n(0<=n<=10^9)
//输出描述：输出一个整数，即小乐乐修改后得到的数字。
//示例1：输入：22222	输出：0
//示例2：输入：123	输出：101
//#include <math.h>
//int main()
//{
//	int input = 0;
//	int sum = 0;
//	//输入
//	scanf("%d", &input);
//	int i = 0;
//	while (input)
//	{
//		int bit = input % 10;
//		if (bit % 2 == 1)
//		{
//			bit = 1;
//		}
//		else
//		{
//			bit = 0;
//		}
//		sum += bit * pow(10, i);
//		i++;
//		input /= 10;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//题四：
//描述：KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用"*"组成的带空格直角三角形图案。
//输入描述：多组输入，一个整数(2~20)，表示直角三角形直角边的长度，即"*"的数量，也表示输出行数。
//输出描述：针对每行输入，输出用"*"组成的对应长度的直角三角形，每个"*"后面有一个空格。
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i + j < n - 1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//题五：
//描述：KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，如果今天是“双11”(11月11日)则这件衣服打7折，
//“双12”(12月12日)则这件衣服打8折，如果有优惠券可以额外减50元(优惠券只能在双11或双12使用)，求KiKi最终所花的钱数。
//数据范围：衣服价格满足1 <= val <= 100000
//输入描述：
//一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份、当天的日期、
//第四个整数表示是否有优惠券(有优惠券用1表示，无优惠券用0表示)。 注：输入日期保证只有“双11”和“双12”。
//输出描述：
//一行，小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）
int main()
{
	//输入
	double price = 0.0;
	int m = 0;
	int d = 0;
	int flag = 0;
	scanf("%lf %d %d %d", &price, &m, &d, &flag);
	//计算
	if (m == 11 && d == 11)
	{
		price = price * 0.7 - flag * 50;
	}
	else if (m == 12 && d == 12)
	{
		price = price * 0.8 - flag * 50;
	}
	//输出
	if (price < 0.0)
	{
		printf("%.2lf\n", 0);
	}
	else
		printf("%.2lf\n", price);

	return 0;
}





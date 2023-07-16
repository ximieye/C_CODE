#include <stdio.h>


//数组练习

//题一：下面代码的结果是什么
//int main()
//{
//	//逗号表达式 - 最后一个表达式的结果
//	int arr[] = { 1,2,(3,4),5 };//1 2 4 5
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int arr[10] = { 0 };//int[10]是arr数组的类型
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//
//	return 0;
//}

//题二：下面代码的结果是什么
//sizeof - 是一个操作符，
//是用来计算变量(类型)所占内存空间的大小，不关注内存中存放的具体内容，单位是字节
//
//strlen - 是一个库函数，
//是专门求字符串长度的，只能针对字符串，从参数给定的地址向后一直找\0，统计\0之前出现的字符的个数
//int main()
//{
//	char str[] = "hello hgd";
//	//[h e l l o _ h g d]
//	printf("%d %d", sizeof(str), strlen(str));
//	//10 9
//	return 0;
//}

//题三：将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}

//题四：创建一个整形数组，完成对数组的操作
//实现函数init()初始化数组为全0
//实现print()打印数组的每个元素
//实现reverse()函数完成数组元素的逆置。
void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left++;
		right--;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);//1 2 3 4 5 6 7 8 9 0
	reverse(arr, sz);
	print(arr, sz);//0 9 8 7 6 5 4 3 2 1
	init(arr, sz);
	print(arr, sz);//0 0 0 0 0 0 0 0 0 0

	return 0;
}





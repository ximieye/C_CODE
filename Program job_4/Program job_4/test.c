#include <stdio.h>


//������ϰ

//��һ���������Ľ����ʲô
//int main()
//{
//	//���ű��ʽ - ���һ�����ʽ�Ľ��
//	int arr[] = { 1,2,(3,4),5 };//1 2 4 5
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int arr[10] = { 0 };//int[10]��arr���������
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//
//	return 0;
//}

//������������Ľ����ʲô
//sizeof - ��һ����������
//�������������(����)��ռ�ڴ�ռ�Ĵ�С������ע�ڴ��д�ŵľ������ݣ���λ���ֽ�
//
//strlen - ��һ���⺯����
//��ר�����ַ������ȵģ�ֻ������ַ������Ӳ��������ĵ�ַ���һֱ��\0��ͳ��\0֮ǰ���ֵ��ַ��ĸ���
//int main()
//{
//	char str[] = "hello hgd";
//	//[h e l l o _ h g d]
//	printf("%d %d", sizeof(str), strlen(str));
//	//10 9
//	return 0;
//}

//������������A�е����ݺ�����B�е����ݽ��н�����������һ����
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

//���ģ�����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init()��ʼ������Ϊȫ0
//ʵ��print()��ӡ�����ÿ��Ԫ��
//ʵ��reverse()�����������Ԫ�ص����á�
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





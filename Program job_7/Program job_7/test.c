#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//ָ�뼰�ṹ����ϰ

//��һ���������Ľ���Ƕ���  0 0 3 4 5

//�������ڴ��д�ŵ�ʱ����һ��˳�������
//��С���ֽ���

//0x 00 00 00 01
//0x 00 00 00 02
//0x 00 00 00 03
//0x 00 00 00 04
//0x 00 00 00 05

//arr
//01 00 00 00 |02 00 00 00 |03 00 00 00 |04 00 00 00 |05 00 00 00
//��                                                            ��

//int main()
//{
//	int arr[] = { 1,2,3,4,5 }; 
//	short* p = (short*)arr;//arrǰ��ǿ��ת��Ϊshort*������1,2,3,4,5���ڶ�ֻռ2���ֽ���
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//������������Ľ���Ƕ���  6 12

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}

//�������������Ľ���Ƕ��� 11223300

//�κ�һ������/���ʽ������2������
//ֵ����  ��������

//int a = 3;
//a + 4.5 ->
//ֵ���ԣ�7.5
//�������ԣ�double
//&a ->
//ֵ���ԣ�3
//�������ԣ�int*

//int main()
//{
//	int a = 0x11223344;
//	//44 33 22 11 - ���Ŵ��
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);//%x��ʮ��������ʽ��ӡ
//
//	return 0;
//}

//���ģ�
//��Ŀ���ƣ�ʹ��ָ���ӡ��������
//��Ŀ���ݣ�дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣

//void print(int* parr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(parr + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}

//���壺
//��Ŀ���ƣ��ַ�������
//��Ŀ���ݣ�дһ����������������һ���ַ��������ݡ�

//int main()
//{
//	char arr[10001] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);
//	//����
//	int left = 0;
//	int right = strlen(arr) - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}

//������
//��Ŀ���ƣ��������
//��Ŀ���ݣ���Sn = a+aa+aaa+aaaa+aaaaa+...��ǰn��֮�ͣ�����a��һ�����֡�

//2
//2*10+2=22
//22*10+2=222
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);//2 5
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//���ߣ�
//��Ŀ���ƣ���ӡˮ�ɻ���
//��Ŀ���ݣ����0~100000֮�������"ˮ�ɻ���"�������
//"ˮ�ɻ���"��ָһ��nλ�������λ���ֵ�n�η�֮�����õ��ڸ��������磺153=1^3+5^3+3^3����153��һ��"ˮ�ɻ���"��

#include <math.h>

//����һ��
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ"ˮ�ɻ���"
//		//12345
//		//1.����i�Ǽ�λ�� - n
//		int n = 1;//�κ�һ����������һλ��
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2.�õ�iÿһλ����������n�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//��������д�ɺ���
//int is_narcissistic_number(int i)
//{
//	//�ж�i�Ƿ�Ϊ"ˮ�ɻ���"
//	//12345
//	//1.����i�Ǽ�λ�� - n
//	int n = 1;//�κ�һ����������һλ��
//	int tmp = i;
//	int sum = 0;
//	while (tmp / 10)
//	{
//		n++;
//		tmp /= 10;
//	}
//	//2.�õ�iÿһλ����������n�η�֮��
//	tmp = i;
//	while (tmp)
//	{
//		sum += pow(tmp % 10, n);
//		tmp /= 10;
//	}
//
//	return sum == i;
//	/*if (sum == i)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}*/
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		if (is_narcissistic_number(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//��ˣ�
//��Ŀ���ƣ���ӡ����
//��Ŀ���ݣ���C��������Ļ��������Ρ�

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j <= i ; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//��ţ��������Ľ���Ƕ��� wang

//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18} };
//	fun(students + 1);
//
//	return 0;
//}

//��ʮ��
//��Ŀ���ƣ�����ˮ����
//��Ŀ���ݣ�����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�

//����һ��
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//
//	//�û�
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	
//	return 0;
//}

//���������ҵ�����
int main()
{
	int money = 0;
	scanf("%d", &money);
	if (money > 0)
		printf("%d\n", 2 * money - 1);
	else
		printf("%d\n", 0);

	return 0;
}





#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//ָ��Ľ���

//1. �ַ�ָ��
//��ָ�������������֪����һ��ָ������Ϊ�ַ�ָ�� char*;
//int main()
//{
//	//char ch = 'w';
//	//char* pc = &ch;
//	//*pc = 'b';
//	//printf("%c\n", ch);
//
//	const char* p = "abcdef";//���ַ������ַ�a�ĵ�ַ����ֵ����p
//	//char arr[] = "abcdef";
//	//*p = 'w';//err
//	printf("%s\n", p);
//
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//		printf("p1==p2\n");
//	else
//		printf("p1!=p2\n");
//
//	if (arr1 == arr2)
//		printf("arr1==arr2\n");
//	else
//		printf("arr1!=arr2\n");
//
//	return 0;
//}
//����p1��p2ָ�����һ��ͬһ�������ַ�����
//C / C++��ѳ����ַ����洢��������һ���ڴ����򣬵�����ָ��ָ��ͬһ���ַ�����ʱ������ʵ�ʻ�ָ��ͬһ���ڴ档
//��������ͬ�ĳ����ַ���ȥ��ʼ����ͬ�������ʱ��ͻῪ�ٳ���ͬ���ڴ�顣
//����arr1��arr2��ͬ��p1��p2��ͬ��

//2. ָ������
//�ڡ�ָ�롷�½�����Ҳѧ��ָ�����飬ָ��������һ�����ָ������顣
//
//int arr[10];//��������
//char ch[5];//�ַ�����
// 
//���������ٸ�ϰһ�£�����ָ��������ʲô��˼��
//int* arr1[10]; //����ָ�������
//char* arr2[4]; //һ���ַ�ָ�������
//char** arr3[5];//�����ַ�ָ�������

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//
//	//0 1 2
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//*(p+i) --> p[i]
//
//			//printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//3. ����ָ��
//3.1 ����ָ��Ķ���
//����ָ�룺 int* pint; �ܹ�ָ���������ݵ�ָ�롣
//������ָ�룺 float* pf; �ܹ�ָ�򸡵������ݵ�ָ�롣
//������ָ��Ӧ���ǣ��ܹ�ָ�������ָ�롣

//int *p[10]; - ָ������
//int(*p)[10]; - ����ָ��	p2����ָ��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����int����
//���ͣ�p�Ⱥ�*��ϣ�˵��p��һ��ָ�������Ȼ��ָ��ָ�����һ����СΪ10�����͵����顣����p��һ��ָ�룬ָ��һ�����飬������ָ�롣
//����Ҫע�⣺[]�����ȼ�Ҫ����*�ŵģ����Ա�����ϣ�������֤p�Ⱥ�*��ϡ�

//3.2 &������VS������

//�ٴ�����������
//int main()
//{
//	char* arr[5] = { 0 };
//	char* (*pc)[5] = &arr;
//
//	//����ָ���������ģ�
//	//char ch = 'w';
//	//char* p1 = &ch;
//	//char** p2 = &p1;
//
//	//int arr[10] = { 0 };
//	//int* p = arr;
//		
//	//int(*p2)[10] = &arr;
//  ////p2��������int(*)[10];
//  ////int* p2 = &arr;//�о���
//	////int(*)[10] p2;//err
//
//	//����ָ��������������͵ĵ�ַ
//	//�ַ�ָ������������ַ��ĵ�ַ
//	//����ָ���������������ĵ�ַ
//	 
//	//printf("%p\n", arr);
//	//printf("%p\n", arr + 1);
//
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", &arr[0] + 1);
//
//	//printf("%p\n", &arr);
//	//printf("%p\n", &arr + 1);
//
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//
//	return 0;
//}
//������ͨ����ʾ�Ķ���������Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2. &���������������������ʾ����Ȼ���������飬����&������ȡ��������������ĵ�ַ

//3.3 ����ָ���ʹ��
//��Ȼ����ָ��ָ��������飬������ָ���д�ŵ�Ӧ��������ĵ�ַ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//����������д��
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	//����������ָ����鷳�����������õģ�������ĳ����÷�
//	int (*p)[10] = &arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i));//p��ָ������ģ�*p��ʵ���൱��������������������������Ԫ�صĵ�ַ
//		//����*p��������������Ԫ�صĵ�ַ
//	}
//
//	return 0;
//}

//����ָ��ĳ����÷���
//��������ʽ��ʾ
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////������ָ����ʽ��ʾ
//void print2(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			//printf("%d ", p[i][j]);//*(p+i) <=> p[i]
//		}
//		printf("%\n");
//	}
//}
////int (*p)[5];
////p�������ǣ�int(*)[5];
////p��ָ��һ����������ģ�����5��Ԫ��int [5]
////p+1 -> ����һ��5��intԪ�ص�����
//
////int arr[10];
////int (*p)[10] = &arr;		p��������int (*)[10]
////&arr+1 -> ����40���ֽ�
////int* p2 = arr;	 p��������int*
////arr+1 -> ����һ������(4���ֽ�)
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//	return 0;
//}

//int arr[5];           arr����������
//int* parr1[10];       parr1������ָ������
//int(*parr2)[10];      parr2������ָ��
//int(*parr3[10])[5];   parr3�Ǵ������ָ�������

//4. ���������ָ�����
//4.1 һά���鴫��
//void test(int arr[])//ok?	��
//{}
//void test(int arr[10])//ok?   ��
//{}
//void test(int* arr)//ok?   ��
//{}
//void test2(int* arr[20])//ok?	��
//{}
//void test2(int** arr)//ok?   ��
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}

//4.2 ��ά���鴫��
//void test(int arr[3][5])//ok��   ��
//{}
//void test(int arr[][])//ok��   ��		�βεĶ�ά���飬�п���ʡ�ԣ��в���ʡ��
//{}
//void test(int arr[][5])//ok��   ��
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int* arr)//ok��   ��	��ά���������������ʾ��Ԫ�صĵ�ַ����ʵ�ǵ�һ�еĵ�ַ����һ����һ��һά���顣
//{}
//void test(int* arr[5])//ok��   ��
//{}
//void test(int(*arr)[5])//ok��   ��
//{}
//void test(int** arr)//ok��   ��
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}

//4.3 һ��ָ�봫��
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//
//	return 0;
//}

//����Ǻ����Ĳ���������ָ��
//void print(int* p)
//{}
//
//int a = 10;
//int* ptr = &a;
//int arr[10];
//
//print(&a);
//print(ptr);
//print(arr);

//4.4 ����ָ�봫��
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//
//	return 0;
//}

//�����������ʽ�����Ƕ���ָ�룬���ú�����ʱ����Դ�ʲôʵ���أ�
//test(int** p)
//{}
//
//int* p1;
//int** p2;
//int* arr[10];//ָ������
//
//test(&p1);
//test(p2);
//test(arr);

//5. ����ָ��
//ָ������ָ���������ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//	//*pa = 20;
//	//printf("%d\n", *pa);
//
//	int arr[5] = { 0 };
//	//&������ - ȡ����������ĵ�ַ
//	int(*p)[5] = &arr;//����ָ��
//
//	//&������ - ȡ���ľ��Ǻ����ĵ�ַ
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	//���ں�����˵��&�������ͺ��������Ǻ����ĵ�ַ
//
//	//int (*pf)(int, int) = &Add;
//	int (*pf)(int, int) = Add;//Addǰ���&���Բ�д
//	//int ret = (*pf)(2, 3);
//	//int ret = Add(2, 3);
//	int ret = pf(2, 3);//pfǰ���*���Բ�д
//	printf("%d\n", ret);
//
//	return 0;
//}

//���ú���ָ�룺
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void calc(int(*pf)(int, int))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	calc(Add);
//
//	return 0;
//}

//�Ķ�������Ȥ�Ĵ��룺
//����1
//int main()
//{
//	(*(void (*)())0)();
//	//void(*p)();	p�Ǻ���ָ��
//	//void(*)();	����ָ������
//	//���ϴ�����һ�κ������ã����õ���0��Ϊ��ַ���ĺ�����
//	//1. ��0ǿ������ת��Ϊ���޲Σ�����������void�ĺ����ĵ�ַ��
//	//2. ����0��ַ�������������
//
//	return 0;
//}

//����2
////typedef unsigned int unit;
//typedef void(* pf_t)(int);//��void(*)(int)����������Ϊpf_t
//
//int main()
//{
//	void (*signal(int, void(*)(int)))(int);
//	//signal�Ǻ����������ϴ�����һ�κ���������
//	//������signal�����ĵ�һ��������������int���ڶ��������������Ǻ���ָ�룬�ú���ָ��ָ��ĺ���������int������������void��
//	//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ���������int������������void��
//
//	pf_t signal(int, pf_t);
//
//	return 0;
//}

//����ָ�����;��

//дһ��������
//�ӷ����������˷�������
void menu()
{
	printf("***************************\n");
	printf("****  1. add   2. sub  ****\n");
	printf("****  3. mul   4. div  ****\n");
	printf("****  0. exit          ****\n");
	printf("***************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("������2��������:>");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
			break;
		case 0:
			printf("�˳�������\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}



































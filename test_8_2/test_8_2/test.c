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
//void menu()
//{
//	printf("***************************\n");
//	printf("****  1. add   2. sub  ****\n");
//	printf("****  3. mul   4. div  ****\n");
//	printf("****  0. exit          ****\n");
//	printf("***************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������2��������:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//6. ����ָ������
//������һ�������ͬ�������ݵĴ洢�ռ䣬�������Ѿ�ѧϰ��ָ�����飬 ���磺
//int *arr[10];	- �����ÿ��Ԫ����int*
//��Ҫ�Ѻ����ĵ�ַ�浽һ�������У����������ͽк���ָ�����飬�Ǻ���ָ���������ζ����أ�
//int (*parr1[10])(); - �����ÿ��Ԫ����int (*)()

//�Ѻ����ĵ�ַ���ں���ָ��������
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//int (*pf)(int, int) = Add;//pf�Ǻ���ָ��
//	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };//arr���Ǻ���ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}

//����ָ���������;��ת�Ʊ�
//����:����������
//�ӷ����������˷���������...
//void menu()
//{
//	printf("***************************\n");
//	printf("****  1. add   2. sub  ****\n");
//	printf("****  3. mul   4. div  ****\n");
//	printf("****  0. exit          ****\n");
//	printf("***************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//����ָ�������
//	//ת�Ʊ�
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//
//	return 0;
//}

//7. ָ����ָ�������ָ��
//ָ����ָ�������ָ����һ����ָ�롿��ָ��ָ��һ�������顿�������Ԫ�ض��ǡ�����ָ�롿��
//int main()
//{
//	//����ָ������
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//
//	//ָ�򡾺���ָ�����顿��ָ��
//	int(*(*ppfArr)[5])(int, int) = &pfArr;
//
//	return 0;
//}

//8. �ص�����
//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ��������
//�����ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã�
//�������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼�������������Ӧ��

//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//�����������Ѿ��ź���
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}

//
//qsort - ����������������������͵�����
//
//void qsort(void* base,//��Ҫ��������ݵ���ʼλ��
//		   size_t num,//�����������Ԫ�صĸ���
//	       size_t width,//�����������Ԫ�صĴ�С����λ���ֽڣ�
//	       int(* cmp)(const void* e1, const void* e2)//����ָ��-�ȽϺ���
//		  );
//__cdecl - ��������Լ��
//

//�Ƚ�2������Ԫ��
//e1ָ��һ������
//e2ָ������һ������
//
//�ԡ�void*���Ľ���
//int main()
//{
//	int a = 10;
//	//char* pa = &a;//int*
//	void* pv = &a;//void*���޾������͵�ָ�룬���Խ����������͵ĵ�ַ
//	//void*���޾������͵�ָ�룬���Բ��ܽ����ò�����Ҳ����+-����
//
//	return 0;
//}
//
#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	//if (*(int*)e1 > *(int*)e2)
//	//	return 1;
//	//else if (*(int*)e1 = *(int*)e2)
//	//	return 0;
//	//else
//	//	return -1;
//	return (*(int*)e1 - *(int*)e2);//����
//	//return (*(int*)e2 - *(int*)e1);//����
//}
//
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//0 1 2 3 4 5 6 7 8 9
//	//�������ų�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//#include <string.h>
////int cmp_stu_by_name(const void* e1, const void* e2)
////{
////	//strcmp --> >0 ==0 <0
////	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
////}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	//strcmp --> >0 ==0 <0
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void test2()
//{
//	//����ʹ��qsort������ṹ����
//	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//
//}
//
//int main()
//{
//	//test1();
//	test2();
//
//	return 0;
//}

//����ð������
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//�����������Ѿ��ź���
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//cmp�����������Ǵ��Ƚϵ�����Ԫ�صĵ�ַ
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);//����
//	//return (*(int*)e2 - *(int*)e1);//����
//}
//
//void test3()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//0 1 2 3 4 5 6 7 8 9
//	//�������ų�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//strcmp --> >0 ==0 <0
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
////int cmp_stu_by_age(const void* e1, const void* e2)
////{
////	//strcmp --> >0 ==0 <0
////	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
////}
//
//void test4()
//{
//	//����ʹ��qsort������ṹ����
//	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int main()
//{
//	//test3();
//	test4();
//
//	return 0;
//}

//9. ָ���������������

//�����������
//ָ��������ָ�����͵�����
//
//һά����
//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//	printf("%d\n", sizeof(a));// 16
//	//sizeof(������), ��������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(a + 0));// 4/8
//	//a���ǵ�������sizeof�ڲ���Ҳû��ȡ��ַ������a������Ԫ�صĵ�ַ��a+0������Ԫ�صĵ�ַ���ǵ�ַ����С����4/8���ֽ�
//	printf("%d\n", sizeof(*a));// 4
//	//*a�е�a��������Ԫ�صĵ�ַ��*a���Ƕ���Ԫ�صĵ�ַ�����ã��ҵ��ľ�����Ԫ��
//	//��Ԫ�صĴ�С����4���ֽ�
//	printf("%d\n", sizeof(a + 1));// 4/8
//	//�����a��������Ԫ�صĵ�ַ
//	//a+1�ǵڶ���Ԫ�صĵ�ַ
//	//sizeof(a+1)���ǵ�ַ�Ĵ�С
//	printf("%d\n", sizeof(a[1]));// 4
//	//������ǵڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a));// 4/8
//	//&aȡ����������ĵ�ַ������ĵ�ַ��Ҳ���Ǹ���ַ
//	printf("%d\n", sizeof(*&a));// 16
//	//1.
//	//&a --> int(*)[4]
//	//&a�õ������������ĵ�ַ��������int(*)[4]����һ������ָ��
//	//����ָ��������ҵ���������
//	//*&a --> a
//	//
//	//2.
//	//*��&������
//	//*&a --> a
//	printf("%d\n", sizeof(&a + 1));// 4/8
//	//&aȡ����������ĵ�ַ
//	//&a --> int(*)[4]
//	//&a+1 �Ǵ�����a�ĵ�ַ���������һ����4������Ԫ�صģ�����Ĵ�С
//	//&a+1 ���ǵ�ַ���ǵ�ַ����4/8�ֽ�
//	printf("%d\n", sizeof(&a[0]));// 4/8
//	//&a[0]���ǵ�һ��Ԫ�صĵ�ַ
//	//������ǵ�ַ�Ĵ�С
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8
//	//&a[0]+1�ǵڶ���Ԫ�صĵ�ַ
//	//��С��4/8���ֽ�
//	//&a[0]+1 <--> &a[1]
//
//	return 0;
//}

//�ַ�����
#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));// 6
//	//sizeof(������)
//	printf("%d\n", sizeof(arr + 0));// 4/8
//	//arr + 0 ��������Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));// 1
//	//*arr����������Ԫ�أ���С��1�ֽ�
//	//*arr --> arr[0]
//	//*(arr+0) --> arr[0]
//	printf("%d\n", sizeof(arr[1]));// 1
//	//����ڶ���Ԫ�أ���С��1�ֽ�
//	printf("%d\n", sizeof(&arr));// 4/8
//	//&arr������ĵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));// 4/8
//	//&arr + 1�������ĵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));// 4/8
//	//&arr[0] + 1�ǵڶ���Ԫ�صĵ�ַ
//
//	printf("%d\n", strlen(arr));// ���ֵ
//	printf("%d\n", strlen(arr + 0));// ���ֵ
//	printf("%d\n", strlen(*arr));// --> strlen('a'); --> strlen(97);//Ұָ��
//	printf("%d\n", strlen(arr[1]));// --> strlen('b'); --> strlen(98);//Ұָ��
//	printf("%d\n", strlen(&arr));// ���ֵ
//	printf("%d\n", strlen(&arr + 1));// ���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));// ���ֵ-1
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	//a b c d e f \0
//	//sizeofֻ��עռ���ڴ�ռ�Ĵ�С�����ں��ڴ��зŵ���ʲô
//	//sizeof�ǲ�����
//	printf("%d\n", sizeof(arr));// 7
//	printf("%d\n", sizeof(arr + 0));// 4/8
//	printf("%d\n", sizeof(*arr));// 1
//	printf("%d\n", sizeof(arr[1]));// 1
//	printf("%d\n", sizeof(&arr));// 4/8
//	printf("%d\n", sizeof(&arr + 1));// 4/8
//	printf("%d\n", sizeof(&arr[0] + 1));// 4/8
//
//	//strlen�����ַ������ȵģ���ע�����ַ����е�\0���������\0֮ǰ���ֵ��ַ��ĸ���
//	//strlen�ǿ⺯����ֻ����ַ���
//	printf("%d\n", strlen(arr));// 6
//	printf("%d\n", strlen(arr + 0));// 6
//	printf("%d\n", strlen(*arr));// err
//	printf("%d\n", strlen(arr[1]));// err
//	printf("%d\n", strlen(&arr));// 6
//	printf("%d\n", strlen(&arr + 1));// ���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));// 5
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));// 4/8
//	printf("%d\n", sizeof(p + 1));// 4/8
//	printf("%d\n", sizeof(*p));// 1
//	printf("%d\n", sizeof(p[0]));// 1
//	//p[0] -> *(p+0) -> *p
//	printf("%d\n", sizeof(&p));// 4/8
//	//&p�Ƕ���ָ�룬��һ��ָ��p�ĵ�ַ
//	printf("%d\n", sizeof(&p + 1));// 4/8
//	printf("%d\n", sizeof(&p[0] + 1));// 4/8
//
//	printf("%d\n", strlen(p));// 6
//	printf("%d\n", strlen(p + 1));// 5
//	printf("%d\n", strlen(*p));// err
//	printf("%d\n", strlen(p[0]));// err
//	printf("%d\n", strlen(&p));// ���ֵ
//	printf("%d\n", strlen(&p + 1));// ���ֵ
//	printf("%d\n", strlen(&p[0] + 1));// 5
//
//	return 0;
//}

//��ά����
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));// 48
//	printf("%d\n", sizeof(a[0][0]));// 4
//	printf("%d\n", sizeof(a[0]));// 16
//	//a[0]�ǵ�һ�����һά���������������������sizeof�ڲ���a[0]��ʾ��һ���������һά����
//	//sizeof(a[0])����ľ��ǵ�һ�еĴ�С
//	printf("%d\n", sizeof(a[0] + 1));// 4/8
//	//a[0]��û�е�������sizeof�ڲ���Ҳûȡ��ַ��a[0]�ͱ�ʾ��Ԫ�صĵ�ַ��
//	//���ǵ�һ�����һά����ĵ�һ��Ԫ�صĵ�ַ��a[0] + 1 ���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));// 4
//	//a[0] + 1 ���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	//*(a[0] + 1)���ǵ�һ�еڶ���Ԫ��
//	printf("%d\n", sizeof(a + 1));// 4/8
//	//a��Ȼ�Ƕ�ά����ĵ�ַ�����ǲ�û�е�������sizeof�ڲ���Ҳûȡ��ַ
//	//a��ʾ��Ԫ�صĵ�ַ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ�еĵ�ַ
//	//a+1����������һ�У���ʾ�ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));// 16
//	//*(a + 1)�ǶԵڶ��е�ַ�Ľ����ã��õ����ǵڶ���
//	//*(a + 1) --> a[1]
//	//sizeof(*(a + 1)) --> sizeof(a[1])
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8
//	//&a[0] - �Ե�һ�е�������ȡ��ַ���ó����ǵ�һ�еĵ�ַ
//	//&a[0]+1 - �õ����ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));// 16
//	printf("%d\n", sizeof(*a));// 16
//	//a��ʾ��Ԫ�صĵ�ַ�����ǵ�һ�еĵ�ַ
//	//*a���ǶԵ�һ�е�ַ�Ľ����ã��õ��ľ��ǵ�һ��
//	printf("%d\n", sizeof(a[3]));// 16
//	//int a = 10;
//	//sizeof(int);
//	//sizeof(a);
//
//	return 0;
//}
//�ܽ᣺ �����������壺
//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
//2. & ���������������������ʾ�������飬ȡ��������������ĵ�ַ��
//3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��


//10. ָ�������

//������1������Ľ����ʲô��2 5
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//
//	return 0;
//}

//������2��
//����p��ֵΪ0x100000�����±���ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
//x86
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
//
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014
//	//0x100000+20 --> 0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	//1048576+1 --> 1048577
//	//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	//0x100000+4 --> 0x100004
//
//	return 0;
//}

//������3��
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	//ptr1[-1] <==> *(ptr1+(-1)) <==> *(ptr1-1)
//	int* ptr2 = (int*)((int)a + 1);
//	//a=0x0012ff40
//	//a+1 --> 0x0012ff44
//	//(int)a+1 --> 0x0012ff41
//	printf("%x,%x", ptr1[-1], *ptr2);
//	//1 --> 0x 00 00 00 01
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	//  ptr2
//	//01 [00 00 00 02] 00 00 00 03 00 00 00 04 00 00 00
//	//   *ptr2
//	//*ptr2 = 02 00 00 00 ����2000000
//
//	return 0;
//}

//������4��
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ 1 3 5
//	int* p;
//	p = a[0];
//	//a[0]�ǵ�һ�е�������
//	//a[0]��ʾ��Ԫ�صĵ�ַ����a[0][0]�ĵ�ַ��&a[0][0]
//	printf("%d", p[0]);//1
//	//p[0] <==> *(p+0) <==> *p
//
//	return 0;
//}

//������5��
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//fffffffc -4
//	//p[4][2] --> *(*(p+4)+2)
//	//-4
//	//10000000000000000000000000000100
//	//11111111111111111111111111111011
//	//11111111111111111111111111111100
//	//0xff ff ff fc
//
//	return 0;
//}

//������6��
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	//*(aa + 1) <==> aa[1]
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5
//	
//	return 0;
//}

//������7��
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//  //char* *pa ������pa+1����һ��char*
//	pa++;
//	printf("%s\n", *pa);//at
//
//	return 0;
//}

//������8��
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);// POINT
	printf("%s\n", *-- * ++cpp + 3);// ER
	printf("%s\n", *cpp[-2] + 3);// ST
	//*cpp[-2] + 3 <==> * *(cpp - 2) + 3
	printf("%s\n", cpp[-1][-1] + 1);// EW
	//cpp[-1][-1] + 1 <==> *(*(cpp - 1) - 1) + 1
	 
	return 0;
}



#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//һ���⺯��
//ѧ�����ú����ֲ�

//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[] = "hello hgd";
//
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);//hello hgd
//
//	char arr[20] = "hello world";
//	memset(arr+6, 'y', 3);
//	printf("%s\n", arr);
//
//	return 0;
//}


//�����Զ��庯��
//�����Ķ���

//дһ�����������ҳ����������е����ֵ��
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//��ϴ�ֵ
//	//�����ĵ���
//	int m = get_max(a, b);
//
//	printf("%d\n", m);
//
//	return 0;
//}

//дһ���������Խ����������α��������ݡ�
//x��y����ʽ����
////����д��
////void Swap(int x, int y)
////{
////	int z = 0;
////	z = x;
////	x = y;
////	y = z;
////}
//
////��ȷд��
//void Swap(int *px, int *py)
//{
//	int z = *px;//z=a
//	*px = *py;//a=b
//	*py = z;//b=a
//}
//
////��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
////���βε��޸Ĳ��ܸı�ʵ��
////
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//����
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	//a��b��ʵ��
//	//Swap(a, b);
//	Swap(&a, &b);
//
//	printf("������:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//������
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	a = 20;//ֱ�Ӹ�
//	*p = 30;//��Ӹ�
//	return 0;
//}


//���������Ĳ���
//ʵ��
//��ʵ���������Ĳ�������ʵ�Ρ�
//ʵ�ο����ǣ����������������ʽ�������ȡ�
//����ʵ���Ǻ������͵������ڽ��к�������ʱ�����Ƕ�������ȷ����ֵ���Ա����Щֵ���͸��βΡ�
//int c = Add(10, b);
//int c = Add(a + 3, b);
//int c = Add(Add(a, 3), b);

//�β�
//��ʽ������ָ�������������еı�������Ϊ��ʽ����ֻ���ں��������õĹ����в�ʵ�����������ڴ浥Ԫ����
//���Խ���ʽ��������ʽ�����������������֮����Զ������ˡ������ʽ����ֻ�ں�������Ч��

//�ġ������ĵ���
//��ֵ���� - �������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�Ρ�
//��ַ���� - ��ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
//���ִ��η�ʽ�����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı�����

//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int *px, int *py)
//{
//	int z = *px;//z=a
//	*px = *py;//a=b
//	*py = z;//b=a
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//����
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	//a��b��ʵ��
//	//��ֵ����
//	Swap1(a, b);
//	//��ַ����
//	Swap2(&a, &b);
//
//	printf("������:a=%d b=%d\n", a, b);
//
//	return 0;
//}


//��ϰ
//1.1 ��ӡ100~200֮�������

//����ֻ�ܱ�1����������������
//����һ��
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		//��2~i-1֮�������ȥ�Գ�i
//		int flag = 1;//flag��1����ʾ������
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//������(�Ż���):
#include <math.h>
//sqrt����ѧ�⺯�� - ��ƽ��
//math.h

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		//��2~sqrt(i)֮�������ȥ�Գ�i
//		int flag = 1;//flag��1����ʾ������
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//1.2 дһ�����������ж�һ�����ǲ���������

//����������1
//������������0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}


//2.1 ��ӡ1000~2000��֮�������
//�����жϹ���
//1.�ܱ�4���������Ҳ��ܱ�100����������
//2.�ܱ�400����Ҳ������
//
//����һ��
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 100)
//			{
//				printf("%d ", year);
//			}
//		}
//
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//������(����)��
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//2.2 дһ�������ж�һ���ǲ������ꡣ

//�����귵��1
//�������귵��0
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	//else
//	//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}


//3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//int binary_search(int arr[], int k, int sz)//�β�arr����ȥ�����飬������ָ�����
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
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
//			return mid;//�ҵ��˷����±�
//		}
//	}
//	
//	return -1;//�Ҳ���
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//�ҵ��ˣ������±�
//	//�Ҳ���������-1
//	int ret = binary_search(arr, k, sz);//ʵ��ֱ��д������arr����Ҫд��arr[];
//	//��������Ϊ�������ݸ�����ʱ����Ϊָ�������ֻ��Ҫ�����Ԫ�ص�ַ��
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//
//	return 0;
//}

//
//��ʽ������ʵ�ʲ��������ֿ�����ͬ��Ҳ���Բ�ͬ
//


//����һ�������ʾ��
//���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ����������������
//�����ں����ڲ�����һ�������������ֵ������Ԫ�ظ����ǲ����׵�
//int binary_search(int arr[], int k)//�β�arr����ȥ�����飬������ָ�����
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����ں����ڲ�����һ�������������ֵ������Ԫ�ظ���
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
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
//			return mid;//�ҵ��˷����±�
//		}
//	}
//
//	return -1;//�Ҳ���
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	int k = 7;
//
//	//�ҵ��ˣ������±�
//	//�Ҳ���������-1
//	int ret = binary_search(arr, k);//ʵ��ֱ��д������arr����Ҫд��arr[];
//	//��������Ϊ�������ݸ�����ʱ����Ϊָ�������ֻ��Ҫ�����Ԫ�ص�ַ��
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//
//	return 0;
//}


//��������(C99�������) - 1���ֽ�
//bool - ������ʾ��ٵı���
//bool flag = true;
//          = false;

//дһ�����������ж�һ�����ǲ���������
//����������true
//������������false
//#include <stdbool.h>
//bool is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return false;
//		}
//	}
//
//	return true;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//4. дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��
//����һ��
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	Add(&num);
//	printf("%d\n", num);//4
//
//	return 0;
//}

//��������
//int Add(int n)
//{
//	return n + 1;//return ++n;
//}
//
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);//1
//	num = Add(num);
//	printf("%d\n", num);//2
//	num = Add(num);
//	printf("%d\n", num);//3
//	num = Add(num);
//	printf("%d\n", num);//4
//
//	return 0;
//}


//�塢������Ƕ�׵��ú���ʽ����
//5.1 Ƕ�׵��� - ��������Ƕ�׵��ã����ǲ���Ƕ�׶��塣
//Ƕ�׶��� - ��һ�������ڲ����ܶ�����һ������
//#include <stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();//Ƕ�׵���
//	}
//}
//
//int main()
//{
//	three_line();
//
//	return 0;
//}

//5.2 ��ʽ����
//��ʽ���ʵ�ǰ�������Ǻ������з���ֵ
//#include <string.h>
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//
//	////��ʽ����
//	//printf("%d\n", strlen("abcdef"));//strlen�ķ���ֵ����printf��һ������
//
//	printf("%d", printf("%d", printf("%d", 43)));//printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
//
//	return 0;
//}


//��ֵ�д��
//������д����ֵ��ʱ��Ĭ�Ϸ���������int
//���ǲ����鲻д��������
//Add(int x, int y)//���Ƽ���Ӧд��int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}


//int Add(int x, int y)//��׼ȷ�������� - д��int�������ͣ���Ҫ��ȷ����һ��ֵ
//{
//	printf("hehe\n");//д��int�������ͣ����ǲ���ȷ����(return)ʲô����ƾ���һ��ָ����ʲô���ͷ���ʲô
//}
////
////����Ĵ�����һЩ�������Ϸ��ص��Ǻ�����ִ�й����е����һ��ָ��ִ�еĽ��
////
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}


//void test(void)//()�м�void��ȷ�ܾ�100
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);//���Ƽ��ģ�û�в������Ͳ�Ҫ������������
//	test();
//
//	return 0;
//}


//��ȷ��˵����main��������Ҫ����
//������main�������в�����
//
//int main(void)//��ȷ��ʾ��Ҫ��main����������
//{
//
//	return 0;
//}

//main������3������
//int main(int argc, char* argv[], char *envp[])
//{
//
//	return 0;
//}


//���������������Ͷ���

//6.1 ����������
//1. ���߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ��ڣ����������������ˡ�
//2. ����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ�á�
//3. ����������һ��Ҫ����ͷ�ļ��еġ�

//6.2 �������壺
//�����Ķ�����ָ�����ľ���ʵ�֣����������Ĺ���ʵ�֡�

#include "add.h"
#include "sub.h"

//���뾲̬��
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	//�ӷ�
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	//int ret = Sub(a, b);
//	//printf("%d\n", ret);
//
//	return 0;
//}


//�ߡ������ݹ�
//7.1 ʲô�ǵݹ飿
//�����������ı�̼��ɳ�Ϊ�ݹ飨recursion����
//�ݹ���Ϊһ���㷨�ڳ�����������й㷺Ӧ�á�һ�����̻������䶨���˵������ֱ�ӻ��ӵ��������һ�ַ�����
//��ͨ����һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С����������⣬
//�ݹ����ֻ�������ĳ���Ϳ������������������Ҫ�Ķ���ظ����㣬���ؼ����˳���Ĵ�������

//�ݹ����Ҫ˼����ʽ���ڣ��Ѵ��»�С


//7.2 �ݹ��������Ҫ����
//���������������������������������ʱ�򣬵ݹ�㲻�ټ�����
//ÿ�εݹ����֮��Խ��Խ�ӽ��������������

//7.2.1 ��ϰ1:����ͼ��⣩
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//���磺 ���룺1234����� 1 2 3 4

//%d�Ǵ�ӡ�з��ŵ�����(����������)
//%u�Ǵ�ӡ�޷��ŵ�����

//��ӡ4 3 2 1�ķ���
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//1 2 3 4
//	//[4 3 2 1]
//	//
//	while (num)
//	{
//		printf("%d ", num % 10);//������ӡ����4 3 2 1
//		num = num / 10;
//	}
//
//	return 0;
//}

//�ݹ��ʵϰ
//��ӡ1 2 3 4

//void print(unsigned int n)
//{
//	//if (n > 9)
//	{
//		print(n / 10);//123
//	}
//	printf("%d ", n % 10);//4
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	print(num);//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//
//	return 0;
//}
//
////print(1234)
////print(123) 4 - 1234%10
////print(12) 3 4
////print(1) 2 3 4
////1 2 3 4

//7.2.2 ��ϰ2:����ͼ���⣩
//��д��������������ʱ���������ַ����ĳ��ȡ�

//���ַ����ĳ���
//ģ��ʵϰstrlen

#include <string.h>

////int my_strlen(char arr[])//��������д���������ʽ
//int my_strlen(char* str)//��������д��ָ�����ʽ
//{
//	int count = 0;//��������ʱ����
//	while (*str != '\0')
//	{
//		count++;
//		str++;//����һ���ַ�
//	}
//
//	return count;
//}


//�ݹ����

//my_strlen("abc");
//1+my_strlen("bc");
//1+1+my_strlen("c");
//1+1+1+my_strlen("");
//1+1+1+0

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";//[a b c \0]
//	//char*
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}


//7.3 �ݹ������
//7.3.1 ��ϰ3����n�Ľ׳ˡ��������������

//�ݹ�ʵ��
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}

//����ʵ�� - �ǵݹ�
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//7.3.2 ��ϰ4��
//���n��쳲���������(���������)
//쳲���������
//1 1 2 3 5 8 13 21 34 55 ...

//�ݹ�ʵ�� - ���������ļ�����̫��Ч�ʵ�
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//40
//39    38
//38    37    37    36
//37 36 36 35 35 34 34 33
//...

//����ʵ�� - ���������ļ�����С��Ч�ʸ�
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	//printf("%d\n", count);
//
//	return 0;
//}


//ʹ�õݹ����ջ���
//void test(int n)
//{
//	if (n < 10000)
//		test(n + 1);//�ݹ���̫���������ջ�������
//}
////����ν�����������⣺
////1. ���ݹ��д�ɷǵݹ顣
////2. ʹ�� static ������� nonstatic �ֲ�����
////�ڵݹ麯������У�����ʹ�� static ������� nonstatic �ֲ����󣨼�ջ���󣩣�
////�ⲻ�����Լ���ÿ�εݹ���úͷ���ʱ�������ͷ� nonstatic ����Ŀ�����
////���� static ���󻹿��Ա���ݹ���õ��м�״̬�����ҿ�Ϊ�������ò������ʡ�
////
//
//int main()
//{
//	test(1);
//
//	return 0;
//}


//�����ݹ�ļ���������Ŀ(�Լ�д��)
//1. ��ŵ������
//2. ������̨������

//A:��ʼλ��  B:��תλ��  C:Ŀ��λ��
//void move(int n, char A, char B, char C)
//{
//	if (n == 1)
//		printf("%c -> %c   ", A, C);
//	else
//	{
//		//��n-1��Բ����A�ƶ���B���ݹ������һ����ǰ�A�ƶ���C
//		move(n - 1, A, C, B);//��һ����Ҫ��n-1��Բ����Aͨ��C�ƶ���B
//		printf("%c -> %c   ", A, C);//�ڶ�����Aʣ�����Ĵ�A�ƶ���C
//
//		//��n-1��Բ����B�ƶ���C
//		move(n - 1, B, A, C);//��������B�е�n-1�����Ӵ�Bͨ��A�ƶ���C
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	move(n, 'A', 'B', 'C');
//
//	return 0;
//}


int method(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return method(n - 1) + method(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("����Ҫ��%d��̨��\n",n);
	int ret = method(n);
	printf("������%d������\n", ret);

	return 0;
}




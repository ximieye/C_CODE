#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��֧��ѭ�������ϰ��
//��һ����ӡ�����ʲô

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//���ﲻ���жϣ����Ǹ�ֵ��i = 5���ʽ�Ľ����5
//			printf("%d ", i);//5 5 5 5 5 5....��ѭ��
//	}
//
//	return 0;
//}

//�������ӡ�����ʲô

//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default:
//			printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//
//	return 0;
//}

//�������Ӵ�С���
//���ݣ�д���뽫������������С�������

//void Swap(int* px, int* py)
//{
//	int t = *px;
//	*px = *py;
//	*py = t;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//	//����
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	//���
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}

//���ģ�дһ�������ӡ1~100֮������3�ı���������

//����һ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//��������
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i+=3)
//		printf("%d ", i);
//
//	return 0;
//}

//���壺���������������������������Լ��

//����һ��������⣬������Ч
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	//�����Լ��
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	//���
//	printf("%d\n", m);
//
//	return 0;
//}

//��������շת�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = a * b;
//	//����
//	scanf("%d %d", &a, &b);//24 18
//	//�����Լ��
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	//���
//	printf("%d\n", b);//���Լ��
//
//	return 0;
//}

//��������ӡ�����ʲô
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//
//	return 0;
//}

//���ߣ���д������һ��1��100�����������г��ֶ��ٸ�����9
//9 19 29 39 49 59 69 79 89 99
//90 91 92 93 94 95 96 97 98 99

//int main()
//{
//	int i = 0;
//	int count = 0;//����
//	for (i = 1; i <= 100; i++)
//	{
//		//�жϸ�λ�ǲ���9
//		if (i % 10 == 9)
//			count++;
//		//�ж�ʮλ�ǲ���9
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//
//	return 0;
//}

//��ˣ�����1/1-1/2+1/3-1/4+1/5 ..... +1/99-1/100��ֵ����ӡ�����
//��������1
//��ĸ��1~100

//����һ��
//int main()
//{
//	int i = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum1 = sum1 + 1.0 / i;
//		else
//			sum2 = sum2 - 1.0 / i;
//	}
//
//	printf("%lf\n", sum1+sum2);
//
//	return 0;
//}

//��������Ч�ʸ���
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}

//��ţ���10�������е����ֵ

//int main()
//{
//	//׼��10������
//	int arr[10] = { 0 };
//	int i = 0;
//	//��������
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�ҳ����ֵ
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//����ʾ����
//int main()
//{
//	//׼��10������
//	int arr[] = { 0 };
//	//int arr[1] = {0};
//	//����û��ָ�������Ԫ�ظ������ͻ���ݳ�ʼ��������������Ԫ�صĸ���
//
//	int i = 0;
//	//��������
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�ҳ����ֵ
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//��ʮ������Ļ�����9*9�˷��ھ���
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//....
//

//int main()
//{
//	int i = 0;
//	//��ӡ9��
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡ1��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d\t", i, j, i * j);//%-2d ��λ����� %2d ��λ�Ҷ���
//
//		printf("\n");
//	}
//	
//	return 0;
//}


//������ϰ��
//��һ��ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//��ӡ1��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d\t", i, j, i * j);//%-2d ��λ����� %2d ��λ�Ҷ���
//
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}

//�������ӡ�����ʲô
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//
//int main()
//{
//	int ret = Fun(2);
//	printf("%d\n", ret);
//
//	return 0;
//}

//��������дһ������ reverse_string(char* string)(�ݹ�ʵ��)
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ����������������磺char arr[] = "abcdef"
#include <string.h>

//����һ��ѭ��ʵ��(����)
//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f g \0]
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	//int right = sz - 2;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//������������ʵ��(�ǵݹ�) - ���ǰѷ���һ��ѭ���ŵ��Զ���ĺ�����
//void reverse(char arr[1])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f g \0]
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//������������ʵ��(�ݹ�1)
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//void reverse(char* str)
//{
//	char tmp = *str;//1
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);//4
//	}
//	*(str + len - 1) = tmp;//5
//}
//
//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f g \0]
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//�����ģ�����ʵ��(�ݹ�2)
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if (left < right)
//		reverse(arr, left + 1, right - 1);
//}
//
//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f g \0]
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	reverse(arr, left, right);
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//���ģ�дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//int DigitSum(unsigned int n)//1234
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
////DigitSum(1234)
////DigitSum(123)+4
////DigitSum(12)+3+4
////DigitSum(1)+2+3+4
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}

//���壺��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��

//Pow(n, k) -> n*Pow(n, k-1)
//k = 0, 1
//k>0 ,Pow(n, k) -> n*Pow(n, k-1)
//k<0 ,1.0/Pow(n, -k)
double Pow(int n, int k)
{
	if (k > 0)
		return n * Pow(n, k - 1);
	else if (k == 0)
		return 1;
	else
		return 1.0 / Pow(n, -k);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);

	printf("%lf\n", ret);

	return 0;
}





#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	printf("     **\n");
	printf("     **\n");
	printf("************\n");
	printf("************\n");
	printf("    *  *    \n");
	printf("    *  *    \n");

	return 0;
}
*/

//���ͼ��
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//
//	return 0;
//}


//���ѧ����Ϣ
//int main()
//{
//	printf("Name	Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//
//	return 0;
//}


//������Ϣ
//int main()
//{
//	printf("I lost my cellphone!\n");
//
//	return 0;
//}


//����
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int r = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", r);
//
//	return 0;
//}


//
//0 - ����0
//'0' - �ַ�0 - ASCIIֵ��48
//'\0' - �ַ� - ASCIIֵ��0
//EOF - end of file �ļ��Ľ�����־ ֵ��-1
//


//��������ʼ�������Բ�ָ������Ĵ�С
//int main()
//{
//	int arr1[10];//10��Ԫ��
//	int arr2[] = { 1,2,3 };//3��Ԫ��
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char arr[7] = { 'b','i','t' };
//	//����ȫ��ʼ����ʣ��Ĳ���Ĭ�ϳ�ʼ��Ϊ0
//	//
//	//[b i t][    ?    ]
//	printf("%d\n", strlen(arr));//���ֵ
//
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	int arr[n] = { 0 };//err  []��ӦΪ����
//	//C99��׼֮ǰ������Ĵ�С�����ó������߳������ʽ��ָ��
//	int arr2[10];//ok
//	int arr3[4 + 6] = { 1,2,3,4 };//ok
//
//	//C99��׼֮��֧���˱䳤���飬���ʱ����������Ĵ�С�Ǳ�������������ָ����ʽ�������ǲ��ܳ�ʼ���ġ�
//	int m = 100;
//	int arr4[m];//���ñ�����֧�ּ���
//	int arr4[m] = { 0 };//����������֧��
//
//	return 0;
//}

//VS��C99�е�һЩ�﷨֧�ֲ��Ǻܺã���֧�ֱ䳤�����


//�Ƚ�2������С
//int Max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//��2�������Ľϴ�ֵ
//	int r = Max(a, b);
//	printf("%d\n", r);
//
//	return 0;
//}


int main()
{
	//����
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	//����
	if (x > 0)
		y = -1;
	else if (x == 0)
		y = 0;
	else
		y = 1;
	//���
	printf("%d\n", y);

	return 0;
}










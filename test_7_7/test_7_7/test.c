#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//whileѭ������ʼ�����жϡ���������ȽϷ�ɢ���޸ĵ�ʱ�����׳�������
//int main()
//{
//	int i = 1;//��ʼ��
//
//
//
//
//	while (i <= 10)//�ж�
//	{
//
//
//
//
//		printf("%d ", i);
//		i++;//����
//	}
//
//	return 0;
//}
 

//ѭ�����
//forѭ��(����ѭ����ʹ������)
//for(���ʽ1;���ʽ2;���ʽ3)
//���ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ�������ģ�
//���ʽ2Ϊ�����жϲ��֣������ж�ѭ��ʱ����ֹ��
//���ʽ3Ϊ�������֣�����ѭ�������ĵ�����
//1.������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//2.����for����ѭ�����Ʊ�����ȡֵ����"ǰ�պ�����"д��

//��ӡ1~10
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
	//forѭ���жϲ���ʡ����ζ���жϻ�����
	//for (;;)
	//{
	//	printf("hehe\n");
	//}

	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("hehe\n");
	//}

	//int i = 0;
	//int j = 0;
	////��ʼ�����ֲ�Ҫ���ʡ��
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("hehe\n");

	//	}
	//}

//	//C99�﷨��֧������д��
//	//C++��֧������д��
//	for (int i = 0; i < 10; i++)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//�����������ѭ��Ҳ�ǿ��Ե�
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//�������ѭ��Ҫѭ�����ٴ�
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//�ж�������k=0��ֵ�����ʽΪ�٣���ѭ��
//		k++;
//
//	return 0;
//}


//do whileѭ�� - ����ѭ��һ��
//int main()
//{
//	int i = 1;
//
//	do
//	{
//		i++;
//		if (i == 5)
//			//break;
//			continue;
//
//		printf("%d ", i);
//	}
//	while (i <= 10);
//
//	return 0;
//}

//��ϰ:
//1. ���� n�Ľ׳ˡ�
//1*2*3...*n
//

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}


//2. ���� 1!+ 2!+ 3!
//����һ��

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3!
//	//1+2+6=9
//	for (n = 1; n <= 3; n++)
//	{	
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//��������
//1
//1*2
//1*2*3
//1*2*3*4

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//3. ��һ�����������в��Ҿ����ĳ������n����������ֲ��ң�
//��������

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//��һ�����������в��Ҿ����ĳ������n
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±���:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}

//Ь
//������300,���
//1,2,3,4��.... err
//1-150 225....
//�۰���� ���ֲ���

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//��һ�����������в��Ҿ����ĳ������n
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left<=right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;//���ᳬ����Χ
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}


//4. ��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//welcomne to hgd!!!!
//##################
//w################!
//we##############!!
//wel############!!!
//....
//welcome to hgd!!!!

//char buf[] = "abc";
//[a b c \0]
//4
#include <windows.h>
#include <stdlib.h>

//int main()
//{
//	char arr1[] = "welcome to hgd!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;//int right = sizeof(arr1)/sizeof(arr1[0])-2;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];//���԰�++��--�ŵ���������
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//�����Ļ
//		system("cls");//system��һ���⺯��������ִ��ϵͳ����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//5. ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//(ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����)
//�Ƚ�2���ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp
//�������ֵ��0����ʾ2���ַ������
#include <string.h>

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//char ypassword[] = { "abcdef" };����дҲ���ԣ�Ȼ������strcmp����Ƚ���������
//	//�����������ַ�����abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������������˳�����\n");
//	}
//
//	return 0;
//}


//���Բ���һ�������(1~100)
//������
//�´���
//��С��
//ֱ���¶��ˣ�����

#include <stdlib.h>
#include <time.h>

//void menu()
//{
//	printf("**********************\n");
//	printf("******  1.play  ******\n");
//	printf("******  0.exit  ******\n");
//	printf("**********************\n");
//
//}
//
////0~RAND_MAX(32767)
//void game()
//{
//	int guess = 0;
//	//1.���������
//	//0~99 --> 1~100
//	int ret = rand()%100+1;//����������ĺ���
//	//printf("%d\n", ret);
//	
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}		
//	}	
//}
//
////ָ��
////int *p = NULL;
////int a = 0;
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//�����ֵ������߼�
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��!\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



//goto��� - ������ʹ��
//���ܿ纯����ת
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}

//�ػ�����
//1.��������������1�����ڹػ�
//2.������룺��һ�£���ȡ���ػ�
//
//bat
//

//����һ��
#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//system������ִ��ϵͳ����
//again:
//	printf("��ע�⣬��ĵ��Խ���60���ڹػ���������룺��һ�£���ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input,"��һ��") == 0)//2���ַ����Ƚϣ�Ӧ����strcmp
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//��������
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//system������ִ��ϵͳ����

	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���60���ڹػ���������룺��һ�£���ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "��һ��") == 0)//2���ַ����Ƚϣ�Ӧ����strcmp
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}



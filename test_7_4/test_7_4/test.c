#define _CRT_SECURE_NO_WARNINGS

//typedef - ���Ͷ��壬����������
//typedef unsigned int uint;
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	struct Node n;
//	Node n2;
//	return 0;
//}


//static - ��̬
//1.���ξֲ�����-��Ϊ��̬�ֲ�����
//2.����ȫ�ֱ���-��Ϊ��̬ȫ�ֱ���
//3.���κ���-��Ϊ��̬����

#include <stdio.h>

//���ξֲ�����
//void test()
//{
//	static int a = 1;//static���ξֲ�������ʱ�򣬾ֲ��������������򣬲����ٵġ�
//	//�����ϣ�static���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢λ�õġ�
//	//staticӰ���˱������������ڣ��������ڱ䳤���ͳ������������һ����
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}



//void test()//void����Ҫ����
//{
//	//ִ������
//	printf("hello world\n");
//}



//����ȫ�ֱ���

//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


//���κ���
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//
//	return 0;
//}


//register - �Ĵ���
//�����ϵĴ洢�豸���Ĵ���(���ɵ�CPU��)�����ٻ���(cache)���ڴ桢Ӳ��
//       �ռ�С����۸ߣ������ٶȿ�<-----------------�ռ����۵ͣ������ٶ���
//CPU - ���봦����

//
//int main()
//{
//	//�Ĵ�������
//	register int num = 3;//���飺3����ڼĴ�����
//
//	return 0;
//}
//


////define�����ʶ������
//#define NUM 100
//
//
////define�����
////�����в���
////     ���� ��Ĳ���(�����������͵�)
//#define ADD(x,y) ((x)+(y))
////                ����
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//printf("%d\n", NUM);
//	//int n = NUM;
//	//printf("%d\n", n);
//	//int arr[NUM] = { 0 };
//
//	int a = 10;
//	int b = 20;
//	int c= ADD(a, b);  //int c = ((a)+(b)); ��������滻
//	printf("%d\n", c);
//
//	return 0;
//}


//
//ָ��
//�ڴ�Ữ��Ϊһ�����ڴ浥Ԫ(һ���ڴ浥Ԫ�Ĵ�С��1byte)  ÿ���ڴ浥Ԫ����һ�����
//�ڴ浥Ԫ ���->��ַ->��ַҲ����Ϊָ��
//���ָ�루��ַ���ı�������ָ�����

//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڣ��洢10
//	//&a;//ȡ��ַ������
//	//printf("%p\n", &a);//000000B6C6CFFA74
//	int* p = &a;//*˵��p��ָ�������int˵��pָ��Ķ�����int���͵�
//	//p����ָ�����
//	*p = 20;//�����ò���������˼����ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���
//
//	printf("%d\n", a);
//
//
//	//char ch = 'w';
//	//char* pc = &ch;
//
//	return 0;
//}


//ָ������Ĵ�С
//int main()
//{
//	//int* p;
//	//char* p2;
//	//������ʲô���͵�ָ�룬�����ڴ���ָ�����
//	//ָ�������������ŵ�ַ��
//	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
//	//32λ�����ϵĵ�ַ��32bitλ - 4byte������ָ������Ĵ�С��4���ֽ�
//	//32λ�����ϵĵ�ַ��64bitλ - 8byte������ָ������Ĵ�С��8���ֽ�
//
//	printf("%zu\n", sizeof(char*));//8
//	printf("%zu\n", sizeof(short*));//8
//	printf("%zu\n", sizeof(int*));//8
//	printf("%zu\n", sizeof(float*));//8
//	printf("%zu\n", sizeof(double*));//8
//
//	return 0;
//}

//*��д��
//int main()
//{
//	char* pc;
//	int* p;
//
//	int* p1, p2, p3;//��˼��ֻ����p1��ָ�룬���ⶨ����p2��p3������
//	int *p1, *p2, *p3;//��������p1,p2,p3��ȫ������ָ��
//	return 0;
//}


//�ṹ��
//���ڸ��Ӷ���C���Ծ͸����Զ������͵��������Զ�����������һ�ֽУ��ṹ��
//struct
//�ṹ���ǰ�һЩ��һ���������һ�������

//ѧ��
struct Stu
{
	//��Ա����
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//->
	//�ṹ��ָ�����->��Ա��
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);//psָ��s���Ǹ���Ա
}

int main()
{
	struct Stu s = { "zhangsan", 20, "nan", "11258967845" };

	//�ṹ�����.��Ա��
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}





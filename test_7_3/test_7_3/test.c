

#include <stdio.h>

//�Ӽ��˳�ȡģ��������������
//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 % 2;//ȡģ
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	// / ���ŵ����˶���������ʱ��ִ�е��������������������ֻҪ��һ����������ִ�и������ĳ���
//	float a = 7 / 2.0;
//	int b = 7 % 2;//ȡģ
//	//ȡģ������������������ֻ��������
//
//	printf("%.2f\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//��ֵ������=��+=��-=��....
//int main()
//{
//	int a = 0;//��ʼ��
//	a = 20;//��ֵ
//
//	a = a + 3;//a=23
//	a += 3;
//
//	a = a - 3;
//	a -= 3;
//
//	return 0;
//}


//˫Ŀ������ - a+b
//��Ŀ������ - ֻ��һ���������Ĳ�����
//C������
//0��ʾ��
//��0��ʾ��
//

//int main()
//{
	//int flag = 2;
	//if (!flag)
	//{
	//	printf("hehe\n");
	//}

	//int a = -10;
	//int b = -a;
	//printf("%d\n", b);


	//sizeof�ǵ�Ŀ������

	//int a = 10;
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof a);//4
	//printf("%d\n", sizeof int );//��֧��

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//40 ���������������Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(arr[0]));//
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10 - �����Ԫ�ظ���

	//int a = 10;
	//int b = a++;//����++����ʹ�ã���++
	////int b =a ; a=a+1;

	//int b = ++a;//ǰ��++����++����ʹ��
	////a=a+1;b=a;

	//int b = a--;
	////b=a,a=a-1

	//int b = --a;
	////a=a-1,b=a

	//printf("%d\n", b);// 10 11 10 9
	//printf("%d\n", a);// 11 11 9 9

	//int a = (int)3.14;//(����) - ǿ������ת��
	//int a = int(3.14);//err
	//printf("%d\n", a);
	//3.14 ���渡������������Ĭ�����Ϊdouble����

//	return 0;
//}


//��ϵ������
// >  >=  <  <=
// == - ���ڲ���"���"
// != - ���ڲ���"�����"

//int main()
//{
//	int a = 10;
//	if (a == 3)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//�߼�������
//&& �߼��� - ����
//|| �߼��� - ����

//int main()
//{
	//&&
	//int a = 0;
	//int b = 20;
	//if (a && b)
	//{
	//	printf("hehe\n");
	//}

	//||
	//int a = 0;
	//int b = 20;
	//if (a || b)
	//{
	//	printf("hehe\n");
	//}

	//return 0;
//}


//����������(��Ŀ������) - ������������
//exp1?exp2:exp3
//��   ��    ��
//��   ��    ��

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int r = (a > b ? a : b);
//	printf("%d\n", r);
//	return 0;
//}


//���ű��ʽ�����Ÿ�����һ�����ʽ��- �����������μ���,�������ʽ�Ľ�������һ�����ʽ�Ľ��
//exp1,exp2,exp3, ...expN

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//       c=8        a=28       5
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);
//
//	return 0;
//}


//�±����á��������úͽṹ��Ա
//[]       ()       . ->

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n] = 20;//[]�����±����ò����� arr��3����[]�Ĳ�����
//
//	return 0;
//}

//()
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int sum = Add(2, 3);//�������ò�������A���2,3����()�Ĳ�����
//	printf("%d\n", sum);
//	return 0;
//}


//�����ؼ���
//auto - ���оֲ���������auto���ͣ�auto����ʡ��
int main()
{
	int a = 10;//�Զ�����

	return 0;
}

//break - ����ѭ��(forѭ�� whileѭ�� do whileѭ��)

//case default - switch(��֧���)

//char short int long float double - ��������

//const - �������α�����������

//continue - ����ѭ��

//do - do whileѭ��

//else - if else���(��֧��䣩

//enum  struct  union          sigend    unsigned   �Զ���
//ö��  �ṹ��   ������(������)   �з��ŵ�   �޷��ŵ�  

//extern - �����ⲿ���ŵ�

//for - forѭ��

//goto - ʵ����ת�������֧���

//register - �Ĵ���

//return - ��������ֵ

//sizeof - �����С

//static - ��̬�� �����������κ����ı���

//typedef - ����������

//void - ��(�����ķ������ͣ������Ĳ���)

//volatile

//while - whileѭ��

//������������
//1�������� int age ; float salary
//2�����ֱ�������ĸ�����֡��»�����ɣ������������ַ���ͬʱ���������ֿ�ͷ��
//int 2b;//err
//int _2b;//ok
//3�������������ǹؼ���

#include <stdio.h>

//�ṹ��

//1. �ṹ�������
//1.1 �ṹ�Ļ���֪ʶ
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı�����
//1.2 �ṹ������

//��
//�����Ľṹ������struct Peo

//���������������ַ��������ṹ�����
//struct Peo
//{
//	//��Ա����
//	char name[20];
//	char tele[12];
//	char sex[5];//Ů �� ����
//	int high;
//}p1,p2;//p1��p2������ȫ�ֵĽṹ�����


//struct Peo
//{
//	//��Ա����
//	char name[20];
//	char tele[12];
//	char sex[5];//Ů �� ����
//	int high;
//};
//
//int main()
//{
//	struct Peo p1 = { 0 };//�ṹ������Ĵ���
//
//	return 0;
//}

//1.3 �ṹ��Ա������
//�ṹ�ĳ�Ա�����Ǳ��������顢ָ�룬�����������ṹ�塣
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];//Ů �� ����
//	int high;
//};
//
//struct St//�����ڲ��Ľṹ��
//{
//	struct Peo p;
//	int num;
//	float f;
//};

//1.4 �ṹ������Ķ���ͳ�ʼ��
//2. �ṹ���Ա�ķ���
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];//Ů �� ����
	int high;
}p3,p4;//ȫ�ֽṹ�����

struct Peo p5, p6;//ȫ�ֽṹ�����

struct St
{
	struct Peo p;
	int num;
	float f;
};

//�ṹ��ָ�����ָ������ĳ�Ա
//��ʱ�����ǵõ��Ĳ���һ���ṹ�����������ָ��һ���ṹ���ָ�롣
void print2(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//�ṹ��ָ��->��Ա����
}

//�ṹ��������ʳ�Ա
//�ṹ�����ĳ�Ա��ͨ�����������.�����ʵģ������������������������
void print1(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//�ṹ�����.��Ա����
}

int main()
{
	//�ṹ������Ĵ������ʼ��
	struct Peo p1 = { "����","14652762497","��",177 };//�ֲ��ṹ�����
	struct St s = { {"����","14652762498","Ů",166},100,3.14f };
	
	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);

	print2(&p1);//����ַ
	print1(p1);//���ṹ��

	return 0;
}

//3. �ṹ�崫��
//����� print1 �� print2 �����ĸ���Щ��
//���ǣ���ѡprint2������
//ԭ��
//�������ε�ʱ�򣬲�������Ҫѹջ�ġ�
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
//���ۣ�
//�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��





















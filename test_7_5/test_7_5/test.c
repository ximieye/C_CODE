#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��֧��䣨ѡ����䣩
//if���  0��ʾ�٣���0��ʾ��
//int main()
//{
//	//int a = 10;
//	//if (a == 3)
//	//	printf("hehe\n");
//
//	//int age = 20;
//	//if (age > 18)
//	//	printf("����\n");
//
//	//int age = 20;
//
//	//if (age < 18)
//	//{
//	//	printf("δ����\n");
//	//	printf("��������\n");
//	//}
//	//else
//	//{
//	//	printf("����\n");
//	//}
//
//	int age = 10;
//	scanf("%d", &age);
//
//	if (age < 18)
//	{
//		printf("������\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("����\n");
//	}
//	else if (age >= 28 && age < 40)
//	{
//		printf("׳��\n");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("����\n");
//	}
//	else if (age >= 60 && age <= 100)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}


//if��else����Ĭ�Ͽ���һ����䣬ִ�ж������������{}��һ��{}����һ�������
//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{   
//		printf("����\n");
//		printf("����Ϸ\n");
//	}
//		
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}	
//	else
//		printf("haha\n");
//
//	return 0;
//}

//������
//1.�����������������壬�淶��
//2.�ո񣬿��У�����

//int main()
//{
//	//char firstname[20] = { 0 };
//	//char firstname[20] = { 0 };
//	//char FirstName[20] = { 0 };
//
//	//int a = 10;//�ӿո�
//
//	return 0;
//}

//int test()
//{
//	int a = 4;
//
//	if (a == 3)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	//if (5 == num)//�� if (num == 5) һ��
//	//	printf("hehe\n");
//
//	if (num = 5)
//	{
//
//	}
//
//	return 0;
//}


//������ϰ��Ŀ
//int main()
//{
//	//�ж�һ�����Ƿ�Ϊ����
//	int num = 0;
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("No\n");
//
//	return 0;
//}

//���1-100֮�������
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//			printf("%d ", i);
//		i+=2;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	//if (1 == day)
//	//{
//	//	printf("����һ\n");
//	//}
//	//else if (2 == day)
//	//{
//	//	printf("���ڶ�\n");
//	//}
//	//else if (3 == day)
//	//{
//	//	printf("������\n");
//	//}
//	//else ....
//
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//
//	//1.����1-5���������"weekday"
//	//2.����6-7�����"weekend"
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//
//	}
//
//	return 0;
//}

//��ϰ
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch����Ƕ��ʹ��
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}


//ѭ�����
//whileѭ��
//break���������õ���ֹѭ��
//continue��������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�

//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//��ӡ1~10����
//break - 1~4
//continue - 1~4��ѭ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			//break;//��ֹ����ѭ��
//			continue;//��������ѭ��i=5���ѭ������Ĵ��룬ֱ��ȥ�ж�Ҫ��Ҫ���н�����һ��ѭ��
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}
//
////continue - 2~11,����5
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;//��������ѭ��i=5���ѭ������Ĵ��룬ֱ��ȥ�ж�Ҫ��Ҫ���н�����һ��ѭ��
//
//		printf("%d ", i);
//		
//	}
//
//	return 0;
//}

//int main()
//{
//	//int ch = getchar();//��ȡһ���ַ�
//	//printf("%c\n", ch);//����1
//	//putchar(ch);//����2 //��ӡch
//
//	/*
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//    */
//
//	//��һ������
//	//����������һ���ַ���
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//����������������һ����ַ
//
//	//getchar();//��ȡ��\n
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ������(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}


int main()
{
    char ch = '\0';
    while ((ch = getchar()) != EOF)
    {
        if (ch < '0' || ch > '9')
            continue;
        putchar(ch);
    }
    //ֻ��ӡ�����ַ�

    return 0;
}







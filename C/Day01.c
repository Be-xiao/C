// std-��׼ st;andard input output
#include<stdio.h>

// %d-��ӡ����
// %c-��ӡ�ַ�
// %f-��ӡ����������-С��
// %p-�Ե�ַ����ʽ��ӡ
// %x-��ӡ16��������

// int���͵���˼
// mainǰ���int��ʾmain�������÷���һ������ֵ

int day1 = 20;  // ȫ�ֱ���-�����ڴ����{}֮��ı���
// ȫ�ֱ�������������������������
// ȫ�ֱ������������ǣ������������������

int main()  // ������-��������-main��������ֻ��һ��
{
	// �����������
	// ����Ļ����� Hello world
	// ����-print function-printf-��ӡ����
	// �⺯��-C���Ա����ṩ������ʹ�õĺ���
	// ʹ�ñ��˵Ķ���Ҫ���к�-#include
	printf("Hello world\n");

	char ch = 'N';  // �ڴ�
	printf("%c\n",ch);  // %c--��ӡ�ַ���ʽ������
	
	int age = 19;  // int����
	printf("%d\n", age);  // %d--��ӡ����ʮ��������

	short num = 12;  // short������
	printf("%d\n", num);

	long numeber = 1000;  // long������
	printf("%d\n", numeber);

	float f = 5.0;  // �����ȸ�����
	printf("%f\n", f);

	double d = 3.14;
	printf("%lf\n", d);  // ˫���ȸ�����

	printf("%d\n", sizeof(char));  // 1
	printf("%d\n", sizeof(short));  // 2
	printf("%d\n", sizeof(int));  // 4
	printf("%d\n", sizeof(long));  // 4
	printf("%d\n", sizeof(long long));  // 8
	printf("%d\n", sizeof(float));  // 4
	printf("%d\n", sizeof(double));  // 8

	short int date = 20;  // 2^16-1 = 65535,���ڴ�����2���ֽ�=16bit���������20
	// int age;  // 4
	float weight = 59.9f;  // ���ڴ�����4���ֽڣ����С��
	// Ҫ�ڵ����ȸ������´��˫���ȸ�������Ҫ��һ����f��

	// �ֲ��������������Ǳ������ڵķ�Χ
	int day = 10;  // �ֲ�����-�����ڴ����{}֮��
	// �ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ��������᳢��BUG
	// ���ֲ�������ȫ�ֱ���������ͬ��ʱ�򣬾ֲ���������
	// �ֲ��������������ǣ������������������ڿ�ʼ�����������������ڽ���

	// ���������������
	int num01 = 0;
	int num02 = 0;
	int sum = 0;
	// C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	printf("������������������>>>");
	// ��������-���뺯��scanf
	scanf_s("%d %d", &num01, &num02);  // &ȡ��ַ����
	sum = num01 + num02;
	printf("sum = %d\n", sum);
	
	return 0;  // ����0
}
#include <stdio.h>

// ���ۣ�ָ��Ĵ�С����32λ��4byte����64λƽ̨��8byte��
int main()
{
	int a = 10;
	int *p = &a; // ȡ��ַ
	// ָ�����--> ������ŵ�ַ�ı���
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 20; // * - �����ò�����
	printf("%d\n", a);
	char ch = "Hello world";
	char *pch = &ch;
	*pch = 'H';
	printf("%c\n", ch);
	return 0;
}

/*
// #define�����ʶ������
#define MAX 10
// #define�����-������
#define min(X,Y) (X<Y?X:Y)
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = MAX;
	int b = 20;
	// ����
	int Max = max(a, b);
	printf("Max = %d\n", Max);
	// ��
	int Min = min(a, b);
	printf("min = %d\n", Min);
	return 0;
}
*/

/*
// static ���ξֲ�����
// �ֲ��������������ڱ䳤
// static ����ȫ�ֱ���
// �ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û����ʹ����
// static ���κ����ı��˺�������������
void test()
{
	static int a = 1;  // һ����̬�ľֲ�����
	a++;
	printf("a = %d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}
*/

/*
int main()
{
	register int x = 20;  // �����a���嵽�Ĵ������������ֵ���ܻᱻƵ����ʹ��
	int a = 10;  // �ֲ�����-�Զ����� - auto int - Ĭ��ʡ��auto
	// int ����Ĭ���з���λ - signed int = int
	// unsigned int - �޷���λ-����ԶΪ��
	// strict - �ṹ��ؼ���
	// union - ������/������
	// typedef - ���Ͷ��� - �����ض���
	typedef unsigned int u_int;
	u_int num2 = -99;
	unsigned int num = -1;
	printf("%d\n", x);
	return 0;
}
*/

/*
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int arr[10] = { 0 }; // [] - �±����ò�����
	int num1 = 0;
	int num2 = 0;
	scanf(" %d %d ", &num1,&num2);
	int sum = Add(num1, num2);  // () - �������ò�����
	printf("sum = %d\n", sum);
	return 0;
}
*/

/*
// exp1 ? exp2 : exp3; ���������� -> Ҳ����Ŀ������
int main()
{
	int a = 2;
	int b = 3;
	int max = 0;
	max = (a > b ? a : b);
	printf("%d\n", max);
	return 0;
}
*/

/*
int main()
{
	// && -> �߼��� - ��������Ϊ��
	// || -> �߼��� - ֻҪ������һ���������㼴��
	int a = 3;
	int b = 5;
	int c = a && b;
	printf("c = %d\n", c);
	int x = 0;
	int y = 5;
	int z = x || y;
	printf("z = %d\n", z);
	return 0;
}
*/

/*
/*
int main()
{
	int a = (int)3.14;
	// (����) --> ǿ������ת����������ʹ��
	return 0;
}
*/

/*
int main()
{
	int a = 10;
	int b = a++;  // ����++����ʹ�ã���++
	int c = ++a;  // ǰ��++����++����ʹ��
	int d = a--;  // ����--����ʹ�ã���--
	int e = --a;  // ǰ��--����--����ʹ��
	printf(
		"a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n",
		a,b,c,d,e
	);  // 10  10  12  12  10
	return 0;
}
*/

/*
int main()
{
	int a = 0;  // 4���ֽڣ�32bitλ
	int b = ~a;  // b���з��ŵ�����
	// ~  --> ����2���ƣ�λȡ��
	// Դ�롢���롢����  --> Դ�����λ���䣬��λȡ���õ����룬�����1�õ�����
	// �����һ�õ����룬����λ���䣬������λȡ���õ�Դ��
	// �������ڴ��д����ʱ�򣬴�����Ƕ����ƵĲ���
	printf("%d\n", b);  // ʹ�õģ���ӡ�����������Դ��
	return 0;
}
*/

/*
// sizeof
int main()
{
	int a = 10;
	int arr[] = { 1,2,3,4,5,6 };  // 6*4=24 ---> int[6]
	printf("%d\n", sizeof a);  // 4
	printf("%d\n", sizeof (int));  // 4
	printf("%d\n", sizeof (a));  // 4
	printf("%d\n", sizeof (arr));  // ���������С����λ���ֽ�
	printf("%d\n", sizeof (arr) / sizeof(arr[0]));  // 6
	return 0;
}
*/

/*
Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);
	printf("max = %d\n", max);
	return 0;
}
*/

/*
�ַ���������־�� \0
EOF-> end of file ->'�ļ�������־'->1
ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
����--Դ�룬���룬����������ͬ
����--�洢���ǲ���
*/
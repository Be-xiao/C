#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#define MX 150  // ����ı�ʶ������

// ö�ٳ�����ö�� === һһ�о�
// �Ա��У�Ů������
// ��ԭɫ���졢�ơ���
// ö�ٹؼ���----enum
enum Sex
{
	Male,
	Female,
	Secret,
};
// Male,Female,Secret - ö�ٳ���

// �Զ��庯������͹���
int Add(int x, int y)
	{
	int z = x + y;
	return z;
}

int main()
{
	enum Sex sex = Male;
	sex = Female;
	// Secret = 6;  // err

	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	// ����ȫ
	sum = Add(num1, num2);
	printf("sum = %d\n", sum);
	
	3;  // ���泣����ֱ��д������ֵ
	
	// const - �����ԣ�const���εĳ�����
	const int num = 8;
	printf("%d\n", num);
	// num = 16
	// printf("%d\n",num)  // �޷���ӡ���ᱨ��

	const int n = 10;  // n�Ǳ������������г����ԣ���������˵n�ǳ���
	// int arr[n] = { 0 };  // �����޷���Ч
	int arr[MX] = { 0 };
	printf("%d\n", MX);

	printf("%d\n", Male);  // 0
	printf("%d\n", Female);  // 1
	printf("%d\n", Secret);  // 2

	// �ַ������ͣ�"Hello girl"����˫���������������ݽ��ַ���
	// "" , ���ַ���
	char arr1[] = "plan";  // ����
	// "plan" -- 'p' 'l' 'a' 'n' '\0' -- '\0'�ַ����Ľ�����־
	// ע���ַ����Ľ�����־��\0��ת���ַ����ڼ����ַ����ȵ�ʱ��\0�ǽ�����־���������ַ�������
	char arr2[] = {'D','a','y',0};  // ����
	// �����ڼ�����ϴ����ʱ�򣬴������2����
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));  // strlen - string length - �����ַ������ȵ���
	printf("%d\n", strlen(arr2));

	printf("c:\test\32\test.c\n");
	// \t - ˮƽ�Ʊ��
	printf("c:\\test\\32\\test.c\n");

	printf("Hello is \'���\'\n");

	printf("%d\n", strlen("c:\test\32\test.c"));
	// \32 -- 32������8��������
	// 32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
	// 32 --> ʮ���� --> 26 --> ��ΪASCII�������ַ�

	printf("%c\n", '\132');
	printf("%c\n", '\x61');

	int stand[10] = {1,2,3,4,5,6,7,8,9,10};  // ����һ�����10���������ֵ�����
	// 0-9
	printf("%d\n",stand[4]);  // �±����ʽ����Ԫ��
	
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", stand[i]);
		i++;
	}
	
	char ch[20];  // ����20������ַ�������
	//float arr2[5];

	int a = 5 % 2;  // ȡģ������
	printf("%d\n", a);
	
	int input = 0;
	int line = 0;
	printf("Would you like to join wuxi technician institute?(1/0)>:\n");
	printf("You need to study hard.\n");
	scanf("%d", &input);
	
	if (input == 1)
		printf("You will be on the peak of life\n");
		while (line <= 20000)
		{
			line++;
			printf("Ŭ��ѧϰѧϰ�����ô��� : %d\n", line);
		}
		if (line >= 20000)
			printf("�����������Ӳ��\n");
	if (input == 0)
		printf("Home pig\n");

	// �ƣ������ƣ�λ������
	// << ����
	// >> ����
	int o = 1;  // ����1ռ4���ֽ�-32bitλ
	int b = o << 1;
	printf("%d\n", b);
	printf("%d\n",o);

	//�������ƣ�λ����
	// & ��λ��
	int q = 3;  // 011
	int w = 5;  // 101
	int e = q & w;
	int r = q | w;
	int t = q ^ w;
	printf("%d\n", e);
	printf("%d\n", r);
	printf("%d\n", t);

	// ��ֵ��������
	// = += -= /= &= ^= |= >>= <<=
	// ���ϸ�ֵ��
	int l = 10;
	// w = 20;  // = ��ֵ   == �ж����
	// w += 10;  // w = w +10 ��ȫ�ȼ�
	// w -= 5;  // ͬ��
	// w &= 2;  // w = w & 2 
	
	// ��Ŀ������
	// �� �߼�������
	printf("%d\n", l);
	printf("%d\n", !l);
	// C�����б�ʾ��١�������0:�٣�һ�з��㣺��
	// - ��ֵ
	int j = -2;  // - ȡ��
	// + ȡ�� ͨ��ʡ��
	// & ȡ��ַ
	// sizeof �����������ͳ���
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	// sizeof������Ǳ���/������ռ�ռ��С����λ���ֽ�
	int ar [10] = { 0 };  // 10������Ԫ�ص�����
	int sz = 0;
	// 10*sizeof(int) = 40;
	printf("%d\n", sizeof(arr));
	// ���������Ԫ�ظ���
	// ���� = �����ܴ�С/ÿ��Ԫ�ش�С

	// ˫Ŀ������
	q + e;  // + ˫Ŀ������
	// ��Ŀ������

	// | ��λ��
	// ^ ��λ���

	return 0;
}
// ת���ַ�
// \'     ���ڱ�ʾ�ַ�����
// \"     ���ڱ�ʾһ���ַ����ڲ���˫����
// \\	  ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
// \a     �����ַ�������
// \b     �˸��
// \f     ��ֽ��
// \n     ����
// \r     �س�
// \t     ˮƽ�Ʊ��
// \v     ��ֱ�Ʊ��
// \ddd   ddd��ʾ1~3���˽��Ƶ����֡��磺\130x
// \xdd   dd��ʾ2��ʮ���������֡��磺/x30 0
/*
C����ע�ͷ���޷�Ƕ��
*/
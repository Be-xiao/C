#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#define MX 150  // 定义的标识符常量

// 枚举常量，枚举 === 一一列举
// 性别：男，女，保密
// 三原色：红、黄、蓝
// 枚举关键字----enum
enum Sex
{
	Male,
	Female,
	Secret,
};
// Male,Female,Secret - 枚举常量

// 自定义函数：求和功能
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
	// 不安全
	sum = Add(num1, num2);
	printf("sum = %d\n", sum);
	
	3;  // 字面常量，直接写出来的值
	
	// const - 常属性，const修饰的常变量
	const int num = 8;
	printf("%d\n", num);
	// num = 16
	// printf("%d\n",num)  // 无法打印，会报错

	const int n = 10;  // n是变量，但是又有常属性，所以我们说n是常量
	// int arr[n] = { 0 };  // 程序无法生效
	int arr[MX] = { 0 };
	printf("%d\n", MX);

	printf("%d\n", Male);  // 0
	printf("%d\n", Female);  // 1
	printf("%d\n", Secret);  // 2

	// 字符串类型，"Hello girl"，用双引号引起来的内容叫字符串
	// "" , 空字符串
	char arr1[] = "plan";  // 数组
	// "plan" -- 'p' 'l' 'a' 'n' '\0' -- '\0'字符串的结束标志
	// 注：字符串的结束标志是\0的转义字符。在计算字符长度的时候\0是结束标志，不算做字符串内容
	char arr2[] = {'D','a','y',0};  // 数组
	// 数据在计算机上储存的时候，储存的是2进制
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));  // strlen - string length - 计算字符串长度单的
	printf("%d\n", strlen(arr2));

	printf("c:\test\32\test.c\n");
	// \t - 水平制表符
	printf("c:\\test\\32\\test.c\n");

	printf("Hello is \'你好\'\n");

	printf("%d\n", strlen("c:\test\32\test.c"));
	// \32 -- 32是两个8进制数字
	// 32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
	// 32 --> 十进制 --> 26 --> 作为ASCII码代表的字符

	printf("%c\n", '\132');
	printf("%c\n", '\x61');

	int stand[10] = {1,2,3,4,5,6,7,8,9,10};  // 定义一个存放10个整数数字的数组
	// 0-9
	printf("%d\n",stand[4]);  // 下标的形式访问元素
	
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", stand[i]);
		i++;
	}
	
	char ch[20];  // 定义20个存放字符的数组
	//float arr2[5];

	int a = 5 % 2;  // 取模；余数
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
			printf("努力学习学习并且敲代码 : %d\n", line);
		}
		if (line >= 20000)
			printf("最终你死与肝硬化\n");
	if (input == 0)
		printf("Home pig\n");

	// 移（二进制）位操作符
	// << 左移
	// >> 右移
	int o = 1;  // 整型1占4个字节-32bit位
	int b = o << 1;
	printf("%d\n", b);
	printf("%d\n",o);

	//（二进制）位操作
	// & 按位与
	int q = 3;  // 011
	int w = 5;  // 101
	int e = q & w;
	int r = q | w;
	int t = q ^ w;
	printf("%d\n", e);
	printf("%d\n", r);
	printf("%d\n", t);

	// 赋值操作符：
	// = += -= /= &= ^= |= >>= <<=
	// 复合赋值符
	int l = 10;
	// w = 20;  // = 赋值   == 判断相等
	// w += 10;  // w = w +10 完全等价
	// w -= 5;  // 同理
	// w &= 2;  // w = w & 2 
	
	// 单目操作符
	// ！ 逻辑反操作
	printf("%d\n", l);
	printf("%d\n", !l);
	// C语言中表示真假————0:假；一切非零：真
	// - 负值
	int j = -2;  // - 取负
	// + 取正 通常省略
	// & 取地址
	// sizeof 操作数的类型长度
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	// sizeof计算的是变量/类型所占空间大小，单位是字节
	int ar [10] = { 0 };  // 10个整型元素的数组
	int sz = 0;
	// 10*sizeof(int) = 40;
	printf("%d\n", sizeof(arr));
	// 计算数组的元素个数
	// 个数 = 数组总大小/每个元素大小

	// 双目操作符
	q + e;  // + 双目操作符
	// 三目操作符

	// | 按位或
	// ^ 按位异或

	return 0;
}
// 转义字符
// \'     用于表示字符常量
// \"     用于表示一个字符串内部的双引号
// \\	  用于表示一个反斜杠，防止它被解释为一个转义序列符
// \a     警告字符，蜂鸣
// \b     退格符
// \f     进纸符
// \n     换行
// \r     回车
// \t     水平制表符
// \v     垂直制表符
// \ddd   ddd表示1~3个八进制的数字。如：\130x
// \xdd   dd表示2个十六进制数字。如：/x30 0
/*
C语言注释风格无法嵌套
*/
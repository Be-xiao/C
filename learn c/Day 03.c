#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// 结论：指针的大小，在32位上4byte，在64位平台上8byte。
/*
int main()
{
	int a = 10;
	int* p = &a; // 取地址
	// 指针变量--> 用来存放地址的变量
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 20;  // * - 解引用操作符
	printf("%d\n", a);
	char ch = "Hello world";
	char* pch = &ch;
	*pch = 'H';
	printf("%c\n", ch);

	return 0;
}
*/


// #define定义标识符常量
#define MAX 10
// #define定义宏-带参数
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
	// 函数
	int Max = max(a, b);
	printf("Max = %d\n", Max);
	// 宏
	int Min = min(a, b);
	printf("min = %d\n", Min);
	return 0;
}


/*
// static 修饰局部变量
// 局部变量的生命周期变长
// static 修饰全局变量
// 改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法在使用了
// static 修饰函数改变了函数的链接属性
void test()
{
	static int a = 1;  // 一个静态的局部变量
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
	register int x = 20;  // 建议把a定义到寄存器变量，这个值可能会被频繁的使用
	int a = 10;  // 局部变量-自动变量 - auto int - 默认省略auto
	// int 变量默认有符号位 - signed int = int
	// unsigned int - 无符号位-即永远为正
	// strict - 结构体关键字
	// union - 联合体/共用体
	// typedef - 类型定义 - 类型重定义
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
	int arr[10] = { 0 }; // [] - 下标引用操作符
	int num1 = 0;
	int num2 = 0;
	scanf(" %d %d ", &num1,&num2);
	int sum = Add(num1, num2);  // () - 函数调用操作符
	printf("sum = %d\n", sum);
	return 0;
}
*/

/*
// exp1 ? exp2 : exp3; 条件操作符 -> 也叫三目操作符
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
	// && -> 逻辑与 - 可以理解为并
	// || -> 逻辑或 - 只要有其中一个条件满足即可
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
	// (类型) --> 强制类型转换，不建议使用
	return 0;
}
*/

/*
int main()
{
	int a = 10;
	int b = a++;  // 后置++，先使用，再++
	int c = ++a;  // 前置++，先++，再使用
	int d = a--;  // 后置--，先使用，再--
	int e = --a;  // 前置--，先--，再使用
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
	int a = 0;  // 4个字节；32bit位
	int b = ~a;  // b是有符号的整型
	// ~  --> 按（2进制）位取反
	// 源码、反码、补码  --> 源码符号位不变，按位取反得到反码，反码加1得到补码
	// 补码减一得到反码，符号位不变，其他按位取反得到源码
	// 负数在内存中储存的时候，储存的是二进制的补码
	printf("%d\n", b);  // 使用的，打印的是这个数的源码
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
	printf("%d\n", sizeof (arr));  // 计算数组大小，单位是字节
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
字符串结束标志： \0
EOF-> end of file ->'文件结束标志'->1
只要是整数，内存中存储的都是二进制的补码
正数--源码，反码，补码三者相同
负数--存储的是补码
*/
// std-标准 st;andard input output
#include<stdio.h>

// %d-打印整型
// %c-打印字符
// %f-打印浮点型数字-小数
// %p-以地址的形式打印
// %x-打印16进制数字

// int整型的意思
// main前面的int表示main函数调用返回一个整型值

int day1 = 20;  // 全局变量-定义在代码块{}之外的变量
// 全局变量的作用域适用于整个工程
// 全局变量生命周期是：整个程序的生命周期

int main()  // 主函数-程序的入口-main函数有且只有一个
{
	// 这里完成任务
	// 在屏幕上输出 Hello world
	// 函数-print function-printf-打印函数
	// 库函数-C语言本身提供给我们使用的函数
	// 使用别人的东西要打招呼-#include
	printf("Hello world\n");

	char ch = 'N';  // 内存
	printf("%c\n",ch);  // %c--打印字符格式的数据
	
	int age = 19;  // int整型
	printf("%d\n", age);  // %d--打印整型十进制数据

	short num = 12;  // short短整型
	printf("%d\n", num);

	long numeber = 1000;  // long长整型
	printf("%d\n", numeber);

	float f = 5.0;  // 单精度浮点型
	printf("%f\n", f);

	double d = 3.14;
	printf("%lf\n", d);  // 双精度浮点型

	printf("%d\n", sizeof(char));  // 1
	printf("%d\n", sizeof(short));  // 2
	printf("%d\n", sizeof(int));  // 4
	printf("%d\n", sizeof(long));  // 4
	printf("%d\n", sizeof(long long));  // 8
	printf("%d\n", sizeof(float));  // 4
	printf("%d\n", sizeof(double));  // 8

	short int date = 20;  // 2^16-1 = 65535,向内存申请2个字节=16bit，用来存放20
	// int age;  // 4
	float weight = 59.9f;  // 向内存申请4个字节，存放小数
	// 要在单精度浮点型下存放双精度浮点型需要加一个‘f’

	// 局部变量的作用域是变量所在的范围
	int day = 10;  // 局部变量-定义在代码块{}之内
	// 局部变量和全局变量的名字建议不要相同，容易误会尝试BUG
	// 当局部变量和全局变量名字相同的时候，局部变量优先
	// 局部变量生命周期是：进入作用域生命周期开始，出作用域生命周期结束

	// 计算两个数的相加
	int num01 = 0;
	int num02 = 0;
	int sum = 0;
	// C语言语法规定，变量要定义在当前代码块的最前面
	printf("请输入两个操作数：>>>");
	// 输入数据-输入函数scanf
	scanf_s("%d %d", &num01, &num02);  // &取地址符号
	sum = num01 + num02;
	printf("sum = %d\n", sum);
	
	return 0;  // 返回0
}
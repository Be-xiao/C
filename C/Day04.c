#include<stdio.h>
#include <string.h>

// 结构体
// 人 - 名字+身高+体重+年龄+身份证...
// 复杂对象 -- 结构体 - 自己创造的类型

struct Book // struct 结构体关键字
{
	char name[20]; // 书名
	short price;   // 售价
};

int main()
{
	// 利用结构体类型-创建一个该类型的结构体变量
	struct Book b1 = {"Money or Love", 55};
	printf("Title:%s\n", b1.name);
	printf("price:%d dollar\n", b1.price);
	b1.price = 30;
	printf("discount price:%d dollar\n", b1.price);

	strcpy(b1.name, "Monkey paw"); // string copy - 字符串拷贝-库函数-string.h
	b1.price = 18;

	// 指针的运用
	struct Book *pd = &b1;
	printf("Title:%s\n", pd->name);
	printf("price:%d dollar\n", pd->price); // -> 结构体指针 -> 成员
	

	return 0;
}

/*
int main()
{
	int a = 4; // 申请了4个字节的空间
	printf("%p\n", &a);
	int *p = &a; // p是一个变量-指针变量
	printf("%p\n", p);
	*p = 20; // * - 解引用操作符/间接访问操作符
	printf("%d\n", sizeof(p)); // 32-4 64-8
	return 0;
}
*/
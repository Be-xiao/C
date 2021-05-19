#include <stdio.h>

//*结构体
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。

//*结构的声明
struct tag
{
    member - list;
} variabal - list;

//例如描述一个学生:名字，年龄，电话，性别
//struct - 结构体关键字，stu - 结构体标签，struct stu - 结构体类型
struct stu
{
    //成员变量
    char name[20];
    short age;
    char telephone[12];
    char sex[5];
} s1, s2, s3; // s1,s2,s3 是三个全局的结构体变量

typedef struct Stu
{
    char name[20];
    short age;
    char telephone[12];
    char sex[5];
} student;

//*结构体成员类型
//结构的成员可以是标量、数组、指针、甚至是其他结构体。

//*结构体变量的定义和初始化

int main()
{
    struct stu s; //s是局部的结构体变量
}

#include <stdio.h>

//*结构体
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。

//*结构的声明
/*
struct tag
{
    member - list;
} variabal - list;
*/

//例如描述一个学生:名字，年龄，电话，性别
//struct - 结构体关键字，stu - 结构体标签，struct stu - 结构体类型
struct stu
{
    //成员变量
    char name[20];
    short age;
    char telephone[12];
    char sex[5];
} S1, S2, S3; // S1, S2, S3 是三个全局的结构体变量

typedef struct Stu
{
    char name[20];
    short age;
    char telephone[12];
    char sex[5];
} student;

//*结构体成员类型
//结构的成员可以是标量、数组、指针、甚至是其他结构体。

typedef struct school
{
    char name[25];
    double area;
    int student_number;
    struct stu s;
    char *pc;
} school;

//*结构体变量的定义和初始化

int main()
{
    char arr[] = "Hello World\n";
    struct stu s1 = {"张三", 20, "15161516971", "male"}; //s是局部的结构体变量
    student s2 = {"狗蛋", 18, "15262526971", "male"};    //初始化
    school t = {"WuXi Technician College", 10.8, 2000, {"李四", 19, "15363536971", "male"}, arr};

    return 0;
}

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
/*
int main()
{
    //*结构体变量的定义和初始化
    char arr[] = "Hello World\n";
    struct stu s1 = {"张三", 20, "15161516971", "male"}; //s是局部的结构体变量
    student s2 = {"狗蛋", 18, "15262526971", "male"};    //初始化
    school t = {"WuXi Technician College", 10.8, 2000, {"李四", 19, "15363536971", "male"}, arr};

    //*结构体成员的访问
    //结构体变量访问成员，结构变量的成员是通过操作符(.)访问的。点操作符接受两个操作数
    printf("%s\n", s1.name); //张三
    printf("%d\n", s1.age);  //20
    printf("%s\n", t.s.sex); //male
    printf("%lf\n", t.area); //10.8
    printf("%s\n", t.pc);    //Hello World

    return 0;
}*/

void print1(student tmp)
{
    printf("name : %s\n", tmp.name);
    printf("age : %d\n", tmp.age);
    printf("telephon : %s\n", tmp.telephone);
    printf("sex : %s\n", tmp.sex);
}

void print2(student *ps)
{
    //*操作符(->)在结构体指针中使用
    printf("name : %s\n", ps->name);
    printf("age : %d\n", ps->age);
    printf("telephon : %s\n", ps->telephone);
    printf("sex : %s\n", ps->sex);
}

int main()
{
    student s = {"钢炮", 17, "15465546971", "male"};
    //打印结构体数据
    print1(s);//传结构体
    print2(&s);//传地址
    /*print2更优
    函数传参的时候，参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大，参数压栈
    的系统开销比较大，所以会导致性能的下降。
    结论:结构体传参的时候，要传结构体的地址
    */
}
/*
栈区：
    局部变量
    函数的形式参数
    函数调用也开辟空间
堆区：
    动态内存分配
        malloc、free、realloc、calloc
静态区：
    全局变量
    静态变量
*/
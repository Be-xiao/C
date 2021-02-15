#include <stdio.h>

/*
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int *p = arr;
    for (int i = 0; i < sz; i++)
    {
        printf("%d", *p);
        p = p + 1;
    }
    return 0;
}
*/

/*
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //*其绝对值是中间元素的个数，要求必须在同一个内存空间，否则结果无法预知
    printf("%d\n", &arr[9] - &arr[0]);
    
}
*/

/*
int my_strlen(char *str)
{
    char *start = str;
    char *end = str;
    while (*end != '\0')
    {
        end++;
    }
    return end - start;
}

int main()
{
    //*! strlen - 求字符串长度
    char arr[] = "bit";
    int len = my_strlen(arr);
    printf("%d\n", len);
    return 0;
}
*/

/*
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int *arr[3] = {&a, &b, &c};
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(arr[i]));
    }

    return 0;
}
*/

typedef struct student
{
    //*描述一个学生 - 一些数据
    char name[20];
    short age;
    char telenumber[12];
    char sex[5];
} student;

void print(student tem)
{
    printf("name: %s\n", tem.name);
    printf("age: %d\n", tem.age);
    printf("telenumber: %s\n", tem.telenumber);
    printf("sex: %s\n", tem.sex);
}

void print1(student *tem)
{
    printf("name: %s\n", tem->name);
    printf("age: %d\n", tem->age);
    printf("telenumber: %s\n", tem->telenumber);
    printf("sex: %s\n", tem->sex);
}

int main()
{
    student s = {"elgon", 20, "15161586971", "male"};
    //*打印结构体数据
    print(s);
    print1(&s); //*！这个方式更优
    /*
    函数传参的时候，参数是需要压栈的，如果传递一个结构体对象的时候，
    结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降。
    */
    return 0;
}
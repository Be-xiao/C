/*
C语言是一门 结构化 的程序设计语言
1、顺序结构
2、选择结构
3、循环结构

什么是语句？
C语言中由一个分号；隔开的就是一条语句。
*/

/*
#include<stdio.h>
int main()
{
    int i = 3;
    float f = 5.5;
    double d = 7.5;
    double sum;
    sum = 10 + 'a' + i*f - d/3;
    printf("%lf\n",sum);
    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, disc, p, q;
    scanf("%lf%lf%lf", &a, &b, &c);
    disc = b * b - 4 * a * c;
    if(disc < 0)
        printf("This equation hasn't real root");
    else{
        p = -b / (2 * a);
        q = sqrt(disc) / (2 * a);
        x1 = p + q;
        x2 = p - q;
        printf("x1 = %7.2f\nx2 = %7.2f\n", x1, x2);
    }
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc)
{
    float input = 0; // 储存输入的摄氏温度
    double output = 0; // 储存输出的摄氏温度

    printf("please input celsius:>>>");
    scanf("%f", &input);
    output = input * 1.8 + 32;
    printf("%f\n", output);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    char grade;
    printf("your score:>>>");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'a':printf("85~100\n");
        break;
    case 'b':printf("70~84\n");
        break;
    case 'c':printf("60~69\n");
        break;
    case 'd':printf("<60\n");
        break;
    default:printf("error\n");
    }
    return 0;
}
*
/*
#include <stdio.h>
int main()
{
    int num[20];
    int ave, sum;
    int flag = 0;

    //*input
    for (int i = 0; i < 20; i++)
    {
        scanf("%d\n", &num[i]);
    }

    //*output
    for (int i = 0; i < 20; i++)
    {
        sum += num[i];
    }

    ave = sum / 20;

    for (int i = 0; i < 20; i++)
    {
        if (num[i] > ave)
            flag++;
    }

    printf("ave = %d\n,num bigger than ave is %d", ave, flag);

    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    void print_star();
    void print_message();

    print_star();
    print_message();
    print_star();

    return 0;
}

void print_star()
{
    printf("**************\n");
}

void print_message()
{
    printf("How do you do?\n");
}
*/


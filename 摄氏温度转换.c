#include <stdio.h>
#include <stdlib.h>

int main(int argc)
{
    float input = 0;   // 储存输入的摄氏温度
    double output = 0; // 储存输出的摄氏温度

    printf("please input celsius:>>>");
    scanf("%f", &input);
    output = input * 1.8 + 32;
    printf("%f\n", output);
    return 0;
}
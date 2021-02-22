#include <stdio.h>

/*
指针就是个变量，用来存放地址，地址唯一标识一块内存空间。
指针的大小是固定的4/8个字节（32位/64位）
指针是有类型，指针的类型决定了指针的+-整数的步长，指针解引用操作的时候的权限。
指针的运算
*/

/*
//*指针数组
int main()
{
    int arr[10] = {0};
    char ch[5] = {0};
    int *parr[4];  // 存放整形指针的数组 - 指针数组
    char *pch[5]; // 存放字符指针的数组 - 指针数组
    printf("Hello World\n");
    return 0;
}
*/

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 5, 6};
    int arr3[] = {3, 4, 5, 6, 7};

    int *parr[] = {arr1, arr2, arr3};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%d", *(parr[i] + j));
        printf("\n");
    }

    return 0;
}
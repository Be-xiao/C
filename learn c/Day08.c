#include <stdio.h>

//*指针是什么
/*
在计算机科学中，指针(Pointer)是编程语言中的一个对象，利用地址，它的值直接指向(points to)
存在电脑储存器中另一个地方的值。由于通过地址能找到所需的变量单元，可以说，地址指向该变量单元。
因此，将地址形象称为“指针”。意思是通过它能找到以它为地址的内存单元。

指针就是个变量，用来存放地址，地址唯一标识一块内存空间。
指针的大小是固定的4/8个字节（32位/64位）
指针是有类型，指针的类型决定了指针的+-整数的步长，指针解引用操作的时候的权限。(能够访问空间的大小)
指针的运算
*/

/*
int main()
{
    int a = 10;  //在内存中开辟一块空间
    int *p = &a; //这里我们对变量a，取出它的地址，可以使用&操作符
                 //将a的地址存放在P变量中，p就是一个指针变量
    return 0;
}*/

/*
int main()
{
    int a = 0x11223344;
    int *pa = &a;
    char *pc = &a;
    printf("%p\n", pc);
    printf("%p\n", pc + 1);

    printf("%p\n", pa);
    printf("%p\n", pa + 1);

    return 0;
}*/

/*
//*指针数组
int main()
{
    int arr[10] = {0};
    int *p = arr; //数组名-首元素的地址
    for (int i = 0; i < 10; i++)
        *(p + i) = 1;

    return 0;
}*/

/*
野指针：野指针就是指针指向的位置是不可预知的(随机的、不正确的、没有明确限制的)
野指针成因：
    指针未初始化；
        int main()
        {
            int *p; //局部变量指针未初始化，默认为随机值
            *p = 20;
            return 0;
        }
    指针越界访问;
        int main()
        {
            int arr[10] = {0};
            int *p = arr;
            for (int i = 0; i <= 11; i++)
            {
                //!当指针指向的范围超出数组arr的范围时，p就是野指针
                *(p++) = 1;
            }
        }
    指针指向的空间释放;
        int test()
        {
            int a = 10; //a局部变量
            return &a;
        }

        int main()
        {
            int *p = test();
            *p = 20;
        }

?如何规避野指针；
    指针初始化；
    小心指针越界；
    指针指向空间释放即使置NULL
    指针使用之前检查有效性
*/
/*
//*指针的解引用
int main()
{
    int n = 0x11223344;
    char *pc = (char *)&n;
    int *pi = &n;
    *pc = 0;
    *pi = 0; //重点在调试的过程中观察内存的变化
    return 0;
}
*/
/*
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", sz);

    int *p = arr;
    for (int i = 0; i < sz; i++)
    {
        printf("%d\n", *p);
        p++;
    }

    return 0;
}
*/
//*指针+-整数
#define N_VALUES 5
float values[N_VALUES];
float *vp;
//!指针+-整数；指针的关系运算
for (vp = &values[0]; vp < &values[N_VALUES])
    *vp++ = 0;

/*
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
*/

/*
void loveyou(int n) // n为问题规模
{
    int i = 1; //
    while (i <= n)
    {
        printf("I love you %d\n", i);
        i++;
    }
    printf("I love you more than %d\n", n);
}

int main()
{
    loveyou(10);
    return 0;
}
//*算法的时间复杂度 T = O(n);
*/

/*
void test(int x)
{
    x = 1024;
    printf("test函数内部 x = %d\n", x);
}

int main()
{
    int x = 1;
    printf("调用test前 x = %d\n", x);
    test(x);
    printf("调用test后 X =%d\n", x);
}
*/

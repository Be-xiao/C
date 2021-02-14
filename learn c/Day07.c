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

my_strlen(char *str)
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
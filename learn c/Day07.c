#include <stdio.h>

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
/*
#include <stdio.h>
int main()
{
    void exchange(int *q1, int *q2, int *q3);
    int a, b, c, *p1, *p2, *p3;

    printf("please input 3 integer number:>>>");
    scanf("%d%d%d\n", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    exchange(p1, p2, p3);

    printf("The order is :%d,%d,%d\n", a, b, c);
    return 0;
}

void exchange(int *q1, int *q2, int *q3)
{
    void swap(int *p1, int *p2);
    if (*q1 < *q2)
        swap(q1, q2);
    if (*q1 < *q3)
        swap(q1, q3);
    if (*q2 < *q3)
        swap(q2, q3);
}

void swap(int *p1, int *p2)
{
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
*/

/*
#include <stdio.h>
int main()
{
    int a[1], *point1, *point2;
    void swap(int *p1, int *p2);

    for (int i = 0; i < 2; i++)
    {
        printf("Please input 2 integer number:>>>");
        scanf("%d", &a[i]);
    }
        
    point1 = &a[0];
    point2 = &a[1];

    if (a[0] < a[1])
        swap(point1, point2);

    printf("max = %d, min = %d\n", a[0], a[1]);

    return 0;
}

void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
//* 我感觉这段程序有BUG
*/

/*
#include <stdio.h>

int is_prime(int n)
{
    int j;
    for (int j = 2; j < n; j++)
    {
        if (n % j == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int i;
    for (i = 100; i <= 200; i++)
    {
        if (is_prime(i) == 1)
            printf("%d\n", i);
    }

    return 0;
}
*/

#include <stdio.h>
#include <string.h>

int binary_search(int arr[], int k)
{
    int sz = sizeof(arr[10]) / sizeof(arr[0]);
    int left = 0;
    int right = sz - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] < k)
            left = mid + 1;
        else if (arr[mid] > k)
            right = mid - 1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    //*二分查找，在一个有序数组中查找具体的某个数，找到后返回这个数的下标
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;
    int ret = binary_search(arr, k);
    if (ret == -1)
        printf("The spencifed number could not be found\n");
    else
        printf("Find the subscript of the spencifed number is %d\n,",ret);
    return 0;
}

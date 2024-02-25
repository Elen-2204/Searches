#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int BinSearchRight(int arr[], int left, int right, int key)
{
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if ((mid == right || key < arr[mid + 1]) && arr[mid] == key)
        return mid;
    else if (key < arr[mid]) return BinSearchRight(arr, left, mid - 1, key);
    else return BinSearchRight(arr, mid + 1, right, key);
}

int main()
{
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(int);

    int x = 2;
    printf("\n Right Occurrence = %d\n",
        BinSearchRight(arr, 0, n - 1, x));

    return 0;
}

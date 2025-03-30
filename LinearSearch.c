#include <stdio.h>
int search(int array[], int x, int n)
{
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}
int main()
{
    int array[] = {1, 12, 13, 14, 15, 16};
    int x = 15;
    int n = sizeof(array) / sizeof(array[0]);
    int result = search(array, x, n);
    (result == -1)
        ? printf("Element not found")
        : printf("Element found at index %d", result);
}
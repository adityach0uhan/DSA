#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {23,44,77,22,78};
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("Element Present in %dth index is : %d \n", i, arr[i]);
    }

    return 0;
}

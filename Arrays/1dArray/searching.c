#include <stdio.h>
int main()
{

    int arr[] = {23, 5, 22, 77, 22, 55, 22, 454};
    int length = sizeof(arr) / sizeof(arr[0]);
    int elementTosearch = 22;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == elementTosearch)
        {
            return printf("Element found at %d index \n", i);
        }
    }

    return 0;
}
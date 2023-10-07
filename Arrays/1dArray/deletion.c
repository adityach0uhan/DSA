#include <stdio.h>
int main()
{
    // lenght  of array remains same even if we delete the element 
    int myArr[] = {1, 2, 3, 4, 5, 6, 7};
    int indexOfArray;
    int lengthOfArray = sizeof(myArr) / sizeof(myArr[0]);
    printf("Enter the Index of array you want to delete :");
    scanf("%d", &indexOfArray);

    if (indexOfArray < 0 || indexOfArray > lengthOfArray)
    {
        printf("Index OverBound");
    }
    else
    {
        // priniting the current array
        printf("Current Array : \n");
        for (int i = 0; i < lengthOfArray; i++)
        {
            printf("%d \n", myArr[i]);
        }
        // Deletion
        for (int i = indexOfArray; i < lengthOfArray; i++)
        {
            myArr[i] = myArr[i + 1];
        }

        // array after deletion
        printf("Array after Deletion :\n");
        for (int i = 0; i < sizeof(myArr) / sizeof(myArr[0]); i++)
        {
            printf("array in %d index :%d \n", i, myArr[i]);
        }
    }

    return 0;
}
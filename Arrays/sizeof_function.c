#include <stdio.h>
int main()
{
    int numb[] = {1, 3, 34, 5,6,89,4};
    int sizeOfArray = sizeof(numb) / sizeof(numb[2]);
    // size of an individual array element

    printf("size, in bytes, of each element present in array numb : %zu \n", sizeof(numb[0]));
    printf("number of elements in your array :%d \n", sizeOfArray);
    printf("total size occupied by your array :%zu \n", sizeof(numb));

    return 0;
}
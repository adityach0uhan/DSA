#include<stdio.h>
int main(){

    int Noofelement;
    printf("What will be the size of your array :");
    scanf("%d", &Noofelement);
    int arr[Noofelement];
    for (int i = 0; i < Noofelement; i++)
    {
        printf("Enter the %d element to store in your array :",i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("The element preset in %d position is:%d \n", i+1, arr[i]);
    }

    return 0;
}
#include<stdio.h>
int main(){
    int a = 23;
    int *ptr = &a;
    printf("The Value of  a : %d \n", a);
    printf("The Value inside of pointer : %p \n", ptr);
    printf("The Memory address of a : %p \n", &a);

    return 0;

}
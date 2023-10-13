#include<stdio.h>
int main(){
    int num;
    int first_num = 0;
    int second_num = 1;
    int final_num;
    printf("Enter a Number to generate a  Fibonacci sequence: ");
    scanf("%d", &num);

    for (int i = 0; i <=num; i++)
    {
        if(i<=1){
            final_num = i;
        }else{
            final_num = first_num + second_num;
            first_num = second_num;
            second_num = final_num;
        }
        printf("Series will be : %d \n" , final_num);
    }
}
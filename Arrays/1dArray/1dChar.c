#include <stdio.h>
int main(){

    char *weekDays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    for (int i = 0; i < sizeof(weekDays)/sizeof(weekDays[0]);i++){
        printf("%s \n", weekDays[i]);
    }

        return 0;
}
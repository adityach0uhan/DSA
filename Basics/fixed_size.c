#include <stdio.h>
int main()
{
    char names[3][9] = {"hello", "worldjjjj"}; // the fitst[3] tells the size and 2nd [9] tells the max number of characters 'h' 'e' 'l' 'l' 'o' 'w' this is 5 char so its fine
    printf("%s\n", names[0]);

    return 0;
}
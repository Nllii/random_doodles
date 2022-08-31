#include <stdlib.h>
#include <stdio.h>






int main(){
    int find_x, find_y, find_bound;
    
    find_x = 10;
    find_y = 20;
    find_bound = *(&find_x + 1) - find_x;
    printf("The value of x is %d    The value of y is %d  The value of bound is %d\n", find_x, find_y, find_bound);






}
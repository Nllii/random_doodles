#include <stdlib.h>
#include <stdio.h>

#define isFalse 4


int main(){

    int is_True;
    int is_False;

    for (is_True = 0; is_True < 10; is_True++ ){
        if  (is_True == isFalse) {
            printf("found value %d\n", is_True);
            printf("%3d %6.1f \n", is_True, is_True * 1.5);
        }
        
        printf("The value of is_True is %d ", is_True);
        printf("%3d %6.1f\n", is_True, is_True * 1.5);
    }






}
#include <stdlib.h>
#include <stdio.h>




static char days[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};


void get_address(){
    int i;
    for (i = 0; i < 7; i++){
        printf("%s [i] = %p \n", days[i], &days[i]);
    }
}





int main(int argc, char *argv[]){
    get_address();
    printf("days = %p \n", days);
    return 0;
}




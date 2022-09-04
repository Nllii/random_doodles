#include <stdlib.h>
#include <stdio.h>



// char *p = (char *)malloc(10);
void read_tea(){
    int *p = (int *)malloc(sizeof(int));
    *p = 1;
    printf("%d %p %p \n", *p, p, &p); 
    free(p);
}




int main(){
    read_tea();
    char c = 'A';
    char *p = &c;
    printf("%c %p %p \n", *p, p, &p);

    int x =1, y =2 , z[10];
    int *ip;
    ip = &x;
    y = *ip;
    *ip = 0;
    ip = &z[0];

    printf("value of x is %d \n", x);
    printf("Value pointed by ip: %d\n", *ip);
    printf("Address of x is %p \n", &x);
    printf("Address of ip is %p \n", &ip);
    printf("Address of z[0] is %p \n", &z[0]);
    printf("Address of z[1] is %p \n", &z[1]);
    printf("Address of z[2] is %p \n", &z[2]);

    // run and see...
    // free all the memory
    free(p); // memory wasn't allocated by malloc. So this should turn out an error.


    






 
}





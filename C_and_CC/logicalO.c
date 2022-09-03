#include <stdlib.h>
#include <stdio.h>






int main(){

const int lim = 5;
char c;
char s[lim];



// scan and repeat what is going on.
for (int i=0; i<lim-1; ++i){
    c = getchar();
    if (c == EOF)
        break;
    if (c == ' '){
        s[i] = c;
        ++i;
    }
    s[i] = c;

    printf("%c", s[i]);
    





}


}
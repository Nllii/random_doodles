#include <stdlib.h>
#include <stdio.h>





struct point{
    int x;
    int y;
};



void move(struct point *p){
    p->x = 1;
    p->y = 2;
}

void move2(struct point p){
    p.x = 1;
    p.y = 2;
}


int main(){
    struct point coord1 = {0, 20};
    printf("coord1.x = %d, coord1.y = %d \n", coord1.x, coord1.y);
}





// int main(){
//     struct point p;
//     move(&p);
//     printf("x = %d, y = %d \n", p.x, p.y);
//     move2(p);
//     printf("x = %d, y = %d \n", p.x, p.y);
//     return 0;
// }


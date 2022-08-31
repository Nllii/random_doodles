#include <stdlib.h>
#include <stdio.h>


#define READOUT_CALL 10
#define CALL 20


int main(){
    
char line[READOUT_CALL+1];
int  day[31+CALL+31+30+31+30];
printf("Enter the day of the month: ");
fgets(line, sizeof(line), stdin);
sscanf(line, "\n%d", &day);
printf("The day of the month is %d\n", day[2]);



}
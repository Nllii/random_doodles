# include <stdlib.h>
# include <stdio.h>






enum boolean {NO, YES};

void ask_question(void);
enum boolean get_response(void);
void print_response(enum boolean);


int main(void){
    enum boolean answer;
    ask_question();
    answer = get_response();
    print_response(answer);
    return 0;
}

void ask_question(void){
    printf("Do you want to save your game? ");
}


enum boolean get_response(void){
    char input;
    do{
        input = getchar();
    }while(input != 'y' && input != 'n');
    return (input == 'y') ? YES : NO;
}


void print_response(enum boolean answer){
    printf("You answered %s to the question. ", answer == YES ? "yes" : "no");
}


// int main(void){
//     enum boolean answer;
//     ask_question();
//     answer = get_response();
//     print_response(answer);
//     return 0;

// }

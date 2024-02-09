#include <stdio.h>

void addition(int *number);

int main(){
    int number = 15;
    addition(&number);
    printf("Your number %d \n",number);
    return 0;
}

void addition(int *number){
    *number = (*number) + (*number);
    printf("Your number %d \n", *number);
}
#include <stdio.h>

void square(int number);
void _square(int *number);

int main(){
    int number = 4;
    square(number);
    printf("Your number is %d \n",number);

    _square(&number);
    printf("Your number is %d \n",number);


    return 0;
}

void square(int number){
    number = number * number;
    printf("Your number is %d \n",number);
}

void _square(int *number){
    *number = (*number) * (*number);
    printf("Your number is %d \n",*number);
}

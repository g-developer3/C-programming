#include <stdio.h>


int main(){
    int number = 6;
    int *ptr = &number;
    int **pptr = &ptr;
    printf("Your number is %d \n",**pptr);
    printf("Your number is %d \n",*ptr);
    return 0;
}
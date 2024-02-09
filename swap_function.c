#include <stdio.h>

int swap(int *a, int *b);

int main(){
    int a= 3;
    int b= 5;
    swap(&a,&b);
    printf("Your a = %d \n",a);
    printf("Your b = %d \n",b);
    return 0;
}

int swap(int *a,int *b){
   int c = *a;
       *a = *b;
       *b = c;        
}
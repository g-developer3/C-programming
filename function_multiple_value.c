#include <stdio.h>
void calculate(int a, int b,int *sum, int *product, int *avarage);
int main(){
    int a=4, b=5;
    int sum,product,avarage;
    calculate(a,b,&sum,&product,&avarage);
    printf("sum is : %d, product is %d, avarage is %d",sum,product,avarage);
    return 0;
}

void calculate(int a, int b, int *sum, int *product,int *avarage ){
    *sum = a+b;
    *product = a*b;
    *avarage = (a+b)/2;
}
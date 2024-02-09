#include <stdio.h>

int sum(int num);

int main(){
    printf("%d",sum(5));
    return 0;
}

int sum(int num){
    if(num==1){
        return 1;
    }
    int sumNm1 = sum(num-1);
    int sumN = sumNm1 + num;
    return sumN;
}
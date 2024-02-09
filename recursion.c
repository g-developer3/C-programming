#include <stdio.h>
#include <math.h>

void recursion(int count);

int main(){
    recursion(5);
    return 0;
}

void recursion(int count){
    if(count==0){
        return;
    }
    printf("Hello World \n");
    recursion(count-1);
}
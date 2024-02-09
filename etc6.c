#include <stdio.h>

int main(){
    int n;
    printf("Enter a fib number : ");
    scanf("%d",&n);

    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for(int i=2; i<=n; i++){ //i = 2 3 4 5
        fib[i]=fib[i-1]+fib[i-2]; // 0 1 1 2 3 5 8 13 21 34
        // if n = 5
        // fib[1,1,2,3,5]
    }
    for(int i=0; i<=n; i++){
        printf("%d \t",fib[i]);
    }

    return 0;
}
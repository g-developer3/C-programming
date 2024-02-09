#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;


    for(int i=0; i<n/2; i++){
        int temp = arr[i]; // 1 2 3 4
        arr[i]= arr[n-1-i]; // 1 2 3 4 => 6 5 4 3
        arr[n-1-i]= temp; // 6 5 4 3 => 1 2 3 4
                            // 6 5 4 3 2 1 
    }

    for(int i=0; i<n; i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}

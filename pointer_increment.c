#include <stdio.h>

int main(){
    int aadhar[3];
    int *ptr = &aadhar[0];
    for(int i=0; i<3; i++){
        printf("Enter %d value : ",i);
        scanf("%d",(ptr+i));
    }

    for(int i=0; i<3; i++){
        printf("%d index = %d \n",i,*(ptr+i));
    }

    return 0;
}
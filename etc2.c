#include <stdio.h>
// See YOur pErcenteces
int main(){
    float value[2];
    printf("Enter Your score : ");
    scanf("%f",&value[0]);
    printf("Enter Your full score : ");
    scanf("%f",&value[1]);

    printf("Your percent is %f ",value[0]*100/value[1]);
    return 0;
}
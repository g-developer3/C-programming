#include <stdio.h>
// See Your sCore
int main(){
    float value[2];
    printf("Enter Your full score : ");
    scanf("%f",&value[0]);
    printf("Enter Your percentes : ");
    scanf("%f",&value[1]);

    printf("Your score is %f", value[0]*value[1]/100);
    return 0;
}
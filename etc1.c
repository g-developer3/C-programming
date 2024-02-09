#include <stdio.h>
// Per kg rate calculation
// Per kg gram calculation
int main(){
    float value[2];
    printf("Enter a price :");
    scanf("%f",&value[0]);
    printf("Enter a gram/kg :");
    scanf("%f",&value[1]);

    printf("Your %f per kg rate \n",value[0]/value[1]*1000);
    return 0;
}
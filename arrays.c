#include <stdio.h>

int main(){
    int marks[3];
    printf("math : ");
    scanf("%d",&marks[0]);
    printf("English : ");
    scanf("%d",&marks[1]);
    printf("Computer : ");
    scanf("%d",&marks[2]);

    printf("Math : %d,English : %d,Computer : %d \n",marks[0],marks[1],marks[2]);
    printf("Your percent is %d \n",(marks[0]+marks[1]+marks[2])*100/300);
   return 0;
}
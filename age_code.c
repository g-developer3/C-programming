#include <stdio.h>
// Comment me, is it correct code?
int main(){
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    if(age>=1 && age<10){
        printf("You are A kid You should go to School.");
    }else if(age>=18 && age<30){
        printf("You are a Younger person. Earn Money and Enjoy Your Life.");
    }else if(age>=30 && age<=50){
        printf("You are a Gental-Man. Earn More and Save for Retire life.");
    }else if(age>50 && age<70){
        printf("You are a Retired person. Enjoy life with happy.");
    }else if(age>=70 && age<100){
        printf("You are Old man. Please try to Drink more water and eat healty food in this age.");
    }else{
        printf("Invalid Age. Please Retry with Correct Age.");
    }
    return 0;
}

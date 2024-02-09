#include <stdio.h>
#include <Math.h>
int main(){
   /*
    int number;
    printf("Enter a Number : ");
    scanf("%d",&number);
    if(number>30 && number<=100){
        printf("Pass");
    }else if(number>=0 && number<=30){
        printf("Fail");
    }else{
        printf("Invalid");
    }
    */
/*
   int marks;
   printf("Enter your Marks : ");
   scanf("%d",&marks);
   if(marks<30){
    printf("C");
   }else if(marks>=30 && marks<70){
    printf("B");
   }else if(marks>=70 && marks<90){
    printf("A");
   }else if(marks>=90 && marks<=100){
    printf("A+");
   }else{
    printf("Invalid try again");
   }
   */
  /*
  int x=2;
  if(x=0){
    printf("x is equal to 1");
  }else {
    printf("X is not equal to 1");
  }
  */
 char letter;
    printf("Enter a Letter : ");
    scanf("%c",&letter);
    if(letter>='A' && letter<='Z'){
        printf("Upper case %c",letter);
    }else if(letter>='a'&& letter<='z'){
        printf("lower case %c",letter);
    }else{
        printf("Invalid Charactor %c",letter);
    }
    return 0;
}
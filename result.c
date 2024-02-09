#include <stdio.h>

float result(float science,float math,float sanskrit);

int main(){
    float finalMarks = result(49,70,45);
    printf("Your marks is %f ",finalMarks);
    return 0;
}

float result(float science,float math,float sanskrit){
    // total of result * 100 / final marks
    float finalMarks = (science + math + sanskrit) * 100 / 300;
    return finalMarks;
}
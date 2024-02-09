#include <stdio.h>
int main(){
    // printf("hello World");
    /*char day[20];
    printf("Enter a Day : ");
    scanf("%s",&day);
    if(day=="Monday"){
        printf("Today is Monday, You can cut Your nails and hair(for Men) Today");
    }else if(day=="Tuesday"){
        printf("Today is Tuesday,Don't try to eat Non-Veg today.");
    }else if(day=="Wednesday"){
        printf("Today is Wednesday, Are You Going to Vinayaka Mandir for praying?");
    }else if(day=="Thursday"){
        printf("Today is Thursday, Are You Washing Cloths today?");
    }else if(day=="Friday"){
        printf("Today is Friday, if you are Muslim Then go for Namaj");
    }else if(day=="Saturday"){
        printf("Today is Saturday, Make plan to go on Trip tomarrow");
    }else if(day=="Sunday"){
        printf("Today is Sunday, Enjoy Your day go to trip and make party with friends.");
    }else {
        printf("Write Correct Day full Name with first letter Capital");
    }*/

    int day;
    printf("Enter a Day : ");
    scanf("%d",&day);
    switch(day){
        case 1 : printf("its Monday");
        break;
        case 2 : printf("its Tuesday");
        break;
        case 3 : printf("its Wednesday");
        break;
        default:printf("Invalid");
    }
    return 0;
}
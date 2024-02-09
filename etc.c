#include <stdio.h>
// for GST calculation
int main(){
    float price[3];
    printf("Enter 1st item price : ");
    scanf("%f",&price[0]);
    printf("Enter 2nd item price : ");
    scanf("%f",&price[1]);
    printf("Enter 3rd item price : ");
    scanf("%f",&price[2]);

    printf("Your 1st item with gst cost %f \n",price[0]+(price[0]*.18));
    printf("Your 2nd item with gst cost %f \n",price[1]+(price[1]*.18));
    printf("Your 3rd item with gst cost %f \n",price[2]+(price[2]*.18));
    return 0;
}
#include <stdio.h>
float Temp(float celsius);

int main(){
    float feh = Temp(37);
    printf("Your temprature in Fehrenheit %f ",feh);
    return 0;
}

float Temp(float celsius){
   float feh = celsius * (9.0/5.0) + 32;
   return feh;
}
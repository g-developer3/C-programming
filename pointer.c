#include <stdio.h>

int main(){
    int age = 20;
    int *hello = &age;
    int _age = *hello;
    printf("my age adress %d \n", _age);
    printf("my age adress %d \n", *hello);
    return 0;
}
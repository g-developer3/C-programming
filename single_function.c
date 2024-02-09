#include <stdio.h>

void num_table(int table);

int main(){
    int table;
    printf("Enter a Number : ");
    scanf("%d",&table);

    num_table(table);
    return 0;
}

void num_table(int table){
    for(int i=1; i<=10; i++){
        printf("%d \n",table*i);
    }
    
}
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a factorial number : ");
    scanf("%d",&num);
    int fact;
    for(int i=1; i<=num; i++){
        // i +=1;
        printf("%d \n",i);
    }
    return 0;
}
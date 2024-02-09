#include <stdio.h>
#include <math.h>

float AreaOfRectengle(float length, float width);
float AreaOfSquare(float side);
float AreaOfCircle(float square);

int main()
{
    float side = 5.0;
    float length = 10.0;
    float width = 4.0;
    float square = 5.0;

 float square1 =  AreaOfCircle(square);
 printf("Your area of square is : %f \n",square1);

float sideSquare = AreaOfSquare(side);
printf("Your area of a Square-side %f \n",sideSquare);

float rectengle = AreaOfRectengle(length,width);
 printf("Your area of Rectengle %f \n",rectengle);
    return 0;
}
 
float AreaOfSquare(float side)
{
    // side * side
    return side * side;
}

float AreaOfRectengle(float length, float width)
{
    // length * width
    return length * width;
}

float AreaOfCircle(float square)
{
    // 3.14 * square * square
    return 3.14 * square * square;
}

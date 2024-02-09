#include <stdio.h>

int main()
{
    // 3*3

    int marks[3][3][3];
    marks[0][0][0] = 92;
    marks[0][1][0] = 87;
    marks[0][2][0] = 62;
    marks[1][0][0] = 73;
    marks[1][1][0] = 86;
    marks[1][2][0] = 90;
    marks[2][0][0] = 85;
    marks[2][1][0] = 66;
    marks[2][2][0] = 77;

    printf("%d", marks[2][1][0]);

    return 0;
}
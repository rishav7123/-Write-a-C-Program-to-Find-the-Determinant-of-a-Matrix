// Write a ‘C’ Program to Find the Determinant of a Matrix
#include <stdio.h>

int main() {
    int a[3][3] = {
        {2, 4, 5},
        {1, 5, 7},
        {2, 8, 6}
    };

    int determinant;

    determinant = a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1])
    - a[0][1]*(a[1][0]*a[2][2])-(a[1][2]*a[2][0])
    + a[0][2]*(a[1][0]*a[2][1])-(a[1][1]*a[2][0]));
    printf("The determinant of the matrix is: %d\n", determinant);
    return 0;
}

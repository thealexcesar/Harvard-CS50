// Truncation

#include <stdio.h>

int main(void)
{
    int x, y;
    float z;
    
    printf("X: ");
    scanf("%i", &x);
    printf("y: ");
    scanf("%i", &y);
    
    // Convert int to float
    z = (float) x / (float) y;
    printf("%.2f\n", z);
}

#include <stdio.h>
/**
 * @return convert int to float
 */
int main(void)
{
    int x, y;
    float z;
    
    printf("X: ");
    scanf("%i", &x);
    printf("y: ");
    scanf("%i", &y);

    z = (float) x / (float) y;
    printf("%.2f\n", z);
}

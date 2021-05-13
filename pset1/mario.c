#include <stdio.h>
/**
 * A program prints a pyramid using chopsticks as bricks 
 * @see https://cs50.harvard.edu/x/2021/psets/1/mario/more/ 
 * @author thealexcesar
 */
int main(void)
{
    int size;
    do {
        printf("Height: ");
        scanf("%i", &size);
    }
    while (size > 8 || size <= 0);

    for (int i = 0; i < size; i++) {
        // prints the initial spaces to make it look like a pyramid.
        for (int k = 0; k < size - i - 1; k++) {
            printf(" ");
        }
        // First half of the pyramid.
        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }
        // Spaces in the middle of the pyramid.
        printf("  ");
        // Second half of the pyramid.
        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }
        puts("");
    }
}

#include <stdio.h>
/**
 * By CS50. 
 * A program to calculate Complete the implementation of population.c,
 * such that it calculates the number of years required for the population
 * to grow from the start size to the end size.
 * @see https://cs50.harvard.edu/x/2021/labs/1/population/
 * @author alex cesar
 */
int main(void)
{
    int start, end, years = 0;
    do
    {
        printf("Type start size: ");
        scanf("%i", &start);
        printf("%i\n", start);
    }
    while (start < 9);

    do
    {
        printf("Type end size: ");
        scanf("%i", &end);
        printf("%i\n", end);
    }
    // Requesting end > start
    while (end < start); 
    
    // Using formula
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }
    printf("Years: %i\n", years);
}
#include <stdio.h>

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
    while (end < start); // Requesting end > start
    
    while (start < end) // Using formula
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }
    printf("Years: %i\n", years);
}
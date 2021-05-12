#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
/**
 * A greedy algorithm.
 * A program that first asks the user how much change
 * is owed and then prints the minimum number of coins.
 * @author thealexcesar
 */
int main(void)
{
    float change;
    do {
        printf("Change owed: ");
        scanf("%f", &change);
    }      
    while (change < 0 );
    
    // Convert to int
    float coins;
    coins = change * 100; 
    
    // Find out how many of each coin
    int counter = 0;
    while (coins >= 25) {
        coins -= 25;
        counter ++;
    }
    while (coins > 9) {
        coins -= 10;
        counter ++;
    }
    while (coins > 4) {
        coins -= 5;
        counter ++;
    }
    counter += coins;
    printf("%i\n", counter);
}

/* #include <cs50.h>
#include <stdio.h>
#include <math.h>
/**
 * A program that first asks the user how much change
 * is owed and then prints the minimum number of coins.
 * @author thealexcesar
 */

/*
int main(void)
{
    float change;
    do
    {
        change = get_float("Change owed: ");
    }      
    while (change < 0);
    
    //convert change to int
    int coins = round(change * 100);
    
    //find out how many of each coin
    int counter = 0;
    while (coins > 24)
    {
        coins = coins - 25;
        counter ++;
    }
    while (coins > 9)
    {
        coins = coins - 10;
        counter ++;
    }
    while (coins > 4)
    {
        coins = coins - 5;
        counter ++;
    }
    counter = counter + coins;
    printf("%i\n", counter);
} */
#include <stdio.h>
#include <math.h>

int how_many(int amount, int *coin);

int main(void)
{
    int coin_types[4] = {25, 10, 5, 1};
    float amount;
    // ask for the amount until the user gives a valid number.
    do
    {

        scanf("%f", &amount);
    }
    while (amount <= 0);
    // calling the how_many function passing in the integer of the amount.
    printf("%d many coins\n", how_many(roundf(amount) * 100, coin_types));
}
// this function takes in the amount as an integer and takes in an array of ints that contain the types of cions and than outputs the least amount of cions that the user could use.
int how_many(int amount, int *coin_types)
{
    int coins = 0;
    for (int i = 0; i < 4; i++)
    {
        // while the amount is bigger of equal to the current coins type then subtract the coin_type from the amount and increment coins.
        while (amount >= coin_types[i])
        {
            coins++;
            amount -= coin_types[i];
        }
    }
    return coins;
}
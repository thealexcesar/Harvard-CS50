#include <stdio.h>
#include <ctype.h>
#include <string.h>
/***********************************************************
 * A program to complete the implementation of scrabble.c, such that
 * it determines the winner of a short scrabble-like game, where two
 * players each enter their word, and the higher scoring player wins.
 * @see https://cs50.harvard.edu/x/2021/labs/2/
 * @author thealexcesar
 **********************************************************/
// Points assigned to each letter of the alphabet 
const int POINTS[27] = {
1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1,
1, 4, 4, 8, 4, 10};

// Ascii values for lower letters of alphabets
int small_letters[27] = {
97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110,
111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

// Ascii Values for upper letters of alphabets
int capital_letters[27] = {
65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
int temp_Points [] = {};

int compute_score(char word[27]);

int main(void)
{
    // Get input words from both players
    char word1[27]; 
    printf("Player 1: ");
    fgets(word1, 27, stdin);
    char word2[27]; 
    printf("Player 2: ");
    fgets(word2, 27, stdin);

    // Calculates Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print the winner
    if (score1 > score2) {
        printf("Player 1 wins\n");
    }
    else if (score2 > score1) {
        printf("Player 2 wins\n");
    }
    else {
        printf("Tie\n");
    }
}

int compute_score(char word[27])
{
    int score = 0;
    for (int i = 0; i < strlen(word); i++) {
        // Checks if letter is upper
        if (isupper(word[i])) {
            /* If the letter is upper find the words from capital_letters array according to ASCII
             * if capital letter is found takes its index and assign points to temp_Points array 
             * adds tem_points value to int score to calculate the total score. */
            for (int j = 0; j < sizeof(capital_letters); j++) {
                if (word[i] == capital_letters[j]) {
                    temp_Points[i] = POINTS[j];
                    score += temp_Points[i];
                }
            }
        }
        else if (islower(word[i]))
        {
            for (int k = 0; k < sizeof(small_letters); k++) {
                if (word[i] == small_letters[k]) {
                    temp_Points[i] = POINTS[k];
                    score += temp_Points[i];
                }
            }
        }
        else {
            i += 1;
        }
    }   
    return score;
}
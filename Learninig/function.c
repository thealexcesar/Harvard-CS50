// Test Functions
#include <stdio.h>

void Log();

int main(void)
{
    Log();
}

void Log()
{
    char string[10];
    {
        printf("Name: ");
        scanf("%s", string);
    }
    printf("\nHello, %s!\n\n", string);
}
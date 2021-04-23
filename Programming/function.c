#include <stdio.h>
/**
 * @param Functions
 */
void input();
void Log();

int main(void)
{
    Log("This is my program.\n");
    input();
}

void input()
{
    char string[10];
    {
        printf("Name: ");
        scanf("%s", string);
    }
    printf("\nHello, %s\n\n", string);
}

void Log(char s[22])
{
    printf("%s", s);
}
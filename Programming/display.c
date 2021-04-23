#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int n;
    puts("  n\t  n²");
    puts("-----\t-----");
    
    for (n = 1; n <= 10; n++) {
        printf("%3i\t%4i\n", n, n * n);
        sleep(1);
    }
}
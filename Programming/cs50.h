#include <stdio.h>

int get_negative(char x)
{
    int n;
    do {
        printf(x);
        scanf("%i\n", &n); 
    }
    while (n < 0);
    return n;
}
long long get_long_long(const char *format, ...)
 __attribute__((format(printf, 1, 2)));
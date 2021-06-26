#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("Test%s\n", argv[0]);
    if (argc > 1 && argc < 4) {
        printf("hello, %s %s\n", argv[1], argv[2]);
    }
    else {
        puts("Please enter arg!");
        return 1;
    }
    return 0;
}
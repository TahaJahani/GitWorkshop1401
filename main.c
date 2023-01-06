#include <stdio.h>


int function()
{
    printf("I am a useless function!\n");
    return 2;
}

int test()
{
    return 2 * 5;
}

int new_function(int age)
{
    if (age > 18)
    {
        printf("Hello and welcome!\n");
    } else {
        printf("You are not allowed!\n");
    }
}

int main()
{
    printf("How are you?\n");
    return 0;
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompting the user to enter their name
    string name = get_string("What's your name? ");
    // Printing the user's name
    printf("hello, %s\n", name);
}


// Including the necessary header files
#include <cs50.h>
#include <stdio.h>

int size(void);
void build(int bricks, int spaces);

int main(void)
{
// Prompting the user to input pyramid's height
    int n = size();
    int x = n;
    for (int i = 0; i < n; i++)
    {
        build(i + 1, x - 1);
        x--;
    }
}

// Defining the size() function
int size(void)
{
    int n;
    do
    {
        n = get_int("Size:");
    }
    while (n < 1);
    return n;
}

// Defining the build() function
void build(int bricks, int spaces)
{
    for (int j = spaces; j > 0; j--)
    {
        printf(" ");
    }
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}

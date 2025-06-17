#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int x = get_int("enter the value of x \n");
    int y = get_int("enter the value of y \n");
    if(x > y)
    {
        printf("x is > than y \n");
    }
    else if (x < y)
    {
        printf("x is < than y \n");
    }
    else
    {
        printf("x = y\n");
    }
}

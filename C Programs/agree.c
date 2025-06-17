#include <stdio.h>
#include <cs50.h>
int main(void)
{
    char chr = get_char("Do You Agree?");
    if (chr == 'y' || chr == 'Y')
    {
        printf("Agreed\n");
    }
    else if (chr == 'n' || chr == 'N')
    {
        printf("Not Agreed\n");
    }
}

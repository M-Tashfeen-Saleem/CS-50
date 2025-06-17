#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    //Prompting the user to enter data(i.e text)
    string text = get_string("Before:");
    printf("After: ");
    /*Converting lowercase letters to uppercase
    Here strlen() function finds length of string(i.e text)*/
    for(int i = 0,n = strlen(text);i < n ;i++)
    {
         printf("%c",toupper(text[i]));
    }
    printf("\n");

}


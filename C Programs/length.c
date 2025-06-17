#include <stdio.h>
#include <cs50.h>

/*This is a custom function for finding the length of a string...
 There already exists a function called strlen(for finding length of a string)
 in string.h library
*/

  //Declaration of strlength function
int strlength(string text);

int main(void)
{
   //Prompting the user to enter string of text/characters
   string text = get_string("Enter text:");
   //Printing length of string
   printf("%i\n",strlength(text));
}

  //Defining strlength function
int strlength(string text)
{
    int n = 0;
   while(text[n] != '\0')
   {
      n++;
   }
   return n;
}

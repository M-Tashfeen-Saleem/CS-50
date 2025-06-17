  //Importing the necessary libraries
#include <stdio.h>
#include <cs50.h>
#include <string.h>
typedef struct
{
    string name;
    string number;
}
 person;
int main(void)
{
   person people[2];

   people[0].name = "Daniel";
   people[0].number = "+92-1234567890";

   people[1].name = "Jhon";
   people[1].number = "+92-0987654321";
    //Prompting the user to enter the name of the person they want to search number of
   string name = get_string("Name:");
    //Checking if the input data exits in array "people" using strcmp() function
   for(int i=0;i<2;i++)
   {
      if(strcmp(people[i].name,name) ==0)
      {
        printf("Found! Number:%s\n",people[i].number);
        return 0;
      }
   }
   printf("Not Found...\n");
   return 1;
}

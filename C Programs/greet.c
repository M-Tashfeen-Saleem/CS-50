#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(int argc,string argv[])
{
  if(argc != 2){
    printf("Missing command-line argument\n");
    return 1;
  }
  else{
    printf("hello,%s\n",argv[1]);
    return 0;
  }

}

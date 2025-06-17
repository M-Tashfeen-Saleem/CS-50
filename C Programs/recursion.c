#include <stdio.h>
#include <cs50.h>

void test(int n);

int main(void)
{
  int n = get_int("Size:");
  test(n);
}

void test(int n)
{

    if(n<=0){
        return;
    }
   test(n-1);
   for(int i=0;i<n;i++)
   {
      printf("#");
   }

   printf("\n");
}

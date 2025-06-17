#include <stdio.h>
#include <cs50.h>

  //  Declaration of average function
float average(int length,float array[]);
  // Numbers you want to find average of:
const int N = 3;
int main(void)
{
  // Prompt the user to enter numbers
   float numbers[N];
   for(int i=0;i<N;i++)
   {
    numbers[i] = get_float("Numbers:");
   }
  //Print the average
  printf("Average:%f\n",average(N,numbers));
}

  // Defining average function
float average(int length,float array[])
{
  int sum = 0;
  for(float i=0;i<length;i++)
  {
    sum = sum + array[i];
  }
   return sum / (float) length;
}

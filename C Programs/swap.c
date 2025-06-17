//An example of passing by reference...
#include <stdio.h>

#include <cs50.h>

void swap(int *x,int *y);
int main(void)
{
    int a = 111;
    int b = 222;

    printf("a:%i\nb:%i\n",a,b);
    printf("address of a:%p\naddress of b:%p\n",&a,&b);
    swap(&a,&b);
    printf("\tAfter swapping:\n");
    printf("a:%i\nb:%i\n",a,b);
    printf("address of a:%p\naddress of b:%p\n",&a,&b);

}

void swap(int *x,int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

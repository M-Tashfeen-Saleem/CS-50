#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickles(int cents);
int calculate_pennies(int cents);

int main(void)
{

    // Prompt the customer for change owed (in cents)
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);


    // Calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);
    cents = cents - (quarters * 25);

    // Calculate how many dimes you should give customer
    int dimes = calculate_dimes(cents);
    cents = cents - (dimes * 10);

    // Calculate how many nickles you should give customer
    int nickles = calculate_nickles(cents);
    cents = cents - (nickles * 5);

    // Calculate how many pennies you should give customer
    int pennies = calculate_pennies(cents);
    cents = cents - (pennies * 1);

    // Sum up the total coins and print them out
    int coins = quarters + dimes + nickles + pennies;
    printf("%i\n", coins);

    return 0;
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        dimes++;
    }
    return dimes;
}

int calculate_nickles(int cents)
{
    int nickles = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        nickles++;
    }
    return nickles;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        cents = cents - 1;
        pennies++;
    }
    return pennies;
}

#include <stdio.h>
#include <cs50.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // ask how many cents
    int cents = get_cents();

    // calculate nb of quarters to give
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // calculate nb of dimes to give
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

     //calculate nb of nickels to give
     int nickels = calculate_nickels(cents);
     cents = cents - nickels * 5;

    //calculate nb of pennies to give
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // sum total of coins
    int coins = quarters + dimes + nickels + pennies;

    // print coins to give customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("Cents owed: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        quarters++;
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

int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        nickels++;
    }
    return nickels;
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

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int coins_owed;
    float change_owed;
    int total_coins=0;

    do
    {
        change_owed= get_float("Change owed:");
        coins_owed =round(change_owed * 100);
    }
    while (0>change_owed);
    
    if (coins_owed >= 25)
    {
        int quarters= floor(coins_owed/25);
        coins_owed= coins_owed % 25;
        total_coins= quarters;
    }

    if (coins_owed <25 && coins_owed>=10)
    {
        int dimes= floor(coins_owed/10);
        coins_owed= coins_owed % 10;
        total_coins= quarters + dimes;
    }

    if (coins_owed <10 && coins_owed>=5)
    {
        int nickels= floor(coins_owed/5);
        coins_owed= coins_owed % 5;
        total_coins= quarters + dimes + nickels;
    }

    if (coins_owed <5 && coins_owed>=1)
    {
        total_coins= total_coins + coins_owed
    }

    printf("total_coins\n");    
   
}




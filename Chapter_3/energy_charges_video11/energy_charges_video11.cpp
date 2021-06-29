#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int KWh_new, KWh_old, KWh_consumed, KWh_consumed_new;
    double priceTotal, priceTmp200, priceTmp400, priceTmp600;

    cout << "Enter the old and new meter readings: ";
    cin >> KWh_old >> KWh_new;

    KWh_consumed = KWh_new - KWh_old;

    if(KWh_consumed < 0)
    {
        cout << "Number of units consumed can't be less than zero.";
        exit(0);
    }

    // price constants, only stated ones, so out of the if statement
    priceTmp200 = 200 * 0.5;
    priceTmp400 = priceTmp200 + (200 * 0.65);
    priceTmp600 = priceTmp400 + (200 * 0.80);

    if(KWh_consumed >= 600)
    {
        KWh_consumed_new = KWh_consumed - 600;
        priceTotal = priceTmp600 + (KWh_consumed_new * 0.90);
    }
    else if(KWh_consumed >= 401)
    {
        KWh_consumed_new = KWh_consumed - 400;
        priceTotal = priceTmp400 + (KWh_consumed_new * 0.80);
    }
    else if(KWh_consumed >= 201)
    {
        KWh_consumed_new = KWh_consumed - 200;
        priceTotal = priceTmp200 + (KWh_consumed_new * 0.65);
    }
    else if(KWh_consumed <= 200)
    {
        priceTotal = KWh_consumed * 0.5;
    }
    // out of if statements so that it's only stated one time, round and cout(print)
    priceTotal = round( priceTotal * 100.0 ) / 100.0;
    cout << "Electricity bill = "<<priceTotal<<"$"<<endl;
    
    return 0;    
}
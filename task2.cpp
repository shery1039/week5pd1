#include <iostream>
using namespace std;

void Tax(char type, int price);

main()
{
    char type;
    int price;
    Tax(type, price);
}

void Tax(char type, int price)
{
    cout << "Enter the vehicle type:(M,E,S,V,T): ";
    cin >> type;
    cout << "Enter the Price of vehicle: ";
    cin >> price;

    if (type = 'E')
    {
        float Tax_amount = (price * 8) / 100;
        float cal = Tax_amount + price;
        cout << "The Final Price of vehicle is: " << cal;
    }
    else if (type = 'S')
    {
        float Tax_amount1 = (price * 10) / 100;
        float cal1 = Tax_amount1 + price;
        cout << "The Final Price of vehicle is: " << cal1;
    }
    else if (type = 'V')
    {
        float Tax_amount2 = (price * 12) / 100;
        float cal2 = Tax_amount2 + price;
        cout << "The Final Price of vehicle is: " << cal2;
    }
    else if (type = 'T')
    {
        float Tax_amount3 = (price * 15) / 100;
        float cal3 = Tax_amount3 + price;
        cout << "The Final Price of vehicle is: " << cal3;
    }
}
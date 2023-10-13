#include <iostream>
using namespace std;

void Pyramid(int height, int width, int length, string desire);

main()
{
    int height, width, length;
    cout << "Enter the height of Pyramid (in meters): ";
    cin >> height;
    cout << "Enter the width of Pyramid (in meters): ";
    cin >> width;
    cout << "Enter the length of pyramid (in meters): ";
    cin >> length;
    string desire;
    cout << "Enter the desired output unit (millimeters,centimeters,kilometers): ";
    cin >> desire;
    Pyramid(length, height, width, desire);
}

void Pyramid(int height, int width, int length, string desire)
{
    float formula = (length * width * height) / 3;

    if (desire == "meters")
    {
        cout << "Your answer in cubic meters is " << formula;
    }

    if (desire == "centimeters")
    {
        float formula2 = formula * 100 * 1000;
        cout << "Your answer in centi is " << formula2;
    }

    if (desire == "millimeters")
    {
        float formula2 = formula * 1000 * 1000;
        cout << "Your answer in millimeters is " << formula2;
    }

    if (desire == "kilometers")
    {
        float formula2 = formula /100;
        cout << "Your answer in kilo is " << formula2;
    }
}

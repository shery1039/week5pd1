#include <iostream>
using namespace std;

string projectTimeCalculation(int hours, float days, int workers);

int main()
{
    int hours;
    float days;
    int workers;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of days: ";
    cin >> days;
    cout << "Enter the number of workers: ";
    cin >> workers;
    string result = projectTimeCalculation(hours, days, workers);
    cout << result << endl;
}

string projectTimeCalculation(int hours, float days, int workers)
{

    float cal = (days * 10) / 100;
    float remainingdays = days - cal;
    float cal1 = remainingdays * 10;
    float cal2 = cal1 * workers;

    if (cal2 > hours)
    {
        int result1 = cal2 - hours;
        return "Yes! " + to_string(result1) + " hours left.";
    }
    else if (cal2 < hours)
    {
        int result2 = hours - cal2;
        return "NO! " + to_string(result2) + " hours needed.";
    }
    else
    {
        return "Work is completed on time!";
    }
}

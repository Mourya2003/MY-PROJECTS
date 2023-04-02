#include <iostream>
#include <string>

using namespace std;

int main()
{
    int year, month, day;
    cout << "Enter a date (YYYY MM DD): ";
    cin >> year >> month >> day;

    int century = year / 100;
    int yearCode = year % 100;
    int centuryCode = 2 * (3 - century % 4);

    int monthCodes[] = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};
    int monthCode = monthCodes[month - 1];
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        if (month == 1 || month == 2)
        {
            monthCode -= 1;
        }
        yearCode -= 1;
    }

    int dayCode = (day + yearCode + yearCode / 4 + monthCode + centuryCode) % 7;

    string daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    string dayOfWeek = daysOfWeek[dayCode];

    cout << "The day of the week for " << year << "-" << month << "-" << day << " is " << dayOfWeek << endl;

    return 0;
}

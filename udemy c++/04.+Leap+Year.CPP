#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}





//m-2 chatGPT: short-way 

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout << year << " is a leap year.";
    else
        cout << year << " is not a leap year.";

    return 0;
}






// m-3

bool isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

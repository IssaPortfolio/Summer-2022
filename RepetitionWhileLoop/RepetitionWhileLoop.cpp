
#include<iostream>
using namespace std;

int main()
{
    // Variables
    int iHoursTotal = 0;

    int iDay = 0;
    int iHours;
    while (iDay < 7)
    {
        iDay += 1;
        cout << "Enter the amount of hours of gaming you played on day " << iDay << ": ";
        cin >> iHours;

        iHoursTotal = iHoursTotal + iHours;
    }

    cout << "" << endl;
    cout << "You played " << iHoursTotal << " hours this week!" << endl;

    system("pause");
    return 0;

}


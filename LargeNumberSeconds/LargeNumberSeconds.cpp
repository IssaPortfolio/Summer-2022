// PROGRAM THAT CONVERTS SECONDS INPUT TO HOURS, MINUTES, AND SECONDS, BY ISSA HABEEB
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// IOSTREAM GIVES US THE SIMPLE STUFF LIKE COUT AND CIN FOR INPUT AND OUTPUT. NAMESPACE STD IS SO WE DON'T NEED TO DO STD::COUT AND STD:CIN, ETC...
#include <iostream>
using namespace std;

// CONSTANTS
const int SECONDS_IN_HOUR = 3600;
const int SECONDS_IN_MINUTE = 60;


// ASK USER TO INPUT SECONDS AND AUTOMATICALLY CONVERTS IT TO HOURS, MINUTES, AND LEFTOVER SECONDS
int main()
{
    // INTRODUCTION
    cout << "*******************************************************************\n"
         << "*************** Welcome to my first program ***********************\n"
         << "Convert a large number of seconds into hours, minutes, and seconds.\n"
         << "*******************************************************************\n" << endl;

    // USER SECONDS INPUT
    int seconds_Input; // INITILIZES THE VARIABLE (C++ WILL ASSIGN IT A RANDOM NUMBER)
    cout << "Please enter a large number of seconds: ";
    cin >> seconds_Input;

    // PRINTS USER SECONDS INPUT TO HOURS
    int seconds_To_Hours = seconds_Input / SECONDS_IN_HOUR;
    cout << "The number of hours in the number is : " << seconds_To_Hours << endl;

    // PRINTS LEFTOVER MINUTES FROM HOURS
    int seconds_To_Minutes = seconds_Input / SECONDS_IN_MINUTE % SECONDS_IN_MINUTE;
    cout << "The number of minutes in the number is: " << seconds_To_Minutes << endl;

    // PRINTS LEFTOVER SECONDS FROM MINUTES
    int leftover_Seconds = seconds_Input % SECONDS_IN_MINUTE;
    cout << "The number of seconds in the number is: " << leftover_Seconds << endl;

    // PAUSES EXE FILE UPON COMPLETION OF THIS FUNCTION
    system("pause");

    // RETURNS INT 0 TO THE FUNCTION MAIN
    return 0;
}

// I struggled mostly with minutes and seconds. I learned there is a difference between / and % arithmetic operators. This YouTube video helped https://youtu.be/vQUoisBnM5M by Chidre'sTechTutorials
// Lets use 73 % 72 as an example. 72 x 1 = 72 and the remainder is 1 because 73 - 72 = 1. The % is basically the remainder so the answer is 1.
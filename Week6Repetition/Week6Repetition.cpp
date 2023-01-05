#include <iostream>  // GIVES "cin" AND "cout"...
#include <iomanip>   // GIVES "setfill(char)", "setw(int)" AND "setprecision(int)"...
using namespace std;

// STUDENT GRADES AND CLASS AVERAGE
int main()
{
    cout << setfill(' ') << fixed << setprecision(2);

    // NUM OF STUDENTS
    const int TOTAL_STUDENTS = 6;

    // STUDENT SCORES
    double issa = 90.51, jack = 65.36, kevin = 70.53, daniel = 89.85, carl = 94.30, sofia = 100.00;
    double gradeList[TOTAL_STUDENTS] = { issa, jack, kevin, daniel, carl, sofia };

    // STUDENT NAMES
    string student_names[TOTAL_STUDENTS] = { "Issa", "Jack", "Kevin", "Daniel", "Carl", "Sofia" };

    // ADDS ALL GRADES IN THE LIST
    int index = 0;
    double gradeTotal = 0;
    for (index; index <= TOTAL_STUDENTS -1; index++)
    {
        cout << left << student_names[index] << " scored: " << setw(12 - student_names[index].length()) << right << gradeList[index] << "%" << endl;
        gradeTotal += gradeList[index];
    }

    // FINDS THE AVERAGE
    double gradeAverage = gradeTotal / TOTAL_STUDENTS;
    cout << "\n" << left << "Average grade: " << setw(4) << right << gradeAverage << "%\n" << endl;

    system("pause");
    return 0;
}



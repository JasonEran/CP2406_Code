/* Practical 1 - Question 3
   Read a salary and use a switch statement to determine the position:
   - salary < 6000   : engineer
   - 6000 <= salary <= 8000 : senior engineer
   - salary > 8000   : manager
*/
#include <iostream>
using namespace std;

int main()
{
    float salary;
    cout << "Please enter your salary in dollars:" << endl;
    cin >> salary;

    int band;
    if (salary < 6000.0f)
        band = 0;
    else if (salary <= 8000.0f)
        band = 1;
    else
        band = 2;

    switch (band)
    {
    case 0:
        cout << "Position: engineer" << endl;
        break;
    case 1:
        cout << "Position: senior engineer" << endl;
        break;
    case 2:
        cout << "Position: manager" << endl;
        break;
    default:
        cout << "Invalid input." << endl;
    }

    return 0;
}

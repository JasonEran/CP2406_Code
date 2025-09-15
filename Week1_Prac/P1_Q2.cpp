/* Practical 1 - Question 2
   Read a float number, cast it to int, and report whether it is positive or negative.
*/
#include <iostream>
using namespace std;

int main()
{
    float number;
    cout << "Please enter a float number:" << endl;
    cin >> number;

    int asInt = (int)number;   // type casting as shown in introductory C++ style
    cout << "After casting to int, value = " << asInt << endl;

    if (asInt > 0)
        cout << "The number is positive." << endl;
    else if (asInt < 0)
        cout << "The number is negative." << endl;
    else
        cout << "The number is zero." << endl;

    return 0;
}

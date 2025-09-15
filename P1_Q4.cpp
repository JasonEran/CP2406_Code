/* Practical 1 - Question 4
   Define a structure for a car, read its fields from the user, and print them.
*/
#include <iostream>
using namespace std;

struct Car
{
    char colour[20];
    char make[30];
    int  year;
};

int main()
{
    Car c;

    cout << "Please enter the car colour:" << endl;
    cin.ignore(10000, '\n');   // clear leftover newline from previous input (safe even if none)
    cin.getline(c.colour, 20);

    cout << "Please enter the car make:" << endl;
    cin.getline(c.make, 30);

    cout << "Please enter the car year:" << endl;
    cin >> c.year;

    cout << "You entered -> "
        << "Colour: " << c.colour << ", "
        << "Make: " << c.make << ", "
        << "Year: " << c.year << endl;

    return 0;
}

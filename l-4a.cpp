// COMSC-210 | Lab 4A | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// A structure to hold color information
struct Color
{
    string name;
    int red;
    int green;
    int blue;
};

int main ()
{
    vector<Color> colors(13); // Vector to hold 13 colors

    int i; // Cycle counter
    i = 0; // Zero cycles so far

    while(i < 13) // Does exactly 10 cycles
    {
        cout << "Color#: ";
        cin >> colors[i].name;
        cout << "R value: ";
        cin >> colors[i].red;
        cout << "G value: ";
        cin >> colors[i].green;
        cout << "B value: ";
        cin >> colors[i].blue;
        i++; // Increment cycle counter
    }


    return 0;
}
// COMSC-210 | Lab 4A | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>
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
    srandtime(0); // Seed the random number generator
    25 + (rand() % 50) = n; // Random number between 25 and 50

    int i // Cycle counter
    i = 0; // Zero cycles so far

    while(i < n) // Does exactly n cycles
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

    vector<vector<Color>> colors;

    vector<vector<Color>> colors = {
        vector<Color>(name, red, green, blue)
    };

    vector<vector<Color>>colors(1, vector<Color>(n));

    return 0;
}
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

    while(i != n) // Does exactly n cycles
    {
        Color temp;

        cout << "Color#: ";
        cin >> temp.name;

        cout << "R value: " << (temp.red = rand() % 256) << endl; // Random number between 0 and 255
        cin >> temp.red;
        cout << "G value: " << (temp.green = rand() % 256) << endl; // Random number between 0 and 255
        cin >> temp.green;
        cout << "B value: " << (temp.blue = rand() % 256) << endl; // Random number between 0 and 255
        cin >> temp.blue;
        i++; // Increment cycle counter

        colors.push_back(temp); // Add the temp Color to the vector
    }

    vector<vector<Color>> colors;

    vector<vector<Color>> colors = {
        vector<Color>(temp.name, temp.red, temp.green, temp.blue)
    };

    vector<vector<Color>> colors(n, vector<Color>(4)); // Create a 2D vector with n rows and 4 columns

    for (int i = 0; i < n; i++)
    {
        colors[i][0] = colors[i].name;
        colors[i][1] = colors[i].red;
        colors[i][2] = colors[i].green;
        colors[i][3] = colors[i].blue;
    }

    return 0;
}
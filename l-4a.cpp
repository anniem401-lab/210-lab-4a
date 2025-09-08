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
    srand(time(0)); // Seed the random number generator
    int n = 25 + (rand() % 50); // Random number between 25 and 50

    vector<Color> colors = {};

    int i; // Cycle counter
    i = 0; // Zero cycles so far

    while(i != n) // Does exactly n cycles
    {
        Color temp; // Temporary Color structure

        cout << (temp.red = rand() % 256) << endl; // Random number between 0 and 255
        cout << (temp.green = rand() % 256) << endl; // Random number between 0 and 255
        cout << (temp.blue = rand() % 256) << endl; // Random number between 0 and 255
        i++; // Increment cycle counter

        colors.push_back(temp); // Add the temp Color to the vector
    }

    for (int i = 0; i < colors.size(); i++){
        for (int j = 0; j < colors.size() - 1; j++){
 
        }
    }
    return 0;
}
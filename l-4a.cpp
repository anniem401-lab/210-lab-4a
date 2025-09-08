// COMSC-210 | Lab 4A | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>
#include <iomanip>
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

    vector<Color> colors; // Vector to hold Color structures

    int i; // Cycle counter
    i = 0; // Zero cycles so far

    while(true) // Does exactly n cycles
    {   
        if(i >= n) // If cycle counter is equal to or greater than n
            break; // Exit the loop
        Color temp; // Temporary Color structure

        temp.red = rand() % 256; // Random number between 0 and 255
        temp.green = rand() % 256; // Random number between 0 and 255
        temp.blue = rand() % 256; // Random number between 0 and 255
        i = i + 1; // Increment cycle counter

        colors.push_back(temp); // Add the temp Color to the vector
    }

    // Display the colors
    for(const auto& color : colors)
    {
        cout << endl;
        cout << "Color# " << endl;
        cout << "-------" << endl;
        cout << "R Value: " << color.red << endl;
        cout << "-------" << endl;
        cout << "G Value: " << color.green << endl;
        cout << "-------" << endl;
        cout << "B Value: " << color.blue << endl;
        cout << "-------" << endl;
        cout << endl;
    }
    
    return 0;
}
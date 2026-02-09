// COMSC 210 | Martha Stephanie Villalta | Lab 4A
// Prog. creates a vector of structs [Color].
// Red, Blue, and Green variables will rep. the hues.

#include <random>
#include <iostream>
#include <vector>

using namespace std;

struct Color {
    int red, blue, green;
};

Color colorData(); // prototype.
void outputColorData(const Color& c); // prototype.

int main() {

    vector<Color> colors;

    return 0;
}

Color colorData(){ // function needs to handle data input to variable/object.
    Color colorTemp;
}
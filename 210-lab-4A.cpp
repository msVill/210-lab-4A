// COMSC 210 | Martha Stephanie Villalta | Lab 4A
// Prog. creates a vector of structs [Color].
// Red, Blue, and Green variables will rep. the hues.

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

struct Color {
    int red, blue, green;
};

Color colorData(); // prototype.
void outputColorData(const Color& c); // prototype.

int main() {
    srand(time(0)); // Learned this today. Seed the random # generator.
    vector<Color> colors;

    return 0;
}

Color colorData(){ // function needs to handle data input to variable/object.
    Color colorTemp;
    colorTemp.red = rand() % 256;
    colorTemp.blue = rand() % 256;
    colorTemp.green = rand() % 256;

    return colorTemp;
}
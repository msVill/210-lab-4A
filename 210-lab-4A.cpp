// COMSC 210 | Martha Stephanie Villalta | Lab 4A
// Prog. creates a vector of structs [Color].

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
    int n = rand() % 26 + 25;

    for(int i = 0; i <= n; i++) {
        Color tempColor = colorData();
        colors.push_back(tempColor);
    }

    cout << " Color# | R value | G value | B value " << endl;
    cout << " ------- --------   -------   -------" << endl;
    for(int i = 0; i < colors.size(); i++) {
        cout << "    " << i + 1 << "  |  ";
        outputColorData(colors[i]);
        cout << endl;
    }

    return 0;
}

Color colorData(){ // function needs to handle data input to variable/object.
    Color colorTemp;
    colorTemp.red = rand() % 256;
    colorTemp.blue = rand() % 256;
    colorTemp.green = rand() % 256;

    return colorTemp;
}

void outputColorData(const Color& c) {
    cout << c.red << "   " << c.green << "    " << c.blue << "    ";
}
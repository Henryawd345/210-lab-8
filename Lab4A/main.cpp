#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <random>


using namespace std;

struct Color{
    int red;
    int green;
    int blue;
};

int main (){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> pickN(25, 50);
    uniform_int_distribution<int> pickRGB(0, 255);

    int n = pickN(gen);

    vector<Color> colors;

    for(int i = 0; i < n; i++){
        Color c;
        c.red = pickRGB(gen);
        c.green = pickRGB(gen);
        c.blue = pickRGB(gen);
        colors.push_back(c);
    }

    cout << left 
    << setw(8) 
    << "Color#" 
    << setw(10) 
    << "R"
    << setw(10) 
    << "G" 
    << setw(10) 
    << "B" << '\n';

    for(size_t i = 0; i < colors.size(); i++){
        cout<< left << setw(8) << i+1 << setw(10)<< colors[i].red << setw(10) << colors[i].green << setw(10) << colors[i].blue << endl;
    }

    return 0;
}

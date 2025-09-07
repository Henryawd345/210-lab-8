#include <iostream>
#include <vector>
#include <string>
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
    int rgb = pickRGB(gen);
    cout << "n = " << n << "rgb = "<< rgb <<endl;

    return 0;
}

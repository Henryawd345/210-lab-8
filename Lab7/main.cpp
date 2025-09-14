#include <iostream>
#include <string>
using namespace std;

void displayArray(string* a, int n) {
    for (int i = 0; i < n; ++i) { 
        cout << *(a+i) << ' '; 
    }
}

string* reverseArray(string* a, int n){
    string* startarray = a;
    string* endarray = a + (n - 1);

    while (startarray < endarray){
        string temp = *startarray;
        *startarray = *endarray;
        *endarray = temp;

        startarray++;
        endarray--;
    }
    return a;
}

int main() {
    int Num = 5;
    string* names = new string[Num];

    *(names + 0) = "Henry";
    *(names + 1) = "Gun";
    *(names + 2) = "Cake";
    *(names + 3) = "Jack";
    *(names + 4) = "Fah";

    cout << "Original array: ";
    displayArray(names, Num);
    cout << "\n";

    names = reverseArray(names, Num);

    cout << "Reversed array: ";
    displayArray(names, Num);


    delete[] names;
    return 0;
}

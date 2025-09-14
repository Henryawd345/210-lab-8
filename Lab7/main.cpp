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

    while (left < right){
        string temp = *startarray;
        *startarray = *endarray;
        *endarray = temp;

        startarray++;
        endarray--;
    }
    
    return a;
}

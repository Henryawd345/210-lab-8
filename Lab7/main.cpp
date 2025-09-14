#include <iostream>
#include <string>
using namespace std;

void displayArray(const string* a, int n) {
    // TODO: print all n strings on one line using pointer notation
    // for (int i = 0; i < n; ++i) { cout << /* *(a+i) */ << ' '; }
    // cout << '\n';

    for (int i = 0; i < n; ++i) { 
        cout << *(a+i) << ' '; 
    }
}

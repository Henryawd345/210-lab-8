#include <iostream>
using namespace std;

void enterArrayData(double* a, int n) {
    cout << "Data entry for the array:\n";
    for (int i = 0; i < n; i++){
        cout << " > Element #" << i << ": ";
        cin >> *(a + i);
    }
    cout << "Data entry complete.\n";
}



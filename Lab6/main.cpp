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

void outputArrayData(const double* a, int n) {
    cout << "Outputting array elements: ";
    for (int i = 0; i < n; i++){
        cout << *(a + i)<< " ";
    }
    cout << '\n';
}


double sumArray(const double* a, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++){
        sum += *(a + i);
    }
    return sum;
}

int main(){
    double sum = 0.0;                  // not initialized
    cout << "Starts as: " << sum << '\n';  // you'll see it's not 0
}
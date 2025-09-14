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

int main() {
    int size = 5;                 
    double* arr = new double[size];     

    enterArrayData(arr, size);
    outputArrayData(arr, size);
    double total = sumArray(arr, size);
    cout << "Sum of values: " << total << '\n';

    delete[] arr;
    return 0;
}
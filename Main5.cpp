#include "5.h"

int main() {
    double* arr;
    int size;
    cout << "Input array size: ";
    cin >> size;

    arr_mem(&arr, size);
    arr_fill(arr, size);
    arr_print(arr, size);
    arr_del(&arr);
}
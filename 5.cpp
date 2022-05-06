#include "5.h"
using namespace std;

void arr_mem(double** arr, int size) {
	*arr = new double[size];
}

void arr_fill(double* arr, int size) {
	cout << "Input numbers: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

void arr_print(double* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

void arr_del(double** arr) {
	delete[] * arr;
}
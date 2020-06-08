#include <iostream>
using namespace std;

int func(int* A, int n);

int func(int* A, int n) {
	if (n == 0) {
		if (A[n] % 2 != 0)	return A[n];
		else
			return 0;
	}
	else
		if (A[n] % 2 != 0)	return A[n] + func(A, n - 1);
		else
			return 0 + func(A, n - 1);
}

int main() {
	setlocale(LC_ALL, "");
	int* A = new int[40];
	for (int i = 0; i < 40; i++)	A[i] = i + 1;
	int sum = func(A, 39);
	cout << "Сумма всех нечётных элементов массивa от 1 до 40 равна " << sum;
}

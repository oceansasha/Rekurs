#include <iostream>
using namespace std;

void func(int A);

void func(int A) {
	if (A == 0)	 cout << endl;
	else {
		cout << A % 10;
		func(A / 10);
	}
}

int main() {
	setlocale(LC_ALL, "");
	int A;
	cout << "������� �����: " << endl;
	cin >> A;
	cout << "��������� �����: " << endl;
	func(A);
}

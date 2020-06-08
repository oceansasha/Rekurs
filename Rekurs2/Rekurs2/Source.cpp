#include <iostream>
using namespace std;

int F(int i);
int G(int i);


int F(int i)  {
	if (i == 1) return -2;
	else
		return 5 * F(i - 1) - G(i - 1);
}

int G(int i)   {
	if (i == 1) return 2;
	else
		return 2 * F(i - 1) - G(i - 1);
}

int main() {
	for (int i = 1; i < 11; i++)	cout << "F(i) = " << F(i) << endl;
	cout << endl;
	for (int i = 1; i < 11; i++)	cout << "G(i) = " << G(i) << endl;
}

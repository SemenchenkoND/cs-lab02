#include <math.h>
#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

int main()
{
	cout << "Enter A and B: ";
	int a, b;
	cin >> a >> b;
	cout << "A + B = " << a + b << endl
		<< "A - B = " << a - b << endl
		<< "A * B = " << a * b << '\n'
		<< "A / B = " << a / b << '\n';

	cout << "output max: ";

	if (a > b)
		cout << "max el. = " << a << '\n';

	else
		cout << "max el. = " << b << '\n';

	return 0;
}
﻿#include <math.h>
#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

int main()
{
	cout << "Enter A and B: ";
	double a, b;
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

	cout << "output min: ";

	if (a > b)
		cout << "min el. = " << b << '\n';

	else
		cout << "min el. = " << a << '\n';

	return 0;
}
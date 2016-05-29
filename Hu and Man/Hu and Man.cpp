// Hu and Man.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main() {
	double x;
	setlocale(0, "");
	x = 3;

	while (x <= 5) {
		double h;
	h = 1 / x;
	cout << h << endl;
	x = x + 0.1;
	}
	system("pause");
	return 0;
}
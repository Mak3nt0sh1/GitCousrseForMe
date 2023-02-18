#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float x, a, y1 = 0.0, y2 = 0.0, y3 = 0.0, u, eps, b;
	int k, n = 1, m = 1, z = 1, c;
	cin >> x >> eps >> a >> k;
	u = sin(a); b = 1;
	while (abs(b) > eps) {
		y1 += u;
		b = b * x / m;
		m++;
		if (n % 2 == 0) {
			u = b * sin(a);
			n++;
		}
		else {
			u = b * cos(a);
			n++;
		}
		if (z == 2) {
			u = u * (-1);
			b = b * (-1);
			z = 0;
		}
		else {
			z++;
		}
	}
	b = 1; m = 1; n = 1; u = sin(a); z = 1;
	for (c = 1; c <= k; c++) {
		y2 += u;
		b = b * x / m;
		m++;
		if (n % 2 == 0) {
			u = b * sin(a);
			n++;
		}
		else {
			u = b * cos(a);
			n++;
		}
		if (z == 2) {
			u = u * (-1);
			b = b * (-1);
			z = 0;
		}
		else {
			z++;
		}
	}
	y3 = sin(x + a);
	cout << y1 << endl;
	cout << y2 << endl;
	cout << y3 << endl;



	return 0;
}
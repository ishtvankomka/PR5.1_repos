#include <iostream>
#include <cmath>
using namespace std;

double g(const double a, const double b); // прототип

int main()
{
	double s, t;
		cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = (g(1, s) + (1 + g(t, 1) * g(t, 1)) * (1 + g(t, 1) * g(t, 1))) 
		/ (1 + g(s + t, 1) * g(s + t, 1) * g(s + t, 1));
	cout << "c = " << c << endl;
	return 0;
}

double g(const double a, const double b) // визначення
{
	return (a * a) + (a * b) + (b * b);
}
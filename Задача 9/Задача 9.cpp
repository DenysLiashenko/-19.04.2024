#include <iostream>
#include <math.h>
using namespace std;

int square(int a,int b,int c)
{
	int s,p;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}

int main()
{
	int a,b,c;
	cout << "Enter a: ";
	cin >> a;

	cout << endl << "Enter b: ";
	cin >> b;

	cout << endl << "Enter c: ";
	cin >> c;
	
	cout << "Square of your triangle" << square(a, b, c);
}


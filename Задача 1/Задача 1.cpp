#include <iostream>
#include <math.h>

using namespace std;

int sum(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

int main()
{
	int a, b;
	cout << "Enter 2 numbers:";
	cin >> a >> b;
	cout << "Enter 2 numbers:" << sum(a, b) << endl;
}
#include <iostream>
using namespace std;

int factorial(int f)
{
	if (f == 1 || f == 0)
		return 1;
	return f * factorial(f - 1);
}

int main()
{
	int n; 
	cout << "Enter a number: ";
	cin >> n;
	cout << "Factorial of your number: " << factorial(n) << endl;
}


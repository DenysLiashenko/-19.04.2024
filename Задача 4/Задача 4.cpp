#include <iostream>
using namespace std;

void prime(int f)
{
	int i,k=0;
	for (i = f-1; i != 1; i--)
	{
		if ((f % i) == 0)
		{
			k++;
		}
	}

	if (k == 0)
	{
		cout << "Your number is prime";
	}
	else
	{
		cout << "Your number isn't prime";
	}
}

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	prime(n);
}


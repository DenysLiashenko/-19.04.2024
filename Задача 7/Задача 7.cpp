#include <iostream>
using namespace std;

int sort(int* f, int l)
{
	int i,j,x;
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < l-1; j++)
		{
			if (f[j] > f[j + 1])
			{
				x = f[j];
				f[j] = f[j + 1];
				f[j + 1] = x;
			}
		}
	}
	return *f;
}

int main()
{
	int l, i;
	cout << "Enter a lon of your array: ";
	cin >> l;
	cout << endl << "Enter your array: ";

	int* p = new int[l];

	for (i = 0; i < l; i++)
	{
		cin >> p[i];
	}

	p[i] = sort(p, l);

	cout << endl <<"Sorted array: ";
	for (i = 0; i < l; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}
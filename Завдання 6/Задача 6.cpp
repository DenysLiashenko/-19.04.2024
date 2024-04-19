#include <iostream>
using namespace std;

int ArraySum(int *f,int l)
{
	int i,j = l - 1,x;
	for (i = 0; i < l / 2; i++)
	{
		x = f[i];
		f[i] = f[j];
		f[j] = x;
		j--;
	}
	return *f;
}

int main()
{
	int l,i;
	cout << "Enter a lon of your array: ";
	cin >> l;
	cout << "Enter your array: ";

	int* p = new int[l];

	for (i = 0; i < l; i++)
	{
		cin >> p[i];
	}
	
	p[i] = ArraySum(p,l);

	cout << "Inverted array: ";
	for (i = 0; i < l; i++)
	{
		cout << p[i] << " ";
	}
}
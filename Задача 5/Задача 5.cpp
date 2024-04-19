#include <iostream>
using namespace std;

int ArraySum(int f[5])
{
	int i, sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum = f[i] + sum;
	}
	return sum;
}

int main()
{
	int n[] = { 1,2,3,4,5 };
	cout << "Sum of all members of array: " << ArraySum(n);
}


#include <iostream>

using namespace std;

int main()
{
	//Write a C++ program to calculate factorial n.
	int n, factorial = 1;

	cout << "Enter the number: ";
	cin >> n;

	for (int i = n; i >= 1; i--)
	{
		factorial *= i;
	}
	cout << "The factorial is: " << factorial;

	return 0;
}
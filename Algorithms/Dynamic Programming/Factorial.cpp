#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
	int a;
	cout << "Enter number: " << endl;
	cin >> a;

	cout << factorial(a) << endl;

	return 0;
}

int factorial(int n)
{
	int f;
	if (n == 0)
		f = 1;
	else
		f = n * factorial(n - 1);
	return f;
}

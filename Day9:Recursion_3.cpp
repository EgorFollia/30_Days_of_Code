#include <iostream>

using namespace std;

int factorial(int n)
{
	int fact = 0;
	if (n == 0 || n == 1)
		fact = 1;
	else
		fact = n * factorial(n - 1);
	
	return fact;
}

int main()
{
    int n;
    cin >> n;

	cout << factorial(n) << endl;

    return 0;
}


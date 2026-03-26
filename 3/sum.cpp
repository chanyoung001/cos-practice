#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int a, b;

	cout << "Enter A: ";
	cin >> a;

	cout << "Enter B: ";
	cin >> b;

	// b가 더 크면 안 됨
	if (b <= a) 
	{
		cout << "Error: B must be greater than A" << endl;
		return 0;
	}

	// sum

	int sum = (a + b) * (b - a + 1) / 2;

	cout << "Sum = " << sum << endl;
	return 0;
}


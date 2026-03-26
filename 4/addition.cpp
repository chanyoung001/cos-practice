#include <iostream>
#include <cstring>
using namespace std;
int uadd ok(unsigned a, unsigned b) {}
int tadd ok(int a, int b) {}
int main(int argc, char *argv[])
{
	int a, b;
	unsigned x, y;
	if (argc != 3) {
		cout << "You should insert two numbers in a hexadecimal way" << endl;
		return 0;
	}
	a = strtol(argv[1], NULL, 16);
	b = strtol(argv[2], NULL, 16);
	x = (unsigned) a;
	y = (unsigned) b;
	cout << "Unsigned Addition ===" << endl;
	if (uadd ok(x,y))
		cout << "No overflow" << endl;
	else
		cout << "Overflow" << endl;

	cout << "Signed Addition ===" << endl;
	if (tadd ok(a,b))
		cout << "No overflow" << endl;
	else
		cout << "Overflow" << endl;

	return 0;
}


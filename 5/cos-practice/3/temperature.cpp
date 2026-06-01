#include <iostream>
#include <cstdlib>
int main(int argc, char *argv[])
{
	if (argc < 4)
	{
		std::cout << "Usage: " << argv[0] << "lower upper step" << std::endl;
		return 1;
	}

	int fahr, celsius;
	int lower, upper, step;
	
	lower = atoi(argv[1]);
	upper = atoi(argv[2]);
	step = atoi(argv[3]);
	
	if (step == 0) 
	{
		std::cout << "Error : step cannot be 0" << std::endl;
		return 1;
	}

	fahr = lower;

	while (fahr <= upper){
		celsius = 5 * (fahr - 32) / 9;
		std::cout << "fahr: " << fahr << "\tcelsius: " << celsius << std::endl;
		fahr = fahr + step;
	}
	return 0;
}


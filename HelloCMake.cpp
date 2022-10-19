// HelloCMake.cpp : Defines the entry point for the application.
//

#include "HelloCMake.h"

using namespace std;

int main()
{
	cout << "Hello, CMake." << endl;

	int a = 15;
	int b = 12;
	int c = calc(a, b);

	cout << c << endl;

	return 0;
}

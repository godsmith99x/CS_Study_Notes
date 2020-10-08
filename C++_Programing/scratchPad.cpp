#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;


int main() {

	cout << "char: " << sizeof(char) << " bytes" << endl;	
	cout << "int: " << sizeof(int) << " bytes" << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
	cout << "short: " << sizeof(short) << " bytes" << endl;
	cout << "long: " << sizeof(long) << " bytes" << endl;
	cout << "long long: " << sizeof(long long) << " bytes" << endl;

	return 0;
}
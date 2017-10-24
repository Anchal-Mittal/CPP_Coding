#include <iostream>
using namespace std;

int Variable = 100;

int main(int argc, char const *argv[]){

	cout << "Value of localVariable  is " << localVariable << endl;

	int Variable = 50;

	int variableOne = 10;
	int variableTwo = 20;

	globalVariable = variableOne + variableTwo;

	cout << "Sum of " << variableOne << " and " << variableTwo << " is " <<globalVariable << endl;
	// PRINT THE VALUE OF LOCAL VARIABLE 
	cout << "Value of localVariable  is " << Variable << endl;
        // PRINT THE VALUE OF GLOBAL VARIABLE
	cout << "Value of globalVariable is " << ::Variable << endl;
	return 0;
}

#include <iostream>
#include "Cat.h"

using namespace std;

int main() {

	cout << "Starting program ..." << endl;

	{
		// Instantiating a cat from the class Cat.
		Cat bob;
		bob.speak();
	}

	cout << "Ending program ..." << endl;

	return 0;
}

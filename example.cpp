#include <iostream>
#include "dynvars.hpp"

int main(){
	
	// Make an object to hold your data
	DynVars myData;
	
	// Create a new variable i
	myData.newVariable("i");
	
	// Assign a value to the new variable
	myData.writeVariable("i", 5);
	
	// Print the value of our variable to the screen
	std::cout << myData.readVariable<int>("i") << std::endl;
	
	// Why not use a pointer to make changes to our variable?
	int* i = myData.getPointer<int>("i");
	
	// Change the value of our variable using the pointer
	*i = 10;
	
	// Both results are the same
	std::cout << *i << " = " << myData.readVariable<int>("i") << std::endl;
	
	return 0;
}
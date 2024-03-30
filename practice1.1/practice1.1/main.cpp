#include "Header.h"

// Function to get two integer values from the user

std::pair<int, int> getValue()  // pair is used to pair 2 output from getValue Function 
{
	std::cout << "enter first value value: ";
	int input1{};
	std::cin >> input1;

	std::cout << "enter second value value: ";
	int input2{};
	std::cin >> input2;

	system("cls");
	return std::make_pair(input1, input2);	// Return a pair containing the two input values
}

int main() 
{
	auto values = getValue();
	int value1 = values.first;
	int value2 = values.second;
	

	int functionValue = selectFunction();

	if (functionValue == 1)
	{
		std::cout << "The calculation " << value1 << " * " << value2 << " is : " << multiply(value1, value2);
	}
	else if (functionValue == 2) 
	{
		std::cout << "The Calculation " << value1 << " + " << value2 << " is : " << add(value1, value2);
	}
	else if (functionValue == 3) 
	{
		std::cout << "The Calculation " << value1 << " - " << value2 << " is : " << substract(value1, value2);
	}
	else if (functionValue == 4) 
	{
		std::cout << "The Calculation " << value1 << " / " << value2 << " is : " << devsion(value1, value2);
	}
	else 
	{
		std::cout << "Please select the right number from the given options";
		system("cls");
	}


    
	return 0; // Return 0 to indicate successful completion of the program
}
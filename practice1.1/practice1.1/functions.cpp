#include "Header.h"

// Function to select a function for the numbers
int selectFunction()
{
	int selectedValue{}; // Initialize selectedValue to store the user's choice
	do {
		// Prompt the user to select a function
		std::cout << "select Function for the numbers \n\n Enter 1 for Multiply\n Enter 2 for Addtion\n Enter 3 for Substract\n Enter 4 for Devision\n ";
		
		std::cin >> selectedValue; // Read user input

		// Validate the user's input
		if (selectedValue < 1 || selectedValue > 4)
		{
			// Display error message for invalid input
			std::cout << "Invalid input. Please choose a number from given options. :)" << std::endl;
			
			// Add a 2-second delay to show the error message
			std::this_thread::sleep_for(std::chrono::seconds(2));
			system("cls");
		}
	} while (selectedValue < 1 || selectedValue > 4); // Repeat until a valid input is provided
	
	// Clear the screen before returning
	system("cls");

	// Return the selected function
	return selectedValue;

}

// Function to multiply two numbers

int multiply(int x, int y)
{
	return x * y;
}

// Function to add two numbers

int add(int x, int y)
{
	return x + y;
}

// Function to subtract one number from another

int substract(int x, int y)
{
	return x - y;
}


// Function to perform division

int devsion(int x, int y)
{
	return x / y; 
}
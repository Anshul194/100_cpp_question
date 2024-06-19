//  Write a C++ program that swaps two variables without using a third variable.

#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
	

	int num1, num2, temp; 
	cout << " Input 1st number : "; 
	cin >> num1; 

	cout << " Input 2nd number : "; 
	cin >> num2;

	num2 = num2 + num1; 
	num1 = num2 - num1; 
	num2 = num2 - num1;
	cout << " After swapping the 1st number is : " << num1 << "\n";
	cout << " After swapping the 2nd number is : " << num2 << "\n\n";
}

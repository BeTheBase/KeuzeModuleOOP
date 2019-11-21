// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

#define FILE "D:\\School\\Jaar2\\KernModuleOOP\\ConsoleApplication3\\LekkerTeksje.txt"
#define OUTFILE "D:\\School\\Jaar2\\KernModuleOOP\\ConsoleApplication3\\Output.txt"

int main() 
{
	std::ifstream input_file;
	input_file.open(FILE);
	if (!input_file) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}

	std::ofstream output_file;
	output_file.open(OUTFILE);
	if (!output_file) {
		std::cout << "Probleem bij openen output file" << std::endl;
		exit(1);
	}

	std::string text;

	// read the characters in the file into the string
	char c;
	if (input_file.get(c))
	{
		text += c;
	}
	while (input_file.get(c)) // for each char, including white spaces
	{
		text += c; // append to string
	}

	// reverse the string
	std::reverse(text.begin(), text.end());

	// write the reversed string into the file	
	output_file << text;
	// write the output file to console
	std::cout << text;
	// close both streams
	input_file.close();
	output_file.close();

	return 0;
}

// Function to reverse a string 
void reverseStr(std::string& str)
{
	int n = str.length();

	// Swap character starting from two 
	// corners 
	for (int i = 0; i < n / 2; i++)
		std::swap(str[i], str[n - i - 1]);
}



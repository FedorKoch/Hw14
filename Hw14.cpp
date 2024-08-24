#include <iostream>
#include <string>
int main()
{
	std::string Word = "Delay";
	std::cout << "String = " << Word << "\n";
	std::cout << "String length = " << Word.length() << "\n";
	std::cout << "first symbol = " << Word[0] << "\n";
	std::cout << "last symbol = " << Word[Word.length() - 1];
}


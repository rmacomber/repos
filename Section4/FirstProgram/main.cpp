#include <iostream>

int main()
{
    int favorite_number;
    
	std::cout << "Please enter your favorite between 1 and 100: " << std::flush;
    
    std::cin >> favorite_number;
    
    std::cout << favorite_number << " is my favorite number too" << std::endl;
    
	return 0;
}

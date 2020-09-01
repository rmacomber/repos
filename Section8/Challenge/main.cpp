// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {

    int user_input;
    cout << "Enter an amount in cents : ";
    cin >> user_input;
    
    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    const int penny {1};
    
    int number_of_dollars{0}, number_of_quarters{0}, number_of_dimes{0}, number_of_nickels{0}, number_of_pennies{0};
    
    //dollars
    number_of_dollars = user_input / dollar;
    int dollar_amount = number_of_dollars * dollar;
    int left_over_input = user_input - dollar_amount;
    
    //quarters
    number_of_quarters = left_over_input / quarter;
    int quarter_amount = number_of_quarters * quarter;
    left_over_input -= quarter_amount;
    
    
    //dimes
//    number_of_quarters = left_over_input / quarter;
//    int quarter_amount = number_of_quarters * quarter;
//    left_over_input -= quarter_amount;
    
//    //nickles
//    number_of_quarters = left_over_input / quarter;
//    int quarter_amount = number_of_quarters * quarter;
//    left_over_input -= quarter_amount;

    //pennies
//    number_of_quarters = left_over_input / quarter;
//    int quarter_amount = number_of_quarters * quarter;
//    left_over_input -= quarter_amount;
    
    cout << "You can provide this change as follows: \n" << endl;
    cout << "Dollars: "<< number_of_dollars << endl;
    cout << "Quarters: " << number_of_quarters << endl;
    cout << "Dimes: " << number_of_dimes << endl;
    cout << "Nickels: " << number_of_nickels << endl;
    cout << "Pennies: " << number_of_pennies << endl;

    cout << number_of_dollars << endl;
    cout << left_over_input << endl;
    return 0;
}



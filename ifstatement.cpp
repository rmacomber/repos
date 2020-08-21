#include "std_lib_facilities.h";

int main() 
{
	string password = "Fuckit";
    string value;
    cout << "Please enter your password: " << flush;
    cin >> value;
    if (value == password){
        cout << "You have entered the correct password";
    }
    else {
        cout << "You have not entered the correct password";
    }
	return 0;
}
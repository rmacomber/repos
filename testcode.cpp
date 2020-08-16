#include "std_lib_facilities.h"

int main()
{
 //code I want to test
 string q1, q2, q3;
 cout << "Please answer question 1\n";
 getline (cin, q1);
 cout << "Please answer question 2\n"; 
 getline (cin, q2);
 cout << "Please answer question 3\n";
 getline (cin, q3);
 cout << "The answer to question 1 is " << q1 << endl << "The answer to question 2 is " << q2 << endl << "The answer to question 3 is " << q3 << endl;
}
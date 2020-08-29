#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> MyVec (5, 100); //5 elements all initialized to 100
    vector <int> MyVecTwo (10);  //10 elements all initialized to 0
    vector <int> MyVecThree {10,20,30,40,50,60};  //6 elements initialized to the specified amount
    
    int NewInt {0};
    cout << "Please enter the int you would like to add to MyVec: " << flush;
    cin >> NewInt;
    MyVec.push_back(NewInt);
    
    cout << "Please enter the int you would like in position Three: ";
    cin >> MyVec.at(2);
    
    cout << MyVec.at(0) << endl;
    cout << MyVec.at(1) << endl;
    cout << MyVec.at(2) << endl;
    cout << MyVec.at(3) << endl;
    cout << MyVec.at(4) << endl;
    cout << MyVec.at(5) << endl << endl;
    
    cout << MyVecTwo.at(0) << endl;
    cout << MyVecTwo.at(1) << endl;
    cout << MyVecTwo.at(2) << endl;
    cout << MyVecTwo.at(3) << endl;
    cout << MyVecTwo.at(4) << endl << endl;
    
    cout << MyVecThree.at(0) << endl;
    cout << MyVecThree.at(1) << endl;
    cout << MyVecThree.at(2) << endl;
    cout << MyVecThree.at(3) << endl;
    cout << MyVecThree.at(4) << endl << endl;
    
	return 0;
}

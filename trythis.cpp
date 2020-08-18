#include "std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the person you want to write to\n";
    string first_name;
    cin >> first_name;
    cout << "Please enter another friends name\n";
    string friend_name;
    cin >> friend_name;
    cout << "Please enter m if the friend is male and f if the firend is female\n";
    char friend_sex = '0';
    cin >> friend_sex;
    cout << "Please enter the age of your friend\n";
    int age;
    cin >> age;
    if (age <= 0 || age >= 110)
        simple_error("your're kidding");
    cout << "Dear " << first_name << ", \n\nHow are you? I am fine. I miss you. Have you seen " << friend_name << " lately?\n";
    if (friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    cout << "I hear you just had a birthday and you are " << age << " years old.";
    if (age < 12)
        cout << "Next year you will be " << age + 1 << ".\n\n";
    if (age == 17)
        cout << "Next year you will be able to vote.\n\n";
    if (age > 70)
        cout << "I hope you are enjoying retirement.\n\n";

    cout << "\n\nYours sincerely, \n\nRyan Macomber";
    
    return 0;
}

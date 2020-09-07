//subnet calculator

#include <iostream>

int main ()
{
	using namespace std;
	int ip_octet1{}, ip_octet2{}, ip_octet3{}, ip_octet4{}
	cout << "Please enter the IP Address seperated by spaces: "
	cin >> ip_octet1 >> ip_octet2 >> ip_octet3 >> ip_octet4;
	
	cout << "The IP address is " << ip_octet1 << "."<<ip_octet2<<"."<<ip_octet3<<"."<<ip_octet4<<endl;
	
}
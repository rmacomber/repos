//subnet calculator

#include <iostream>

int main ()
{
	using namespace std;
	
	//this program will find the first and last address in the subnet
	//how many addresses
	//and the slash notation
	
	//IP Address
	int ip_octet1{}, ip_octet2{}, ip_octet3{}, ip_octet4{};
	cout << "Please enter the IP Address seperated by spaces: ";
	cin >> ip_octet1 >> ip_octet2 >> ip_octet3 >> ip_octet4;
	
	//Subnet
	int sub_octet1{}, sub_octet2{}, sub_octet3{}, sub_octet4{};
	cout << "Please enter the subent seperated by spaces: ";
	cin >> sub_octet1 >> sub_octet2 >> sub_octet3 >> sub_octet4;
	
	cout << "IP address: " << ip_octet1 << "."<<ip_octet2<<"."<<ip_octet3<<"."<<ip_octet4<<endl;
	cout << "Subnet: " << sub_octet1 << "."<< sub_octet2 << "." << sub_octet3 << "."<< sub_octet4 << endl;
	
	//int class_a{}, class_b{}, class_c{}, class_d{};
	int first_ip{}, last_ip{}, broadcast_address{}, blocksize{}; network_address{};
	
	if(sub_octet4 == 255)
		blocksize = 256 - 255;
	else if (sub_octet3 == 255){
		blocksize = 256 - sub_octet4;
		//*****network_address = ip_octet4 % blocksize - 256;
	}
	else if(sub_octet2 == 255){
		blocksize = 256 - sub_octet3;
	}
	else if(sub_octet1 == 255){
		blocksize = 256 - sub_octet2;
	}
	else
		blocksize = 256 - sub_octet1;
	
	int usable_ips = blocksize - 2;
	
	cout << "The block size is: " << blocksize << endl;
	cout << "Number of usable IP addresses: " << usable_ips << endl;
	
	
	//slash notation calculation
	
	//we will need a statment to subtract the left over subnet from the same ip octet to get the block size
	
	//we can use the block size to find the first and last ip address
	
	
	
	
	
}
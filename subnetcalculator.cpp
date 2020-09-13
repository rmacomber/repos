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
	
	int first_ip{}, last_ip{}, broadcast_address{}, blocksize{}, network_address{};
	
	if(sub_octet4 == 255)
		blocksize = 256 - 255;
	else if (sub_octet3 == 255){
		blocksize = 256 - sub_octet4;
		network_address = ip_octet4 - (ip_octet4 % blocksize);
		broadcast_address = network_address + blocksize - 1;
		first_ip = network_address + 1;
		last_ip = broadcast_address - 1;
		cout << "The network address: " << ip_octet1 << "." << ip_octet2 << "." << ip_octet3 << "." << network_address << endl;
		cout << "The broadcast address: " << ip_octet1 << "." << ip_octet2 << "." << ip_octet3 << "." << broadcast_address << endl;
		cout << "The first usable ip: " << ip_octet1 << "." << ip_octet2 << "." << ip_octet3 << "." << first_ip << endl;
		cout << "The last usable ip: " << ip_octet1 << "." << ip_octet2 << "." << ip_octet3 << "." << last_ip << endl;
	}
	else if(sub_octet2 == 255){
		blocksize = 256 - sub_octet3;
		network_address = ip_octet3 - (ip_octet3 % blocksize);
		broadcast_address = network_address + blocksize - 1;
		first_ip = network_address + 1;
		last_ip = broadcast_address - 1;
		cout << "The network address: " << ip_octet1 << "." << ip_octet2 << "." << network_address << "." << 0 << endl;
		cout << "The broadcast address: " << ip_octet1 << "." << ip_octet2 << "."<< broadcast_address << "." << 255 << endl;
		cout << "The first usable ip: " << ip_octet1 << "." << ip_octet2 << "." << first_ip << "." << 1 << endl;
		cout << "The last usable ip: " << ip_octet1 << "." << ip_octet2 << "." << last_ip << "." << 254 << endl;
	}
	else if(sub_octet1 == 255){
		blocksize = 256 - sub_octet2;
		network_address = ip_octet2 - (ip_octet2 % blocksize);
		broadcast_address = network_address + blocksize - 1;
		first_ip = network_address + 1;
		last_ip = broadcast_address - 1;
		cout << "The network address: " << ip_octet1 << "." << network_address << "." << ip_octet3 << "." << 0 << endl;
		cout << "The broadcast address: " << ip_octet1 << "." << broadcast_address << "." << ip_octet3 << "." << 255 << endl;
		cout << "The first usable ip: " << ip_octet1 << "." << first_ip << "." << ip_octet3 << "." << 1 << endl;
		cout << "The last usable ip: " << ip_octet1 << "." << last_ip << "." << ip_octet3 << "."  << 254 << endl;
	}
	else
		blocksize = 256 - sub_octet1;
	
	//int usable_ips = 2 to the power of (32 - slashnotation) ;
	//http://www.cplusplus.com/reference/cmath/pow/
	
	cout << "The block size is: " << blocksize << endl;
	//cout << "Number of usable IP addresses: " << usable_ips << endl;
	
	
	//slash notation calculation
	
	
	//we will need a statment to subtract the left over subnet from the same ip octet to get the block size
	
	//we can use the block size to find the first and last ip address
	
	
	
	
	
}
#include <iostream>
using namespace std;

int main()
{
    int number_of_small_rooms {0};
    int number_of_large_rooms {0};
    
	cout << "Hello, welcome to Ryan's carpet cleaning service." << endl;
    cout << "\nHow many small rooms would you like cleaned? " << endl;
    cin >> number_of_small_rooms;
    cout << "\nHow many large rooms would you like cleaned? " << endl;
    cin >> number_of_large_rooms;
    
   
    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};
    const double sales_tax {0.06};
    const int estimate_expriy {30}; //days
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "=========================================" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    
    double small_room_cost {price_per_small_room * number_of_small_rooms};
    cout << "Small room cost: $" << small_room_cost << endl;
    
    double large_room_cost {price_per_large_room * number_of_large_rooms};
    cout << "Large room cost: $" << large_room_cost << endl;
    
    double total_cost {small_room_cost + large_room_cost};
    cout << "Total cost: $" << total_cost << endl;
    
//    double price_per_room_total {price_per_large_room + price_per_small_room};
//    int number_of_rooms_total {number_of_large_rooms + number_of_small_rooms}
//    ;
    double tax {total_cost * sales_tax};
    cout << "Tax: $" << tax << endl; 
    cout << "=========================================" << endl;
    cout << "Total estimate: $" << total_cost + tax << endl;
    cout << "This estimate is valid for " << estimate_expriy << " days." << endl << endl;
    
	return 0;
}

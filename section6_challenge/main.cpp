// Section 6
// Challenge

/*
  Frank's Carpet Cleaning Service
  Charges:
    $25 per small room
    $25 per large room
  Sales tax rate is 6%
  Estimates are valid for 30 days

  Prompt the user for the number of small and large rooms they would like cleaned
  and provide an estimate as:

  Estimate for carpet cleaning Service
  Number of small rooms: 3
  Number of large rooms: 1
  Price per small room: $25
  Price per large room: $35
  Cost: $110
  Tax: $6.6

===========================================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include<iostream>

using namespace std;

int main() {

  const double price_per_small_room{25};
  const double price_per_large_room{35};
  const double sales_tax_rate{0.06};

  double number_of_small_rooms{0};
  double number_of_large_rooms{0};

  cout << "How many small rooms would you like cleaned: " << endl;
  cin >> number_of_small_rooms;

  cout << "How many large rooms would you like cleaned: " << endl;
  cin >> number_of_large_rooms;

  cout << "Estimate for carpet cleaning service" << endl;
  cout << "Number of small rooms: " << number_of_small_rooms << endl;
  cout << "Number of large rooms: " << number_of_large_rooms << endl;
  cout << "Price per small rooms: $" << price_per_small_room << endl;
  cout << "Price per large rooms: $" << price_per_large_room << endl;
  cout << "Cost: $" << (number_of_small_rooms * price_per_small_room ) + (number_of_large_rooms * price_per_large_room) << endl;
  cout << "Tax: $" << sales_tax_rate * ((number_of_small_rooms * price_per_small_room ) + (number_of_large_rooms * price_per_large_room)) << endl;
  cout << "==========================================================" << endl;
  cout << "Total Estimate: $" <<  ((number_of_small_rooms * price_per_small_room ) + (number_of_large_rooms * price_per_large_room)) * (sales_tax_rate + 1)<<endl;
  cout << "This estimate is valid for 30 days" << endl;
}

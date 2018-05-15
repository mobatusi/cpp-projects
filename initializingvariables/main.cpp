#include<iostream>
using namespace std;

int main(){

  cout << "Please enter the width of the room: ";
  int room_width{0};
  cin >> room_width;

  cout << "Please enter the legnth of the room: ";
  int room_length{0};
  cin >> room_length;

  cout << "The area of the room is " << room_width * room_length << " square feet" << '\n';

  return 0;
}

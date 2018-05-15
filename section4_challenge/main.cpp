#include <iostream>

int main() {
  int favorite_number;

  std::cout << "Enter your favorite number between 1 and 100: ";

  std::cin >> favorite_number;

  if (favorite_number == 24){

    std::cout << "Amazing!! That's my favorite number too" << '\n';
    std::cout << "No Really!!, " << favorite_number << " is my favorite number" << '\n';
  }

  return 0;
}

// Section 9
// Challenge

/*
  This challenge is about using a collection (list) of integers and allowing the user
  to select options from a menu to perform operations on the list.

  Your program should display a menu options to the user as follows:

  P - Print numbers
  A - Add a number
  M - Display mean of the numbers
  S - Display the smallest number
  L - Display the largest number
  Q - Quit

  Enter your choice:

The program should only accept valid choices from the user, both upper and
lowercase selections should be allowed.
If an illegal choice is made, you should display. "unknown selection, please try again"
and the menu options should be displayed again.

If the user enters 'P' or 'p', you should display all the elements (ints) in the list
If the list is empty you should dispaly "[] - the list is empty"
If the list is not empty then all the list elements should be displayed inside square brackets
by a space/
For example [1 2 3 4 5]

if the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
which you will add to the list and then display it was added. For example, if the user enters 5
you should display '5 added'/
Duplicate list entries are ok

*/

#include<iostream>
#include<vector>

using namespace std;

int main() {

char choice;
vector <int> numbers;
int num;
double mean;
int smallest(0);
int largest(0);
int numsum(0);

do {
  cout << "P - Print numbers" << endl;
  cout << "A - Add a number" << endl;
  cout << "M - Display mean of the numbers" << endl;
  cout << "S - Display the smallest number" << endl;
  cout << "L - Display the largest number" << endl;
  cout << "Q - Quit" << endl;
  cout << ' ' << endl;
  cout << "Enter your choice: ";
  cin >> choice;


    switch (choice) {
      case 'P':
        if (numbers.size() == 0) {
          cout << "[] - the list is empty" << endl;
          cout << " " <<endl;
        } else {
          for (auto i: numbers)
            cout << i << endl;
        }
        break;
      case 'p':
        if (numbers.size() == 0) {
          cout << "[] - the list is empty" << endl;
          cout << " " <<endl;
        } else {
          for (auto i: numbers)
            cout << i << endl;
        }
        break;
      case 'A':
        cout << "Enter an integer to add to the list: ";
        cin >> num;
        //While the input entered is not an integer, prompt the user to enter an integer.
        while(!cin)
        {
            cout << "That was no integer! Please enter an integer: ";
            cin.clear();
            cin.ignore();
            cin >> num;
        }
        numbers.push_back(num);
        cout << num << " added" << endl;
        for (auto i = numbers.begin(); i != numbers.end(); i++)
          cout << *i  << ' ' << endl ;
        break;
      case 'a':
        cout << "Enter an integer to add to the list: ";
        cin >> num;
        //While the input entered is not an integer, prompt the user to enter an integer.
        while(!cin)
        {
            cout << "That was no integer! Please enter an integer: ";
            cin.clear();
            cin.ignore();
            cin >> num;
        }
        numbers.push_back(num);
        cout << num << " added" << endl;
        for (auto i = numbers.begin(); i != numbers.end(); i++)
          cout << *i  << ' ' << endl ;
        break;
      case 'M':
        for (auto i = numbers.begin(); i  != numbers.end(); i++)
            numsum += *i;
        mean = static_cast<double>(numsum) / numbers.size();
        cout << "Mean is: " << mean << endl;
        numsum = 0;
        break;
      case 'm':
        for (auto i = numbers.begin(); i  != numbers.end(); i++)
            numsum += *i;
        mean = static_cast<double>(numsum) / numbers.size();
        cout << "Mean is: " << mean << endl;
        numsum = 0;
        break;
      case 'S':
        if (numbers.size() == 0){
          cout << "[] - the list is empty" << endl;
          break;
        }
        else if (numbers.size() == 1) {
          smallest = numbers.at(0);
          cout << "Smallest number is: " << smallest << endl;
          break;
        } else if (numbers.size() > 1) {
          for (unsigned i=0; i < numbers.size(); i++){
            if (numbers.at(i) <= smallest)
              smallest = numbers.at(i);
              continue;
          }
        }
          cout << "Smallest number is: " << smallest << endl;
          break;
      case 's':
        if (numbers.size() == 0){
          cout << "[] - the list is empty" << endl;
          break;
        }
        else if (numbers.size() == 1) {
          smallest = numbers.at(0);
          cout << "Smallest number is: " << smallest << endl;
          break;
        } else if (numbers.size() > 1) {
          for (unsigned i=0; i < numbers.size(); i++){
            if (numbers.at(i) <= smallest)
              smallest = numbers.at(i);
              continue;
          }
        }
          cout << "Smallest number is: " << smallest << endl;
          break;
      case 'L':
        if (numbers.size() == 0){
          cout << "[] - the list is empty" << endl;
          break;
        }
        else if (numbers.size() == 1) {
          smallest = numbers.at(0);
          cout << "Largest number is: " << largest << endl;
          break;
        } else if (numbers.size() > 1) {
          for (unsigned i=0; i < numbers.size(); i++){
            if (numbers.at(i) >= largest)
              largest = numbers.at(i);
              continue;
          }
        }
          cout << "Largest number is: " << largest << endl;
          break;
      case 'l':
        if (numbers.size() == 0){
          cout << "[] - the list is empty" << endl;
          break;
        }
        else if (numbers.size() == 1) {
          smallest = numbers.at(0);
          cout << "Largest number is: " << largest << endl;
          break;
        } else if (numbers.size() > 1) {
          for (unsigned i=0; i < numbers.size(); i++){
            if (numbers.at(i) >= largest)
              largest = numbers.at(i);
              continue;
          }
        }
          cout << "Largest number is: " << largest << endl;
          break;
      case 'Q':
        cout << ' ' << endl;
        cout << "Goodbye!" << endl;
        break;
      case 'q':
        cout << ' ' << endl;
        cout << "Goodbye!" << endl;
        break;
      default:
        cout << "Invalid input, please try again" << endl;
    }


} while(choice != 'Q' && choice != 'q');






  return 0;
}

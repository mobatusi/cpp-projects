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

do {
  cout << "P - Print numbers" << endl;
  cout << "A - Add a number" << endl;
  cout << "M - Display mean of the numbers" << endl;
  cout << "S - Display the smallest number" << endl;
  cout << "L - Display the largest number" << endl;
  cout << "Q - Quit" << endl;

  cout << "Enter your choice: ";
  cin >> choice;


    switch (choice) {
      case 'P':
        if (numbers.size() == 0) {
          cout << "[] - the list is empty" << endl;
          cout << " " <<endl;
        } else {
          cout << numbers.size() << endl;
        }
      case 'p':
        if (numbers.size() == 0) {
          cout << "[] - the list is empty" << endl;
          cout << " " <<endl;
        } else {
          cout << numbers.size() << endl;
        }
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
      case 'M': cout << "You chose " << choice << endl;
      case 'm': cout << "You chose " << choice << endl;
      case 'S': cout << "You chose " << choice << endl;
      case 's': cout << "You chose " << choice << endl;
      case 'L': cout << "You chose " << choice << endl;
      case 'l': cout << "You chose " << choice << endl;
      case 'Q': cout << "Goodbye!" << endl; break;
      case 'q': cout << "Goodbye!" << endl; break;
      default: cout << "Invalid input, please try again" << endl;
    }


} while(choice != 'Q' && choice != 'q');






  return 0;
}

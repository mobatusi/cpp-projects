#include <iostream>
#include <vector>

using namespace std;
// Section 8 Challenge
/*
  For this program I will be using US dollars and cents

  While a program that asks the user to enter the following:
  An integer representing the number of cents

  You may assume that the number of cents enetered is greater than or equal to zero

  The program should then display how to provide that change to the user.

  In the US:
    1 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents
    1 nickel is 5 cents and
    1 penny is 1 cents

  Here is a sample run:

  Enter an amount in cents: 92

  You can provide this change as follows:
  dollars :0
  quaters :3
  dimes   :1
  nickels :1
  pennies :2

  Feel free to use your own currency system
  Also, think of how you might solve the problem using the modulo operator

  Have fun and test your program!
*/
int main() {
  int cents(0),dollars(0),quarters(0),dimes(0),nickels(0),pennies(0);

  cout << "Enter an amount in cents: " << endl;
  cin >> cents;

  dollars = static_cast<double>(cents) / 100;
  // cout << dollars << endl;
  // cout << ((cents - dollars*100)%100) << endl;
  // if ((cents - dollars*100) % 100 != 0) cout << "you have change" << endl;
  cents = cents - (dollars * 100);
  quarters = (static_cast<double>(cents) / 25);
  cents = cents - (quarters * 25);
  dimes = (static_cast<double>(cents) / 10);
  cents = cents - (dimes * 10);
  nickels = (static_cast<double>(cents) / 5);
  cents = cents - (nickels * 5);
  pennies = (static_cast<double>(cents) / 1);
  cents = cents - (pennies * 1);

  cout << "dollars: "   << dollars  << endl;
  cout << "quarters: "  << quarters << endl;
  cout << "dimes: "     << dimes    << endl;
  cout << "nickels: "   << nickels  << endl;
  cout << "pennies: "   << pennies  << endl;

  return 0;
}

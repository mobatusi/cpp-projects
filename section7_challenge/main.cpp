#include <iostream>
#include <vector>

using namespace std;
/*
Declare 2 empty vectors of integers names vector1 and vector2, respectively

Add 10 and 20 to vector1 dynamically using push_back
Display the elements in vector1 using the at() method as well as its size using
the size() method

Add 100 and 200 to vector2 dynamically using the push_back
Display the elements in vector2 suing the at() methods as well as its size using
the size() method

Declare an empty 2D vector using vector_2d
Remember, that a 2D vector is a vector of vector <int>

Add vector1 to vector_2d dynamically using push_back
Add vector2 to vector_2d dynamically using push_back

Display the elements in vector_2d using the at() methods

Change vector1 at(0) t0 1000

Display the elements in vector_2d again using the at() methods

Display the elements in vector1

What did you expect? Did you get what you expected? What do you think happened?

*/
int main(){

vector <int> vector1;
vector <int> vector2;
vector <vector <int> > vector_2d;

vector1.push_back(10);
vector1.push_back(20);

cout << vector1.at(0) << endl;
cout << vector1.at(1) << endl;
cout << "Size of vector1: " << vector1.size() << endl;
cout << "===================================" << endl;

vector2.push_back(100);
vector2.push_back(200);

cout << vector2.at(0) << endl;
cout << vector2.at(1) << endl;
cout << "Size of vector2: " << vector2.size() << endl;
cout << "===================================" << endl;

vector_2d.push_back(vector1);
vector_2d.push_back(vector2);

cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1)  << endl;
cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1)  << endl;
cout << "===================================" << endl;

vector1.at(0) = 1000;

cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1)  << endl;
cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1)  << endl;
cout << "===================================" << endl;

cout << vector1.at(0) << endl;
cout << vector1.at(1) << endl;
cout << "===================================" << endl;


}

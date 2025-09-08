#include <iostream>
#include <string>
using namespace std;

int main() {

string FullNameee, CourseYearSeccc, Placeee , Hobbies;

//input
cout << “Enter your Full Name: “;
getline (cin, FullNameee);

cout << “Enter your Course, Year and Section: “;
getline (cin, CourseYearSeccc);

cout << “Enter your Place: “;
getline (cin, Placeee);

cout << “Enter your Hobbies in life;
getline (cin, Hobbies);

//output

cout << “Hi! I’m “ << FullNameee << “of “ << CourseYearSeccc << “. Welcome to Data Structure and Algorithm!” << endl;
cout << “ I lived at  “ << Placeee << “. And my Hobbies in life is “ << Hobbies << “.” endl;

return 0;

}

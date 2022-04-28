/*
Write a program that asks the user to enter a positive number and then prints out the square root of that number to 2 decimal places.

Sample I/O:

Enter a positive number:
3
To 2 decimal place, 3 square root is 1.73
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  int num1 ;
  cout << "Enter a positive number \n";
  cin >> num1 ;
  double root = sqrt(num1);
  cout << fixed << setprecision(2) << "To 2 decimal place, "
  << num1 << " square root is " << root << "\n";

  return 0;
}

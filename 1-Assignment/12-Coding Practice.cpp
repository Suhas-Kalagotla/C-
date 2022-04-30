/*
Write a program to swap two numbers without using temporary variable.

Sample I/O
Enter First Number:
2
Enter Second Number:
3
Before swapping:
num1 is: 2 and num2 is: 3
After swapping:
num1 is: 3 and num2 is: 2
*/

#include <iostream>
using namespace std;

int main(){
  int a{} , b{} ;
  cout << "Enter First Number :\n" ;
  cin >> a ;
  cout << "Enter first Number :\n";
  cin >> b ;

  cout << "Before swapping:\n";
  cout << "num1 is: " << a << " and num2 is: " << b << endl;

  a = a+ b ;
  b = a - b ;
  a = a - b ;

  cout << "After swapping:\n";
  cout << "num1 is: " << a << " and num2 is: " << b;
  return 0 ;
}

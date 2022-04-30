/*
Write a program to swap two numbers

Sample I/O
2
3
Before swapping:
num1 is: 2 and num2 is: 3
After swapping:
num1 is: 3 and num2 is: 2

*/
#include <iostream>
using namespace std;

int main(){
  int num1 , num2 ;
  cin >> num1 >> num2 ;
  cout << "Before swapping:\n";
  cout << "num1 is: " << num1 << " and num2 is: " << num2 << endl ;

  int temp = num1  ;
  num1 = num2 ;
  num2 = temp ;

  cout << "num1 is: " << num1 << " and num2 is: " << num2 ;

}

/*
Write a program to find power of a number

Input Format
Enter Base:
2
Enter Exponent:
3

Output
2 power 3 is 8
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int base , exponent;
  cout << "Enter Base:\n";
  cin >> base ;

  cout << "Enter Exponent:\n";
  cin >> exponent;

  float power = pow(base,exponent);

  cout << base << " power " << exponent << " is " << power;
}

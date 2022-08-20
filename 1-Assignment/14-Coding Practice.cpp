/*
Write a program to convert Fahrenheit to Celsius.


Sample I/O:

Enter a temperature in Fahrenheit:
99.5
99.5 degree Fahrenheit is equal to 37.5 degree Celsius
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  float fah{};
  cout << "Enter a temperature in Fahrenheit:\n";
  cin >> fah;

  float cel = (fah - 32.0 )* (5.0/9.0);

  cout <<fixed << setprecision(1)<< fah << " degree Fahrenheit is equal to " << cel
  << " degree Celsius";
  return 0;
}

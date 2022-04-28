/*
Write a Program to Calculate Area and Perimeter of Circle.

Sample I/O:

Enter radius of circle:
50
The area of the circle is 7853.98 and The perimeter of the circle is 314.16
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  int radius {};
  cout << "Enter radius of circle: \n";
  cin >> radius;

  double area {}, perimeter{};
  area = M_PI * radius * radius;
  perimeter = 2 * M_PI * radius;

  cout << "The area of the circle is " << fixed << setprecision(2) << area
  << " and The perimeter of the circle is " << perimeter;

}

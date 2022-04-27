/*‘The volume of a sphere with radius r is 4/3 π r3.
Input radius and calculate volume of a sphere.

Input :
Enter radius : 5
Output:
Volume of a sphere with radius 5 is 523.599

*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int radius{};
  cout << "Enter radius : ";
  cin >> radius;

  double area = (4 * M_PI * pow(radius,3))/3;

  cout << "Volume of a sphere with radius " << radius
  << " is " << area;

}

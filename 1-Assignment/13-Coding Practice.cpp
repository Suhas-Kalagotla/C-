/*Write a Program to convert given number of days to a
measure of time given in years, weeks and days.
For example 375 days is equal to 1 year 1 week and 3 days (ignore leap year )

Sample I/O:

Enter the number of days
1000
1000 days has 2 years, 38 weeks and 4 days
*/

#include <iostream>
using namespace std;

int main(){
  int no_days{} , year{} , week{} , days{};
  cout << "Enter the number of days \n";
  cin >> no_days;
  year = no_days / 365 ;
  week = (no_days % 365 ) / 7;
  days = no_days  - (year * 365) - (week * 7 );

  cout << no_days << " days has " << year << " years, "
  << week << " weeks and " << days << " days";
  return 0 ;
}

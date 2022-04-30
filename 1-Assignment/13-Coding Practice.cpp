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

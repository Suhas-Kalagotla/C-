/*
Ask the user for a number.
Depending on whether the number is even or odd,
print out an appropriate message to the user.
*/

#include <iostream>
using namespace std;

int main(){
  cout << "Enter a number:\n";
  int num{};
  cin >> num;

  if (num % 2 == 0){
    cout << "You picked an even number";
  } else{
    cout << "You picked an odd number";
  }

  return 0;
}

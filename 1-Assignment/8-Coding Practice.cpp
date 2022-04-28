/*
Write a function to accept two values from user and
returns the result
*/

#include <iostream>
using namespace std;

int add_nums(int num1,int num2){
  int sum = num1 + num2;
  return sum;
}

int main(){
  int num1 , num2 ;
  cout << "Enter two numbers ";
  cin >> num1 >> num2;
  int sum = add_nums(num1,num2) ;

  cout << sum << "\n";
  return 0;
}

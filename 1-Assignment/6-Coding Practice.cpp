/*
Rahul’s basic salary is input through the keyboard.
His dearness allowance is 50% of basic salary and house
rent allowance is 30% of basic salary.
Write a program to calculate his total salary.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int salary {};
  cout << "Input Basic salary :\n";
  cin >> salary ;

  double DA, HRA, t_salary ;

  DA = salary * 50 / 100 ;
  HRA = salary * 30 / 100 ;
  t_salary = DA + salary + HRA ;

  cout << "DA: " << fixed << setprecision(2) << DA << endl;
  cout << "HRA: " << fixed << setprecision(2) << HRA << endl;
  cout << "Total salary: "<< fixed << setprecision(2) << t_salary ;
}

/*
Write a program to accept integer from user and double the value

Input Format
Enter any Integer:
4

Output Format
Double= 8
*/

#include <iostream>

int main()
{
  int num;
  std::cout << "Enter any Integer:" << std::endl;
  std::cin >> num ;

  int ans = num + num ;

  std::cout << "Double= " << ans << std::endl;
  return 0;
}

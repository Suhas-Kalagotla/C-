/*
Suppose the cover price of a book is 24.95rs, but bookstores
get a 40% discount. Shipping costs 3rs for the first copy and
75 paisa for each additional copy. What is the total wholesale cost for n copies?

Input :
How many books do you want to order at wholesale?
60

Output :
The cost of buying and shipping 60 books is 945.45
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double cp {24.95}  ;
  int quantity{};

  cout << "How many books do you want to order at wholesale? \n";
  cin >> quantity ;

  double dis = cp * 0.4 ;
  double price = cp - dis;
  double f_bill = (price * quantity) + ((quantity-1)*0.75) +3;

  cout << "The cost of buying and shipping " << quantity
  << " books is " << fixed << setprecision(2) << f_bill ;

  return 0;
}

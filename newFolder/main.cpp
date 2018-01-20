#include <iostream>
using namespace std;

void printFavorateInteger (int x);

int main()
{
  int a;
  cout << "Enter your favorate integer :" << endl;
  cin >> a;
  printFavorateInteger(a);
  return 0;
}

void printFavorateInteger (int x)
{
  cout << "Your favorate integer is "<< x <<endl;
}

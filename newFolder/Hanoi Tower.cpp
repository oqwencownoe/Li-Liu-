#include <iostream>

using namespace std;

long ICount;

void move(int n, char x, char y, char z)
{
  if(n == 1)
    cout << "Times:" << ++ICount << x << "->" << z <<endl;
  else
  {
    move(n-1, x, z, y);
    cout << "Times:" << ++ICount << x << "->" << z << endl;
    move(n-1, y, x, z);
  }
}

int main()
{
  int n;
  ICount = 0;
  cout << "please input a number" << endl;
  cin >> n;
  move(n, 'a', 'b', 'c');
}

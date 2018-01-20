#include <iostream>

using namespace std;

int main()
{
  int n,m;
  cin >> n;
  cin >> m;
  int sequence[n+10];
  for(int i = 1; i < n + 1; i++)
  {
    sequence[i - 1] = i;
  }
  int p,q;
  int a;
  for(int i = 1; i <= m; i++)
  {
    cin >> a >> q;
    for(int j = 1; j <= n; j++)
    {
      if(sequence[j - 1] == a)
      {
        p = j;
      }
    }
    int temp = sequence[p - 1];
    for(int j = p; j < n; j++)
    {
      sequence[j - 1] = sequence[j];
    }
    for(int j = n; j >= p + q + 1; j--)
    {
      sequence[j - 1] = sequence[j - 2];
    }
    sequence[p + q - 1] = temp;
  }
  for(int i = 1; i <= n; i++)
  cout << sequence [i - 1] << " ";
}

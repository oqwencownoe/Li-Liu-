#include <iostream>

using namespace std;

int main()
{
  int n, p;
  cin >> n >> p;
  int a[n];
  a[0] = 0;
  a[n + 1] = 0;
  int ans[n + 1];
  ans[0] = 0;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= n + 1; i++)
  {
    if (i <= p)
    {
      int temp = ans[0];
      for (int k = 1; k <= i - 1; k++)
      {
        if(ans[k] > temp)
          temp = ans[k];
      }
      ans[i] = temp + a[i];
    }
    else
    {
      int temp = ans[i - p];
      for (int k = i - p + 1; k <= i - 1; k++)
      {
        if(ans[k] > temp)
          temp = ans[k];
      }
      ans[i] = temp + a[i];
    }
  }
  cout << ans[n + 1];
  return 0;
}

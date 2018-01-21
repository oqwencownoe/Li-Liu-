#include <iostream>

using namespace std;

int main()
{
  int w,n;
  int s = 0;
  cin >> w >> n;
  int array[n];
  for (int i = 1; i <= n; i++)
  {
    cin >> array[i];
  }
  for (int i = 1; i < n; i ++)
  {
  	if (array[i] >= 0)
  	{
    int min = w + 1;
    int k = 0;
    for (int j = i + 1; j <= n; j ++)
    {
      if (array[j] >= 0)
  	    {
  	      int sum = array[i] + array[j];
  	      if (sum < min)
 	       {
 	         min = sum;
 	         k = j;
 	       }
 	     }
  	    else
  	    	continue;
  	  }
  	  if (min <= w)
  	    array[k] = -1;
      s++;
	}
	else
		continue;
  }
  cout << s;
}

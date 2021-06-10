/**
 *      Author: Kessyus Fofano
 *      Email:  kessyus@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 0;
  long long int high, count = 0;
  cin >> n;

  while (n--)
  {
    long long int temp;
    cin >> temp;
    if (temp > high)
    {
      high = temp;
      count = 1;
    }
    else if (temp == high)
    {
      count++;
    }
  }

  cout << count << "\n";

  return 0;
}

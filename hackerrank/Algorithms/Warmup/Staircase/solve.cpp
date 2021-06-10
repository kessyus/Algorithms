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

  int n;
  cin >> n;

  int spaces = n - 1;
  int hashtags = 1;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < spaces; j++)
    {
      cout << " ";
    }
    for (int k = 0; k < hashtags; k++)
    {
      cout << "#";
    }
    cout << "\n";
    spaces--;
    hashtags++;
  }

  return 0;
}

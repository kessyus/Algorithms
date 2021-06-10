/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  int a[n];
  for (auto i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  int d{}, m{}, count{};
  cin >> d >> m;

  for (auto i = 0; i < n; ++i)
  {
    int sum{};
    for (auto j = i; j < (m + i); ++j)
    {
      sum += a[j];
    }
    if (sum == d)
      count++;
  }

  cout << count << endl;

  return 0;
}

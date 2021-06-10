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
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    v.push_back(num);
  }

  int pos{};
  int neg{};
  int zer{};

  for (auto i : v)
  {
    if (i > 0)
      pos++;
    if (i < 0)
      neg++;
    if (i == 0)
      zer++;
  }

  double base = (double)n;
  cout << fixed << setprecision(6);
  cout << pos / base << "\n";
  cout << neg / base << "\n";
  cout << zer / base << "\n";

  return 0;
}

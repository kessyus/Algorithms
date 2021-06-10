/**
 *      Author: Kessyus Fofano
 *      Email:  kessyus@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

int main()
{

  //  #ifndef ONLINE_JUDGE
  //  freopen("input.txt", "rt", stdin);
  //  freopen("output.txt", "wt", stdout);
  //  #endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<long long> v;
  for (int i = 0; i < 5; i++)
  {
    long long temp = 0;
    cin >> temp;
    v.push_back(temp);
  }

  sort(v.begin(), v.end());

  long long min{};
  long long max{};

  for (int i = 0; i < 5; i++)
  {
    if (i != 0)
      max += v[i];
    if (i != 4)
      min += v[i];
  }

  cout << min << " " << max;

  //  #ifndef ONLINE_JUDGE
  //  cout << "\nTime Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
  //  #endif

  return 0;
}

/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */

  int n, q = 0;
  cin >> n;
  vector<int> v;

  for (int i = 0; i < n; ++i)
  {
    int temp{};
    cin >> temp;
    v.push_back(temp);
  }

  cin >> q;
  for (int i = 0; i < q; ++i)
  {
    int temp = 0;
    cin >> temp;
    vector<int>::iterator low, up;
    low = lower_bound(v.begin(), v.end(), temp);
    up = upper_bound(v.begin(), v.end(), temp);
    if (v.at(low - v.begin()) == temp)
    {
      cout << "Yes " << (low - v.begin() + 1) << endl;
    }
    else
    {
      cout << "No " << (low - v.begin() + 1) << endl;
    }
  }
  return 0;
}

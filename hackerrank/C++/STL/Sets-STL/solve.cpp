/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */

  int q, x, y = 0;
  set<int> s;
  cin >> q;

  for (int i = 0; i < q; ++i)
  {
    cin >> y >> x;
    if (y == 1)
    {
      s.insert(x);
    }
    else if (y == 2)
    {
      s.erase(x);
    }
    else
    {
      set<int>::iterator it;
      it = s.find(x);
      if (it == s.end())
      {
        cout << "No\n";
      }
      else
      {
        cout << "Yes\n";
      }
    }
  }
  return 0;
}

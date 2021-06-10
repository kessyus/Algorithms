/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int q, func, score = 0;
  string name;
  map<string, int> m;
  cin >> q;

  for (int i = 0; i < q; ++i)
  {
    cin >> func >> name;
    if (func == 1)
    {
      cin >> score;
      m[name] += score;
    }
    else if (func == 2)
    {
      m.erase(name);
    }
    else
    {
      cout << m[name] << "\n";
    }
  }
  return 0;
}

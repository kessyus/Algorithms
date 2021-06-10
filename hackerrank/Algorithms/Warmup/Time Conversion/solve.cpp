/**
 *      Author: Kessyus Fofano
 *      Email:  kessyus@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

void print24(string str)
{
  int h1, h2, hour;
  char l;

  h1 = (int)str[0] - '0';
  h2 = (int)str[1] - '0';
  l = str[8];

  hour = h1 * 10 + h2;

  if (l == 'P')
  {
    if (hour == 12)
    {
      cout << "12";
    }
    else
    {
      hour += 12;
      cout << hour;
    }
  }
  else
  {
    if (hour == 12)
    {
      cout << "00";
    }
    else if (hour >= 10)
    {
      cout << hour;
    }
    else
    {
      cout << "0" << hour;
    }
  }

  for (int i = 0; i < 6; ++i)
  {
    cout << str[i + 2];
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string t;
  cin >> t;

  print24(t);

  return 0;
}

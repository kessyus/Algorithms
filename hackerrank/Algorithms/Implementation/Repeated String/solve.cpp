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

  string s;
  cin >> s;
  long long n;
  cin >> n;

  long long result = 0;

  if (n > s.length())
  {

    int countA = 0;
    // count 'a' in string
    for (auto i = 0; i < s.length(); i++)
    {
      if (s[i] == 'a')
        countA++;
    }

    // integer division
    long long letterA = (n / s.length()) * countA;

    // fraction
    long long fraction = (n % s.length());
    long long remainingA = 0;
    for (auto i = 0; i < fraction; i++)
    {
      if (s[i] == 'a')
        remainingA++;
    }

    result = letterA + remainingA;
  }
  else
  {

    int countA = 0;
    // count 'a' in string
    for (auto i = 0; i < n; i++)
    {
      if (s[i] == 'a')
        countA++;
    }

    result = countA;
  }

  cout << result << endl;

  return 0;
}

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

  // test cases
  int t;
  cin >> t;

  while (t > 0) {
    // construct the array
    int n; cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int sum = 0;
    bool tooChaotic = false;
    for (int i = 0; i < n; i++) {
      if (arr[i] - i > 3){
        tooChaotic = true;
        break;
      }

      // 0 1 2 3 4 5 6 7
      // 1 2 3 4 5 6 7 8
      // 1 2 5 3 7 8 6 4

      for (int j = max(0, arr[i] - 2); j < i; j++)
        if (arr[j] > arr[i]) sum++;

    }

    t--;

    if (tooChaotic)
      cout << "Too chaotic" << endl;
    else
      cout << sum << endl;
  }

  return 0;
}

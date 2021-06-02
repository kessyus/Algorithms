/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int b, n, m; cin >> b >> n >> m;
  int keys[n];
  int drives[m];
  for (auto i=0; i<n; i++){
    cin >> keys[i];
  }
  for (auto i=0; i<m; i++){
    cin >> drives[i];
  }

  int price = -1;

  // run the two arrays combining each price
  for (auto i=0; i<n; i++){
    for (auto j=0; j<m; j++){
      int sum = keys[i] + drives[j];
      if ((sum <= b) && (sum > price))
        price = sum;
    }
  }

  cout << price << endl;

  return 0;
}

/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int arr[6][6];
  for (auto i=0; i<6; i++){
    for (auto j=0; j<6; j++){
      cin >> arr[i][j];
    }
  }

  int sum = 0;
  int max = 0;

  for (auto i=1; i < 5; i++) {
    for (auto j=1; j < 5; j++){
      // sum first line
      sum = arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1];
      // sum center
      sum += arr[i][j];
      // sum bottom line
      sum += arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];
      if (i==1 && j==1)
        max = sum;
      else
        if (sum > max)
          max = sum;
    }
  }

  cout << max << endl;

  return 0;
}

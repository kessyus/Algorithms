/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n, k, count {};
  cin >> n >> k;
  int ar[n];
  for(int i=0; i<n; ++i){
    cin >> ar[i];
  }

  for(int i=0; i<(n-1); ++i){
    for(int j=i+1; j<n; ++j){
      if ((ar[i]+ar[j])%k==0)
        count++;
    }
  }

  cout << count << "\n";

  return 0;
}

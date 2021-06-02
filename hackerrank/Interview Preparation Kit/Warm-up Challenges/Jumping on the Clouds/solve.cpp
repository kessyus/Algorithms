/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n; cin>>n;
  int arr[n];
  for(auto i=0; i<n; i++){
    cin>>arr[i];
  }

  int jumps=0;

  for(auto i=0; i<n; i++){
    if ((n>i+2) && arr[i+2]==0){
      jumps++;
      i++;
    } else if ((n>i+1) && arr[i+1]==0) {
      jumps++;
    }
  }

  cout << jumps << '\n';

  return 0;
}

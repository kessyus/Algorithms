/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int pair = 0;
  int n; cin >> n;
  int ar[n];
  for(auto i=0; i<n; i++){
    cin >> ar[i];
  }

  for(auto i=0; i<n-1; i++){
    if (ar[i]!=0) {
      for(auto j=i+1; j<n; j++){
        if (ar[j]!=0){
          if (ar[i] == ar[j]) {
            pair++;
            ar[j]=0;
            ar[i]=0;
          }
        }
      }
    }
  }

  cout << pair << "\n";

  return 0;
}

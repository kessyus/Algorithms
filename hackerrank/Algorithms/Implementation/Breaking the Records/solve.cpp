/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE 
  freopen("input.txt", "r", stdin); 
  freopen("error.txt", "w", stderr); 
  freopen("output.txt", "w", stdout); 
  #endif
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 
  int n; cin >> n;
  int max {}, min {}, max_count {}, min_count{}, temp {};
  for (int i=0; i<n; ++i){
    cin >> temp;
    if (i==0) {
      max = min = temp;
    } else {
      if (temp>max) {
        max = temp;
        ++max_count;
      }
      if (temp<min) {
        min = temp;
        ++min_count;
      }
    }
  }

  cout << max_count << " " << min_count << "\n";
   
  #ifndef ONLINE_JUDGE 
  cerr << "Time Elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s\n";
  #endif
  return 0;
}

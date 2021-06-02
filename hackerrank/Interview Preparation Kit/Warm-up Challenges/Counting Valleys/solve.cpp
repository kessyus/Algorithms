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
  char arr[n];
  for(auto i=0; i<n; i++){
    cin >> arr[i];
  }

  int level=0;
  int valley=0;

  for(auto i=0; i<n; i++){
    // count valleys
    if (level==-1 && arr[i]=='U')
      valley++;

    // setup level
    if (arr[i]=='D')
      level--;
    else
      level++;
  }

  cout << valley << '\n';

  return 0;
}

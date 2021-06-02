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
  vector<int> arr;
  int temp;
  for(auto i=0; i<n; i++){
    cin>>temp;
    arr.push_back(temp);
  }

  int swaps=0;

  for(auto i=0; i<n; i++){
    if(arr[i] != i+1){
      swap(arr[i],arr[arr[i]-1]);
      swaps++;
      i--;
    }
  }

  cout << swaps << endl;

  return 0;
}

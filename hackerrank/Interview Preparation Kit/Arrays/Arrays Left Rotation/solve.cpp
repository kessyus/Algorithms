/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, d; cin >> n >> d;
  int num;
  deque<int> arr;
  for(auto i=0; i<n; i++){
    cin >> num;
    arr.push_back(num);
  }

  int temp;
  while (d>0){
    temp = arr.front();
    arr.pop_front();
    arr.push_back(temp);
    d--;
  }

  for (auto i=arr.begin(); i!=arr.end(); i++){
    cout << *i << " ";
  }

  return 0;
}

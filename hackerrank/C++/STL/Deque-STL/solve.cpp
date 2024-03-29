/**
 *      Author: Kessyus Fofano
 *      Email:  kessyus@gmail.com
**/

#include <bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int n, int k){
  deque<int> dq;

  for (int i=0; i<n; i++){
    // base case for first element
    if (dq.empty()){
      dq.push_back(i);
    }
    // remove elements outside the current window
    if (dq.front() <= (i - k)){
      dq.pop_front();
    }
    // move max element to the front
    while (!dq.empty() && arr[i] >= arr[dq.back()]){
      dq.pop_back();
    }
    dq.push_back(i);
    // print out only when the first window is completed
    if (i >= (k - 1)){
      cout << arr[dq.front()] << " ";
    }
  }
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t--){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++)
      cin >> arr[i];
    printKMax(arr, n, k);
  }

  return 0;
}

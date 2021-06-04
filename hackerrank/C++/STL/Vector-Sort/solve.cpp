/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int size {};
    cin >> size;
    vector<int> v;

    for(int i=0; i<size; ++i){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(),v.end());

    for(int i=0; i<size; ++i){
        cout << v[i] << " ";
    }

    return 0;
}

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

    int size, a, b, c {};
    cin >> size;
    vector<int> v;

    for(int i=0; i<size; ++i){
        int temp {};
        cin >> temp;
        v.push_back(temp);
    }

    cin >> a >> b >> c;

    v.erase(v.begin()+a-1);
    v.erase(v.begin()+b-1, v.begin()+c-1);

    cout << v.size() << "\n";
    for(int i=0; i<v.size(); ++i){
        cout << v[i] << " ";
    }
    return 0;
}


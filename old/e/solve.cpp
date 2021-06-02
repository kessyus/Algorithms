#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio (false) ;
        cin.tie(0); cout.tie(0);

    vector <int> vec {2, 4, 6, 8};
    int vec_size = vec.size();
    //cout << vec_size;
    int result {};
    
    for (auto i = 0; i <= (vec_size - 1); ++i) {
        for (auto j = i + 1; j <= (vec_size - 1); ++j) {
            result += vec.at(i) * vec.at(j);
            //cout << vec.at(i) << " * " << vec.at(j) << " " << result << "\n";
        }
    }

    //cout << "The total amount is: " << result << "\n";
    
        
    return 0;
}

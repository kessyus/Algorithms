#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio (false) ;
    	cin.tie(0); cout.tie(0);

	int T;
	long N;
	long long cost = 0;
	
	cin >> T;
	for (int k = 0; k < T; k++) {
		cin >> N;
		long C[2][N];

		for (long i = 0; i < 2; i++) {
			for (long j = 0; j < N; j++) {
				cin >> C[i][j];
			}
		}
	
		long min = 0;
		for (long i = 0; i < N; i++) {
		        if (i == 0) {
		        	min = C[0][i];
			} else {
				if (C[0][i] < min) min = C[0][i];
			}
			cost += (min * C[1][i]);
		}
		cout << cost << "\n";
		cost = 0;
	}                           
	return 0;
}
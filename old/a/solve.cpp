#include <bits/stdc++.h>

using namespace std;

long fatorial (long a, long b);

int main() {
	int t;
	cin >> t;
	
	string word;
	long sum = 0;                                       

	while (cin >> word) {
		long a;
		a = word.size();
		for (long i = 0; i <= a; i++) {
			if (word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U') {
				sum += fatorial(a, i + 1);
			}
									
		}
		cout << sum << "\n";
		sum = 0;
	}                        
	return 0;
}

long fatorial (long a, long b) {
	if (b > 0) {
		return (a - b + 1) + fatorial (a - 1, b -1);
	} else {
		return 0;
	}
}
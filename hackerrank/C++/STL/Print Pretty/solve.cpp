/**
 *      Author: Kessyus Fofano
 *      Email: kessyus@gmail.com
**/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
		/* Enter your code here */
        // Line 1
        cout << hex << left << showbase << nouppercase;
        cout << (long long)A << "\n";
        // Line 2
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
        cout << B << "\n";
        // Line 3
        cout << scientific << uppercase << noshowpos << setprecision(9);
        cout << C << "\n";
	}
	return 0;

}

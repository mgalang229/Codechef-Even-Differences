#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int even = 0;
		int odd = 0;
		// count the number of evens and odds in the list
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			if (a % 2 == 0) {
				even++;
			} else {
				odd++;
			}
		}
		// the answer is based on these observations:
		// even - odd = odd
		// even - even = EVEN
		// odd - odd = EVEN
		// odd - even = odd
		// the key is to recognize that to make them all even, they all must have the same parity
		// find the minimum number between the evens and odds in the list
		cout << min(even, odd) << '\n';
	}
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	long long x, y, p;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> x >> y >> p;
		int result = 1;
		for(int i = 0; i < y; i++) {
			result = (result * x) % p;
		}
		cout << result << endl;
	}
}

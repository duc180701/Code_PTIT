#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	long long k;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n >> k;
		long long sum = 0;
		for(int i = 1; i <= n; i++) {
			sum += i % k;
		}
		cout << sum << endl;
	}
}

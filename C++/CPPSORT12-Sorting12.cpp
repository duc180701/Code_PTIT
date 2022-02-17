#include<bits/stdc++.h>

using namespace std;

int main() {
	long long n, m;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n >> m;
		long long a[n + 1];
		long long b[m + 1];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < m; i++) {
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b, b + m);
		long long res = a[n - 1] * b[0];
		cout << res << endl;
	}
	return 0;
}


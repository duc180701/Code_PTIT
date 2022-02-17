#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n >> k;
		long long a[n + 1];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		for(int i = 0; i < k; i++) {
			cout << a[n - 1] << " ";
			n--;
		}
		cout << endl;
	}
	return 0;
}

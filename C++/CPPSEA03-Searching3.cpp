#include<bits/stdc++.h>

using namespace std;

int main() {
	long long n;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n;
		long long a[n + 1];
		for(int i = 0; i < n - 1; i++) {
			cin >> a[i];
		}
		long long j = 0;
		while(a[j + 1] - a[j] == 1) j++;
		cout << a[j] + 1 << endl;
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int dd[100001] = {0};

int main() {
	long long n;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n;
		long long a[n + 1];
		for(long long i = 0; i < n; i++) {
			cin >> a[i];
			dd[a[i]]++;
		}
		sort(a, a + n);
		int cnt = 0;
		for(long long i = a[0]; i < a[n - 1]; i++) {
			if(dd[i] < 1) cnt++;
		}
		cout << cnt << endl;
		for(long long i = 0; i <= 100001; i++) {
			dd[i] = 0;
		}
	}
	return 0;
}


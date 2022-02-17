#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	long long x;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n >> x;
		long long a[n + 1];
		long long cnt = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			if(a[i] == x) cnt++;
		}
		if(cnt > 0) cout << cnt << endl;
		else cout << "-1" << endl;
	}
	return 0;
}

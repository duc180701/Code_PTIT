#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, q;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n >> q;
		int a[n + 1];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		while(q--) {
			int l, r;
			int sum = 0;
			cin >> l >> r;
			for(int i = l - 1; i <= r - 1; i++) {
				sum += a[i];
			}
			cout << sum << endl;
		}
		cout << endl;
	}
	return 0;
}

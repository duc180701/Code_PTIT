#include<bits/stdc++.h>

using namespace std;

int main() {
	long long n, x;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n >> x;
		long long a[n + 1];
		for(long long i = 0; i < n; i++) {
			cin >> a[i];	
		}
		for(long long i = 0; i < n; i++) {
			if(a[i] == x) {
				cout << i + 1 << endl;
				break;
			}
		}
	}
	return 0;
}

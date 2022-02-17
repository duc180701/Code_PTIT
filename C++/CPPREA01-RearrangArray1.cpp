#include<bits/stdc++.h>

using namespace std;

int main() {
	long long n;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n;
		long long a[n + 1];
		long long b[n + 1];
		for(long long i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(long long i = 0; i < n; i++) {
			b[i] = -1;
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(i == a[j]) {
					b[i] = i;
				}
			}
		}
		for(long long i = 0; i < n; i++) {
			cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

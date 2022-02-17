#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n;
		long long a[n + 1];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long long min = 10000001;
		for(int i = 0; i < n - 1; i++) {
			for(int j = i + 1; j < n; j++) {
				if(abs(a[i] + a[j]) < abs(min)) {
					min = a[i] + a[j];
				}
			}
		}
 		cout << min << endl;
	}
	return 0;
}

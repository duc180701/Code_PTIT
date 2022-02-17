#include<bits/stdc++.h>

using namespace std;

bool check(long long arr[], long long a, long long b) {
	for(long long i = a; i < b - 1; i++) {
		for(long long j = i + 1; j < b; j++) {
			if(arr[i] == arr[j]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	long long n;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n;
		int kt = 0;
		long long arr[n + 1];
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for(long long i = 0; i < n - 1; i++) {
			for(long long j = i + 1; j < n; j++) {
				if(arr[i] == arr[j] && check(arr, i, j)) {
					cout << arr[i];
					kt = 1;
					break;
				}
			}
			if(kt) {
				cout << endl;
				break;
			}
		}
		if(!kt) cout << "-1" << endl;
	}
	return 0;
}

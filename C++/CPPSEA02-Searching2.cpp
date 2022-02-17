#include<bits/stdc++.h>

using namespace std;

int main() {
	long long n;
	long long x;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		int kt = 0;
		cin >> n >> x;
		long long a[n + 1];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n; i++) {
			if(a[i] == x) {
				kt = 1;
				cout << "1" << endl;
				break;
			}
		}
		if(!kt) {
			cout << "-1" << endl;
		}
	}
	return 0;
}


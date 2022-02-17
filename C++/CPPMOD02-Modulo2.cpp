#include <bits/stdc++.h>

using namespace std;

int findX(int a, int m) {
	for(int i = 0; i < m; i++) {
		if((a * i) % m == 1) {
			return i;
		}
	}
	return -1;
}

int main() {
	int a, m;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> a >> m;
		cout << findX(a, m) << endl;
	}
}

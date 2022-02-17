#include<bits/stdc++.h>

using namespace std;

int main() {
	int testCase;
	cin >> testCase;
	int n;
	while(testCase--) {
		cin >> n;
		int a[n + 1];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		int l = 0;
		int r = n - 1;
		while(r >= l) {
			if(r == l) {
				cout << a[r] << " ";
			} else {
				cout << a[r] << " " << a[l] << " ";
			}
			l++;
			r--;
		}
		cout << endl;
	}
	return 0;
}


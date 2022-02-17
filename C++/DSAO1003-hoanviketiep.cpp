#include<bits/stdc++.h>

using namespace std;

int main() {
	int testCase;
	cin >> testCase;
	while(testCase--) {
		int n;
		cin >> n;
		int a[n + 1];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int j = n - 2;
		while(j >= 0 && a[j] > a[j + 1]) j--;
		int k = n - 1;
		while(a[k] < a[j]) k--;
		swap(a[k], a[j]);
		int l = j + 1;
		int r = n - 1;
		while(l < r) {
			swap(a[l], a[r]);
			l++;
			r--;
		}
		for(int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}


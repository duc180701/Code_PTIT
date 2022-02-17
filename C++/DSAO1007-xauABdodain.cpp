#include<bits/stdc++.h>

using namespace std;

int a[11];
int n;

bool laststr() {
	for(int i = 0; i < n; i++) {
		if(a[i] == 0) return false;
	}
	return true;
}

int main() {
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n;
		for(int i = 0; i < n; i++) {
			a[i] = 0;
		}
		while(!laststr()) {
			for(int i = 0; i < n; i++) {
				if(a[i] == 0) cout << "A";
				else cout << "B";
			}
			cout << " ";
			for(int i = n - 1; i >= 0; i--) {
				if(a[i] == 0) {
					a[i] = 1;
					for(int j = i + 1; j < n; j++) {
						a[j] = 0;
					}
					break;
				}
			}
		}
		for(int i = 0; i < n; i++) {
			cout << "B";
		}
		cout << endl;
	}
	return 0;
}


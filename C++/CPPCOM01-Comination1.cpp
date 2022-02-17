#include<bits/stdc++.h>

using namespace std;

bool isFinal(int n, int a[]) {
	for(int i = n - 1; i >= 0; i--) {
		if(a[i] == 0) return false;
	}
	return true;
}

int main() {
	int n;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n;
		int a[n + 1];
		for(int i = 0; i < n; i++) {
			a[i] = 0;
		}
		for(int i = 0; i < n; i++) cout << a[i];
		cout << " ";
		while(!isFinal(n, a)) {
			int j = n - 1;
			while(a[j] != 0) j--;
			a[j] = 1;
			for(int i = j + 1; i < n; i++) a[i] = 0;
			for(int i = 0; i < n; i++) cout << a[i];
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}


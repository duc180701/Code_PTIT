#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n;
		int a[n + 1];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		cout << a[n - 1] << endl;
	}
	return 0;
}

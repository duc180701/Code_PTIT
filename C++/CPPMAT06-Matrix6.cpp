#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n;
		int a[n + 1][n + 1];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(i == 0 || j == 0 || i == n - 1 || j == n - 1) cout << a[i][j] << " ";
				else cout << " " << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}

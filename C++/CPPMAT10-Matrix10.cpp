#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n >> m;
		int arr[n + 1][m + 1];
		vector <int> v;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> arr[i][j];
				if(arr[i][j] == 1) {
					v.push_back(i);
					v.push_back(j);
				}
			}
		}
		for(int i = 0; i < v.size(); i += 2) {
			int a = v[i];
			int b = v[i + 1];
			for(int j = 0; j < m; j++) {
				arr[a][j] = 1; 
			}
			for(int k = 0; k < n; k++) {
				arr[k][b] = 1; 
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}


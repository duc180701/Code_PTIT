#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n >> k;
		vector <int> v;
		for(int i = 0; i < n; i++) {
			int a;
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		cout << v[k - 1] << endl;
	}
	return 0;
}


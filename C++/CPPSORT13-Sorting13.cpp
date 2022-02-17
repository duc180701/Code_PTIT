#include<bits/stdc++.h>

using namespace std;

int main() {
	long long n, m;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n >> m;
		vector <long long> v;
		for(int i = 0; i < n + m; i++) {
			long long a;
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n >> k;
		vector <int> v;
		for(int i = 0; i < k; i++) {
			for(int j = 0; j < n; j++) {
                int a;
				cin >> a;
    			v.push_back(a);
			}
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}

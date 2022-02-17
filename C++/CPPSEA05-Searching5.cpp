#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n;
		long long a[n + 1];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		int j = 1;
		while(a[j] == a[0]) j++;
		if(j > n - 1) cout << "-1" << endl;
		else cout << a[0] << " " << a[j] << endl;
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	long long x;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n >> x;
		long long a[n + 1];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long long j = 0;
		while(a[j] != x) j++;
		if(j > n - 1) cout << "-1" << endl;
		else cout << j + 1 << endl;
	}
	return 0;
}

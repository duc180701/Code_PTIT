#include<bits/stdc++.h>

using namespace std;

int main(){
	int a[101], n;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int sum = 0;
		for(int i = 0; i < n; i++) {
			sum += a[i];
		}
		if(sum % 2 == 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

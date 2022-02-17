#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n;
		int mu;
		for(int i = 2; i <= n; i++) {
			mu = 0;
			while(n % i == 0) {
				n /= i;
				mu++;
			}
			if(mu) {
				cout << i << " " << mu;
				if(n > i) cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

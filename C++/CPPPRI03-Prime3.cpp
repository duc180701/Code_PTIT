#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll check(ll a) {
	if(a == 2) return true;
	else if(a < 2) return false;
	else {
		for(ll i = 2; i <= sqrt(a); i++) {
			if(a % i == 0) return false;
		}
		return true;
	}
}

int main(){
	ll n;
	int testCase;
	cin >> testCase;
	while(testCase-- ) {
		cin >> n;
		for(ll i = 2; i <= n; i++) {
			if(check(i) == true) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

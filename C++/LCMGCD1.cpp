#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
	if(a == 0 || b == 0) return a + b;
	while(a != b ) {
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

int main(){
	int testCase;
	cin >> testCase;
	ll a, b;
	while(testCase--) {
		cin >> a >> b;
		cout << lcm(a, b) << " " << gcd(a, b) << endl;
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	ll n; 
	int testCase; 
	cin >> testCase; 
	while(testCase--){
		cin >> n; 
		while (n % 2 == 0) { 
			cout << 2 << " "; 
			n /= 2; 
		} 
		for (ll i = 3; i <= sqrt(n); i += 2) { 
			while (n % i == 0) { 
				cout << i << " "; 
				n = n / i; 
			} 
		} 
		if (n > 2) cout << n; 
		cout << endl;
	} 
	return 0;
}

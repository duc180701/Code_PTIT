#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll lcm(ll a, ll b){ 
	int gcd = __gcd(a,b); 
	return (a / gcd) * b;; 
} 

ll result(int n){
	ll result = 1;
	for(ll i = 2; i <= n; i++){ 
		result = lcm(result, i); 
	} 
	return result; 
} 

main(){ 
	int testCase; 
	cin >> testCase; 
	while(testCase--){ 
		int n; 
		cin >> n;
		cout << result(n) << endl; 
	} 
}

#include<bits/stdc++.h>

using namespace std;

bool check(long long a) {
	if(a == 2) return true;
	else {
		long long cnt = 0;
		for(long long i = 1; i <= sqrt(a); i++) {
			if(a % i == 0) cnt++; 
		}
		if(cnt > 1) return false;
		else return true;
	}
}

long long process(long long n) {
	for(long long i = 1; i <= n; i++) {
		if(n % i == 0) {
			long long x = n / i;
			if(check(x) == true) return x;
		} 
	}
	return n;
}

int main(){
	long long n;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n;	
		cout << process(n) << endl;
	}
	return 0;
}

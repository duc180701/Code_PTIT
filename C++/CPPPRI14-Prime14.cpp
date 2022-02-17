#include<bits/stdc++.h>

using namespace std;

bool check(long long a) {
	long long cnt = 0;
	if(a < 2) return false;
	for(long long i = 1; i <= sqrt(a); i++) {
		if(a % i == 0) {
			cnt++;
		}
	}
	if(cnt > 1) {
		return false;
	} else {
		return true;
	}
}

int main(){
	long long n;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> n;
		for(long long i = 1; i * i <= n; i++) {
			if(check(i) == true) {
				cout << i * i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	int testCase;
	cin >> testCase;
	while(testCase--) {
	    int value = -1, cnt = 0;
		cin >> n >> k;
		for(int i = 2; i <= sqrt(n); i++) {
			while(n % i == 0) {
				cnt++;
				if(cnt == k) {
					value = i;
					break;
				}
				n /= i;
			}
			if(value > 0) break;
		}
		if(n > 1) {
			cnt++;
			if(cnt == k) {
				value = n;
			}
		}
		cout << value << endl;
	}
	return 0;
}

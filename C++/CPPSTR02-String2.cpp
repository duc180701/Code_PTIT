#include<bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> s;
		long long sumLe = 0;
		long long sumChan = 0;
		for(long long i = 0; i < s.length(); i++) {
			if(i % 2 == 0) sumChan += (s[i] - '0');
			else sumLe += (s[i] - '0');
		}
		if(abs(sumLe - sumChan) % 11 == 0) cout << "1" << endl;
		else cout << "0" << endl;
	}
	return 0;
}


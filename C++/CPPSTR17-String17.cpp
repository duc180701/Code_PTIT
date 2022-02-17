#include<bits/stdc++.h>

using namespace std;

int main() {
	int testCase;
	cin >> testCase;
	while(testCase--) {
		string s;
		cin >> s;
		long long dd[100001] = {0};
		for(long long i = 0; i < s.length(); i++) {
			dd[s[i]]++;
		}
		for(long long i = 0; i < s.length(); i++) {
			if(dd[s[i]] == 1) {
				cout << s[i];
			}
		}
		cout << endl;
	}
	return 0;
}


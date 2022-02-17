#include<bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> s;
		int cnt = 0;
		for(int i = 0; i < s.length() - 1; i++) {
			for(int j = i + 1; j < s.length(); j++) {
				if(s[j] == s[i]) cnt++;
			}
		}
		cout << cnt + s.length() << endl;
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int k;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		cin >> s >> k;
		bool alphabet[1000] = {false};
		for(int i = 0; i < s.length(); i++) {
			alphabet[s[i]] = true;
		}
		int cnt = 0;
		for(int i = 'a'; i <= 'z'; i++) {
			if(!alphabet[i]) cnt++;
		}
		if(k < cnt) cout << "0" << endl;
		else cout << "1" << endl;
	}
	return 0;
}


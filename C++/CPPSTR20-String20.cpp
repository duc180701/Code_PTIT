#include<bits/stdc++.h>

using namespace std;

int main() {
	int testCase;
	cin >> testCase;
	fflush(stdin);
	while(testCase--) {
		string s;
		cin.ignore();
		getline(cin, s); 
		string tmp = "";
		vector <string> v;
		for(int i = 0; i < s.length(); i++) {
			if(s[i] != ' ' && s[i] != '\t') {
				tmp += s[i];
			} else {
				v.push_back(tmp);
				tmp = "";
			}
		}
		v.push_back(tmp);
		for(int i = v.size() - 1; i >= 0; i--) {
			cout << v[i] << " ";
		}
		v.clear();
		cout << endl;
	}
	return 0;
}


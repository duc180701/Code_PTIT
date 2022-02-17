#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	for(int i = 0; i < s.length(); i++) {
		if(s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
		}
	}
	int j = 0;
	while(s[j] == ' ') j++;
	s[j] -= 32;
	for(int i = j + 1; i < s.length(); i++) {
		if(s[i] == ' ') {
			s[i + 1] -= 32;
		}
	}
	int k = s.length() - 1;
	while(s[k] != ' ') k--;
	for(int i = k + 2; i < s.length(); i++) {
		s[i] -= 32;
	}
	string tmp = "";
	vector <string> c;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] != ' ') {
			tmp += s[i];
		} else if(s[i] == ' ') {
			c.push_back(tmp);
			tmp = "";
		}
	}
	c.push_back(tmp);
	for(int i = 0; i < c.size(); i++) {
		if(i == c.size() - 2) {
			cout << c[i] << "," << " ";
		} else {
			cout << c[i] << " ";
		}
	}
}

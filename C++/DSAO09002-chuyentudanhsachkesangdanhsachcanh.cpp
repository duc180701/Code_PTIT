#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() { 
	vector <int> ke[51];
	string str;
	int v;
	cin >> v;
	cin.ignore();
	for(int i = 1; i <= v; i++) {
		getline(cin, str);
		str += " ";
		int value = 0;
		for(int j = 0; j < str.size(); j++) {
			if(str[j] >= '0' && str[j] <= '9') {
				value = value * 10 + (int)(str[j] - '0');
			} else if(value > 0) {
				ke[i].push_back(value);
				value = 0;
			}
		}
	}
	for(int i = 1; i <= v; i++) {
		sort(ke[i].begin(), ke[i].end());
	}
	for(int i = 1; i <= v; i++) {
		for(int j = 0; j < ke[i].size(); j++) {
			if(i < ke[i].at(j)) {
				cout << i << " " << ke[i].at(j) << endl;
			}
		}
	}
	return 0;
}

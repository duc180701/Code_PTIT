#include<bits/stdc++.h>

using namespace std;

int main(){
	string str;
	string result;
	getline(cin, str);
	for(int i = 0; i < str.length(); i++) {
		if(str[i] >= 65 && str[i] <= 90) {
			str[i] = str[i] + 32;
		}
	}
	int a = str.length() - 1;
	while(str[a] != ' ') a--;
	for(int i = a + 1; i < str.length(); i++) {
		result += str[i];
	}
	int b = 0;
	while(str[b] == ' ') b++;
	result += str[b];
	for(int i = b + 1; i < a; i++) {
		if(str[i] == ' ' && str[i + 1] != ' ') {
			result += str[i + 1];
		}
	}
	string str2 = "@ptit.edu.vn";
	result += str2;
	cout << result;
	return 0;
}

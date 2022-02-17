#include<iostream>
#include<cstring>

using namespace std;

int n, s[100], i;
bool used[100];
string str;

void out() {
	for(int j = 1; j <= n; j++)	{
		cout << str[s[j] - 1];
	}
	cout << " ";
}

void process(int j) {
	for(int i = 1; i <= n; i++) {
		if(used[i] == 0) {
			s[j] = i;			
			used[i] = 1;	
			if(j == n) {
				out();
			} else
				process(j + 1);	
			used[i] = 0;
		}
	}
}

void in() {
	cin >> str;
	n = str.size();
	process(1);
}

int main() {
	int testCase;
	cin >> testCase;
	while (testCase--) {
		in();
		cout << endl;
	}
	return 0;
}

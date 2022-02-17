#include <bits/stdc++.h>

using namespace std;

bool check(int x) {
	if(x < 2) return false;
	else {
		int cnt = 0;
		for(int i = 1; i <= sqrt(x); i++) {
			if(x % i == 0) cnt++;
		}
		if(cnt > 1) return false;
		else return true;
	}
}

int main() {
	int a, b;
	cin >> a >> b;
	if(b < a) swap(a, b);
	for(int i = a; i <= b; i++) {
		if(check(i)) cout << i << " ";
	}
}

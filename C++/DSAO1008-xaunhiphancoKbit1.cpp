#include<iostream>

using namespace std;

int n, k, arr[17] = {0};
int stop = 1;

void out() {
	for(int i = 0; i < n; i++) {
		cout << arr[i];
	}
	cout << endl;
}

bool check() {
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] == 1) {
			cnt++;
		}
	}
	if(cnt == k) {
		return true;
	} else {
		return false;
	}
}

bool end() {
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i] == 1) {
			cnt++;
		}
	}
	if(cnt == n) {
		return true;
	} else {
		return false;
	}
}

void sinh() {
	int j;
	for(int i = n - 1; i >= 0; i--) {
		if(arr[i] == 0) {
			j = i;
			break;
		}	
	}
	arr[j]++;
	for(int i = j + 1; i < n; i++) {
		arr[i] = 0;
	}
	if(check()) {
		out();
	}
	if(end()) {
		for(int i = 0; i < n; i++) {
			arr[i] = 0;
		}
		stop = 0;
	} else {
		sinh();
	}
}

int main(){
	int testCase;
	cin >> testCase;
	while(testCase--) {
		while(stop) {
			cin >> n >> k;
			if( k == 0) {
				out();
				stop = 0;
			} else {
				sinh();
			}
		}
		stop = 1;
	}
	return 0;
}

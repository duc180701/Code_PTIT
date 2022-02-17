#include<iostream>

using namespace std;

int n, k, arr[16];
int stop = 1;

void out() {
	for(int i = 0; i < k; i++) {
		cout << arr[i];
	}
	cout << " ";
}

void in() {
	cin >> n >> k;
	for(int i = 0; i < k; i++) {
		arr[i] = i + 1;
	}
	out();
}

bool check() {
	int cnt = 0;
	for(int i = k - 1; i >= 0; i--) {
		if(arr[i] == n - k + i + 1) {
			cnt++;
		}
	}
	if(cnt == k) {
		return false;
	} else {
		return true;
	}
}

void sinh() {
	int  j = k - 1;
	while(j >= 0 && arr[j] == n - k + j + 1) {
		j--;
	}
	arr[j]++;
	for(int i = j + 1; i < k; i++) {
		arr[i] = arr[i - 1] + 1;
	}
	out();
	if(!check()) {
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
			in();
			sinh();
		}
		stop = 1;
		cout << endl;
	}
	return 0;
}

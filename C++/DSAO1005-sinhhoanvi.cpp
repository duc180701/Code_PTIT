#include<iostream>
#include<algorithm>

using namespace std;

int n, arr[11], k, j;
int stop = 1; 

void out() {
	for(int i = 0; i < n; i++){
		cout << arr[i];
	}
	cout << " ";
}

void in() {
	cin >> n;
	for(int i = 0; i < n; i++){
		arr[i] = i + 1;	
	}
	out();
}

bool check() {
	int cnt = 0;
	for(int i = 0; i < n - 1; i++) {
		if(arr[i] - arr[i + 1] == 1) {
			cnt++;
		}
	}
	if(cnt == n - 1) {
		return false;
	} else {
		return true;
	}
}

void sinh() {
	for(int i = n - 1; i >= 0; i--) {
		if(arr[i] < arr[i + 1]) {
			j = i;
			break;
		}
	}
	for(int i = n - 1; i >= 0; i--) {
		if(arr[i] > arr[j]) {
			k = i;
			break;
		}
	}
	swap(arr[j], arr[k]);
	int l = j + 1;
	int r = n - 1;
	while(l < r) {
		int tmp = arr[l];
		arr[l] = arr[r];
		arr[r] = tmp;
		l++;
		r--;
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
			if(n > 1) {
				sinh();
			} else {
				break;
			}
		}	
		stop = 1;
		cout << endl;
	}
	return 0;
}

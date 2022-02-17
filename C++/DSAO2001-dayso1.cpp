#include<iostream>

using namespace std;
int n, arr[11];

void out() {
	cout << "[";
	for(int i = 0; i < n; i++) {
		if(i == n - 1) {
			cout << arr[i] << "]";
			cout << endl;
		} else {
			cout << arr[i] << " ";
		}
		
	}
}

void in() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	out();
}

void thuchien() {
	while(n > 1) {
		n--;
		for(int i = 0; i < n; i++) {
			arr[i] = arr[i] + arr[i + 1];
		}
		out();
	}
}

int main(){
	int testCase;
	cin >> testCase;
	while(testCase--){
		in();
		thuchien();
	}
	return 0;
}

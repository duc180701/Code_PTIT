#include<iostream>

using namespace std;

int main(){
	int arr[1001];
	int n, testCase, k;
	cin >> testCase;
	while(testCase--) {
		cin >> n >> k;
		for(int i = 0; i < k; i++) {
			cin >> arr[i];
		}
		int i = k - 1;
		while(i >= 0 && arr[i] == n - k + i + 1) {
			i--;
		}
		if(i >= 0) {
			arr[i]++;
		}
		for(int j = i + 1; j < k; j++) {
			arr[j] = arr[i] + j - i;
		}
		for(int i = 0; i < k; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

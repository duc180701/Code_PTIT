#include<iostream>
#include<vector>

using namespace std;

vector <int> a;
vector <vector <int> > myvector;
int n;

void in() {
	cin >> n;
	a.resize(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	myvector.push_back(a);
}

void out() {
	n = 1;
	for(int i = myvector.size() - 1; i >= 0; i--) {
		cout << "[" << myvector[i][0];
		for(int j = 1; j < n; j++) {
			cout << " " << myvector[i][j]; 
		}
		cout << "] ";
		n++;	
	}
}

void process() {
	in();
	while(--n) {
		for(int i = 0; i < n; i++) {
			a[i] = a[i] + a[i + 1];
		}
		myvector.push_back(a);
	}
	out();
}

int main(){
	int testCase;
	cin >> testCase;
	while(testCase--) {
		process();
		a.clear();
		myvector.clear();
		cout << endl;
	}
	return 0;
}

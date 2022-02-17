#include<iostream>

using namespace std;
int v, e;
int a, b;

void process() {
	cin >> v >> e;
	int ke[v + 1][v + 1] = {0};
	for(int i = 0; i < e; i++) {
		cin >> a >> b;
		ke[a][b] = ke[b][a] = 1;
	}
	for(int i = 1; i <= v; i++) {
		cout << i << ":";
		for(int j = 1; j <= v; j++) {
			if(ke[i][j] == 1) {
				cout << " " << j;
			}
		}
		cout << endl;
	}
}

int main(){
	int testCase;
	cin >> testCase;
	while(testCase--) {
		process();
	}
	return 0;
}

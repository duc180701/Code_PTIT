#include<bits/stdc++.h>

using namespace std;

vector <int> ke[1001];
bool ok[1001];

void DFS(int u) {
	ok[u] = true;
	cout << u << " ";
	for(int i = 0; i < ke[u].size(); i++) {
		if(!ok[ke[u][i]]) {
			DFS(ke[u][i]);
		}
	}
}

int main() {
	int v, e, u;
	int testCase;
	cin >> testCase;
	while(testCase--) {
		for(int i = 0; i < 1001; i++) {
			ke[i].clear();
		}
		memset(ok, false, sizeof(ok));
		cin >> v >> e >> u;
		for(int i = 0; i < e; i++) {
			int a, b;
			cin >> a >> b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		DFS(u);
		cout << endl;
	}
	return 0;
}


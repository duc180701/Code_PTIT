#include<bits/stdc++.h>

using namespace std;

vector <int> ke[1001];
bool ok[1001];

void BFS(int u) {
	queue <int> q;
	q.push(u);
	while(q.size() > 0) {
		int top = q.front();
		q.pop();
		cout << top << " ";
		ok[top] = true;
		for(int i = 0; i < ke[top].size(); i++) {
			if(!ok[ke[top][i]]) {
				ok[ke[top][i]] = true;
				q.push(ke[top][i]);
			}
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
		cin >> v >> e >> u;
		memset(ok, false, sizeof(ok));
		for(int i = 0; i < e; i++) {
			int a, b;
			cin >> a >> b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		BFS(u);
		cout << "\n";
	}
	return 0;
}


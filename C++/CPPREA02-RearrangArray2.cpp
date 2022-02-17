#include<bits/stdc++.h> 

using namespace std; 

int main(){ 
	int testCase; 
	cin>>testCase; 
	while(testCase--){ 
		int n;
		int cnt = 0; 
		cin >> n; 
		long long a[100001]; 
		for(int i = 1; i <= n; i++){ 
			cin >> a[i]; 
			if(a[i] != 0) cout<< a[i] << " "; 
			else cnt++; 
		} 
		for(int i = 1; i <= cnt; i++) cout << "0" << " "; 
		cout << endl; 
	} 
}

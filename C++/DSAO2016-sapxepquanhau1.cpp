#include <bits/stdc++.h>
using namespace std;
int n, H[15];
bool C[30], X[30], N[30];
int dem=0;
void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(C[j]&&X[i-j+n]&&N[i+j-1])
        {
            H[i]=j;
            C[j]=false;X[i-j+n]=false;N[i+j-1]=false;
            if(i==n) dem++;
            else Try(i+1);
            C[j]=true;X[i-j+n]=true;N[i+j-1]=true;
        }
    }
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        memset(C,true,sizeof(C));
        memset(X,true,sizeof(X));
        memset(N,true,sizeof(N));
        cin>>n;
        dem=0;
        Try(1);
        cout<<dem<<endl;
    }
    

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int n,s;
int a[100];
bool check [100];
int kq[100];
void in(int pos)
{
    cout<<'[';
    for(int i=1;i<pos;i++) cout<<kq[i]<<" ";
    cout<<kq[pos]<<"] ";
}
bool ok;
void Try(int pos,int sum,int vt)
{
    for(int i=vt;i<n;i++)
    {
        
        kq[pos]=a[i];
        if(sum +kq[pos]==s && pos<=n) 
        {
            in(pos);
            ok=false;
        }
        else Try(pos+1,sum+kq[pos],i+1);
            
    }

}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ok=true;
        cin>>n>>s;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        memset(kq,0,sizeof(kq));
        Try(1,0,0);
        if(ok) cout<<"-1";
        cout<<endl;
    }
    return 0;
}

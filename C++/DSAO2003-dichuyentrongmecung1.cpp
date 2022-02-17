#include <bits/stdc++.h>
using namespace std;
int n;
int a[20][20];
int xMove[2] = { 0, 1}; 
int yMove[2] = { 1, 0}; 
char Move[2] = { 'D','R'};
bool ok;
bool isSafe(int x,int y)
{
    return ( x >= 1 && x <= n && y >= 1 && 
             y <= n && a[y][x] == 1); 
}
void Try(int x,int y, string kq)
{
    int k, next_x, next_y; 
    if(x==n&&y==n)
    {
        cout<<kq<<" ";
        ok=true;
        return;
    }
    for(k=0;k<2;k++)
    {
        next_x= x+xMove[k];
        next_y= y+yMove[k];
        if(isSafe(next_x,next_y)) Try(next_x,next_y,kq+Move[k]);
    }
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++) cin>>a[i][j];
        }
        ok=false;
        if(a[1][1]==1) Try(1,1,"");
        if(!ok) cout<<"-1";
        cout<<endl;
    }
    return 0;
}

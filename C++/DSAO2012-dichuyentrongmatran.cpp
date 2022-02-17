#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[20][20];
bool check[20][20];
int xMove[2] = { 0, 1}; 
int yMove[2] = { 1, 0};
int move[100];
int kq;

bool isSafe(int x,int y)
{
    return ( x >= 1 && x <= m && y >= 1 && 
             y <= n && check[y][x] == true); 
}
void Try(int x,int y)
{
    int k, next_x, next_y; 
    if(x==m&&y==n)
    {
        kq+=1;
    }
    for(k=0;k<2;k++)
    {
        next_x= x+xMove[k];
        next_y= y+yMove[k];
        if(isSafe(next_x,next_y))
        {
            check[next_y][next_x]=false;
            Try(next_x,next_y);
            check[next_y][next_x]=true;
            
        }
    }
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++) cin>>a[i][j];
        }
        kq=0;
        memset(check,true,sizeof(check));
        Try(1,1);
        cout<<kq<<endl;
    }
    return 0;
}

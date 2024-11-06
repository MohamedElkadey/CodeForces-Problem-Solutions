#include <bits/stdc++.h>
#define ll  long long
#define elkadey ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
 
 
int main() {
    elkadey
 
    int n,m;
    cin>>n>>m;
    vector<vector<char>> arr(n, vector<char>(m));
    vector<vector<bool>> err(n, vector<bool>(m));
    vector<int>resx,resy,ress;
    for(int i=0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    if(arr[0][0] == '*' || arr[n-1][0] == '*' || arr[0][m-1] == '*' || arr[n-1][m-1] == '*')
    {
        cout<<"-1";
    }
    else
    {
        int nx =0,px =0,py =0,ny =0,sz=0;
    for(int i=1;i<n-1;i++)
    {
        for(int j =1;j<m-1;j++)
        {
            if(arr[i][j-1] == '*' && arr[i][j] == '*' && arr[i][j+1] == '*')
            {
                if(arr[i-1][j] == '*'&& arr[i-1][j] == '*' )
                {
                    for(int k =1;k<= min(n,m)/2;k++)
                    {
                         if(i-k < 0 ||i+k == n||j-k == m || j-k < 0  )
                            break;
                        if(arr[i-k][j] =='*'  )
                        {
                            py++;
                        }else break;
                        if(arr[i+k][j] == '*'  )
                        {
                            ny++;
                        }else break;
                        if(arr[i][j+k] == '*'  )
                        {
                            px++;
                        }else break;
                        if(arr[i][j-k] == '*' )
                        {
                            nx++;
                        }else break;
                    }
                    sz = min({nx,px,ny,py});
                    if(sz >0)
                    {
                        err[i][j] =1;
                        for(int k =1;k <= sz;k++)
                        {
                            err[i][j-k] =1;
                            err[i][j+k] =1;
                            err[i-k][j] =1;
                            err[i+k][j] =1;
                        }
                        resx.push_back(i+1);
                        resy.push_back(j+1);
                        ress.push_back(sz);
                    }
                    nx =px =py =ny =sz=0;
                }
            }
        }
    }
    bool f=1;
    for(int i=0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            if(arr[i][j] == '*'&& err[i][j] != 1)
            {
                f=0;
                break;
            }
        }
        if(!f)
            break;
    }
if(f)
{
    cout<<resx.size()<<"\n";
    for (int i = 0; i < resx.size(); i++) {
    cout<<resx[i]<<" "<<resy[i]<<" "<<ress[i]<<'\n';
    }
}
else
{
    cout<<"-1";
}
    }
 
    return 0;
}

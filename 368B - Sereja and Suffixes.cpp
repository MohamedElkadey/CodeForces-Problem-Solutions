#include <bits/stdc++.h>
#define ll  long long
#define elkadey ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int main() {
    elkadey
    int n,m,x;
    cin >> n>>m;
    int a[n][2];
    map<int,bool>p;
    for(int i =0;i<n;i++)
    {
        cin>>a[i][0];
    }
    for(int i =n-1;i >= 0;i--)
    {
        if(p[a[i][0]] == 0)
        {
            p[a[i][0]] = 1;
            if(i!= n-1)
            a[i][1] = a[i+1][1] +1;
            else
                a[i][1] =1;
        }
        else
            a[i][1] =a[i+1][1];
 
    }
    while(m--)
    {
        cin>>x;
        cout<<a[x-1][1]<<"\n";
    }
    return 0;
}

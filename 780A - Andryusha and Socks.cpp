#include <bits/stdc++.h>
#define ll  long long
#define elkadey ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int main() {
    elkadey
    int n,x ,res =0,s;
    cin>>n;
    map<int ,bool> m;
    for(int i=0;i<2*n;i++)
    {
        s = m.size();
        res = max(res , s);
        cin>>x;
        if(m[x] == 1)
        {
            m.erase(x);
        }
        else
        {
            m[x] = 1;
        }
    }
        cout<<res;
    return 0;
}

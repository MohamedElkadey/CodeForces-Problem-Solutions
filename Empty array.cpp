#include <bits/stdc++.h>
#define ll  long long
#define elkadey ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int main() {
    elkadey
    int n,x;
    cin>>n;
    set<int>arr;
    map<int,int>s;
    for(int i =0;i<n;i++)
    {
        cin>>x;
        s[x]++;
        arr.insert(x);
    }
    while(!s.empty())
    {
        for(auto i =arr.begin();i != arr.end();i++)
        {
            if(s[*i] > 0)
            {
                cout<<*i<<" ";
                s[*i]--;
            }
            else
                s.erase(*i);
        }
        cout<<"\n";
    }
 
 
    return 0;
}

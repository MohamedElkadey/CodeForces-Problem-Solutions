#include <bits/stdc++.h>
#define ll  long long
#define elkadey ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
 
int main() {
    elkadey
 
    ll n,k,x,res = 0;
    cin>>n>>k;
    ll arr[n];
    map<ll ,int>mp;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]--;
        if (mp[k-arr[i]])
        {
            res += mp[k-arr[i]];
        }
    }
    cout<<res;
 
    return 0;
}

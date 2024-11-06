#include <bits/stdc++.h>
#define ll  long long
#define elkadey ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
 
int main() {
    elkadey
    int n ;
    ll sum =0;
    cin>>n;
    ll arr[n],err[n] ,ele;
    vector<int>res;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
        err[i] = arr[i];
    }
    sort(err,err+n);
    for(int i=0;i<n;i++)
    {
        ele = sum - arr[i];
        if(arr[i] == err[n-1])
        {
            if(ele - err[n-2] == err[n-2])
            {
                res.push_back(i+1);
            }
        }
        else
        {
            if(ele - err[n-1] == err[n-1])
            {
                res.push_back(i+1);
            }
        }
 
    }
    cout<<res.size()<<"\n";
    if(res.size() > 0)
    {
        for(auto i : res)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}

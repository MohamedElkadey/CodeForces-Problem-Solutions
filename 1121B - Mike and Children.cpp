#include <bits/stdc++.h>
#define ll  long long
#define elkadey ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
 
int main() {
    elkadey
 
    int n  ;
    cin>>n;
    int arr[n];
    int freq[200005]= {0};
    for(int i = 0 ; i < n ; i ++)
    {
        cin>>arr[i];
    }
    int mx = INT_MIN;
 
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = i+1 ; j < n ; j ++)
        {
            freq[arr[i]+arr[j]]++;
            mx=max(mx,freq[arr[i]+arr[j]]);
        }
    }
    cout<<mx<<endl;
 
    return 0;
}

#include <bits/stdc++.h>
#define ll  long long
#define elkadey ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;



int main() {
    elkadey

    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(k == 0)
        cout<<(arr[0] == 1? -1 :1);
        else{
            if(arr[k-1] == arr[k])
                cout<<-1;
            else
                cout<<arr[k-1];


        }
    return 0;
}


#include <bits/stdc++.h>
#define ll  long long
#define elkadey ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;



int main() {
    elkadey

    int n,in,x;
    cin>>n;
    queue<int>to;
    while(n--)
    {
        cin>>in>>x;
        if(in == 1 )
        {
            to.push(x);
        }
        else
        {
            if(!to.empty() && to.front() == x)
                {
                    cout<<"Yes\n";
                    to.pop();
                }
            else {
                    cout<<"No\n";
                    to.pop();
                }
        }
    }

    return 0;
}

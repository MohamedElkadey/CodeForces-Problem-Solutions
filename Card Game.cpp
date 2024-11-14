/*
problem Link 
     https://codeforces.com/group/3nQaj5GMG5/contest/373244/problem/D
*/

#include <bits/stdc++.h>
#define ll  long long
#define elkadey ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;


int gmn(char a)
{
    if(a == 'm')    return 1;
    else if(a == 'a') return 2;
    else    return 3;
}
int main() {
    elkadey

    string m,a,r;
    ll mc= 0,ac=0,rc=0;
    int gm =1;          // 1 -> Muhammad  2-> Ali   3  -> Rady
    cin>>m>>a>>r;
    bool f= 1;
    while(f)
    {
        if(gm == 1)
        {
            if(mc == m.length() )
            {
                cout<<"M";
                return 0;
            }
            else
                gm = gmn(m[mc]);

            mc++;
        }
        else if(gm == 2)
        {
            if(ac == a.length())
            {
                cout<<"A";
                return 0;
            }
            else
                gm = gmn(a[ac]);

            ac++;
        }
        else
        {
            if(rc == r.length())
            {
                cout<<"R";
                return 0;
            }
            else
                gm = gmn(r[rc]);

            rc++;
        }
    }

    return 0;
}

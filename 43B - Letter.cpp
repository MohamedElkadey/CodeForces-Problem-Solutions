#include <bits/stdc++.h>
#define ll  long long
#define elkadey ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int main() {
    elkadey
    string s,d;
    getline(cin,s);
    getline(cin,d);
    map<char ,int> a,b;
    for(int i =0;i<s.length();i++)
    {
        if(isalpha(s[i]))
        {
            a[s[i]]++;
        }
    }
    bool f=1;
    for(int i =0;i<d.length()&&f;i++)
    {
        if(isalpha(d[i]))
        {
            if(a[d[i]] == 0)
            {
                f=0;
            }
            else
            {
                a[d[i]]--;
            }
        }
    }
    if(f)cout<<"YES";
    else cout<<"NO";
 
    return 0;
}

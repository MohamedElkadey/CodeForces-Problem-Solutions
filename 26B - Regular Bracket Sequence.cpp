#include <bits/stdc++.h>
#define ll  long long
#define elkadey ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;



int main() {
    elkadey

    string s;
    cin>>s;
    stack<char> c;
    int res =0;
    for(int i =0;i<s.length();i++)
    {
        if(s[i] == '(') c.push('(');
        else{
            if(!c.empty())
            {
                c.pop();
                res++;
            }
        }
    }
    cout<<res*2;

    return 0;
}

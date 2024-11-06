#include <bits/stdc++.h>
#define ll  long long
using namespace std;
 
int main() {
 
    int n ,k;
    cin>>n>>k;
    string s;
    cin>>s;
        for(int i ='a'; i<= 'z' ;i++)
        {
            for(int j=0;j<s.length();j++)
            {
                if(s[j] == char(i) && k!= 0)
                {
                    s[j] = NULL;
                    k--;
                }
                else if(k == 0)
                {
                    break;
                }
            }
        }
        for(int i =0;i<s.length();i++)
        {
            if(s[i] != NULL)
            {
                cout<<s[i];
            }
        }
 
 
    return 0;
}

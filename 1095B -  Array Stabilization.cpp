#include <bits/stdc++.h>
#define ll  long long
#define elkadey ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
int main() {
    elkadey
    int n;
    cin >> n;
    int array[n];
 
    for(int i = 0 ; i < n ; i++){
        cin >> array[i];
    }
    sort(array , array+n);
 
    cout << min((array[n-2] - array[0]) , (array[n-1] - array[1])) << endl;
    return 0;
}

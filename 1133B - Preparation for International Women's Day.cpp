#include <bits/stdc++.h>
#define ll  long long
#define elkadey ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
 
 
int main() {
    elkadey
 
    int n , k ,x;
	cin >> n >> k ;
	vector<ll> arr(k) ;
	for (int i = 0 ; i < n ; ++i) {
		cin >> x ;
		arr[x % k]++ ;
	}
	ll res = arr[0] / 2 ;
	if (k % 2 == 0) {
		res += arr[k / 2] / 2 ;
	}
	for (int i = 1 ; i < (k+1)/2 ; ++i) {
		int j = k-i ;
		res += min (arr[i] , arr[j]) ;
	}
	cout << 2*res ;
    return 0;
}

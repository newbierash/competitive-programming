#include <bits/stdc++.h>
#define $rash$ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define ll long long
#define int ll
#define nl "/n"
#define vi vector<int>
#define pb push_back
#define f first
#define s second

using namespace std;


void solve(){
    int n, s=0;
    cin >> n;
    int arr[n-1];
    for (int i = 0; i<n-1; i++){
        cin >> arr[i];
        s+=arr[i];
    }
    cout << n*(n+1)/2 - s;
}

signed main(){
    $rash$
    solve();
    return 0;
}

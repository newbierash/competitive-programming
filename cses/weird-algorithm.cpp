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
    int n;
    cin >> n;
    cout << n << " ";
    while (n!=1){
        if (n%2 == 1) n = n*3 + 1;
        else n/=2;
        cout << n << " ";
    }
}

signed main(){
    $rash$
    solve();
    return 0;
}

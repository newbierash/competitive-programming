#include <bits/stdc++.h>
#define $rash$ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define int ll
#define nl endl
#define vi vector<int>
#define vc vector<char>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define eb emplace_back
using namespace std;

int n,k;

void solve(){
    cin >> n >> k;
    if (n%k == 0) cout << 0;
    else cout << ((n/k)+1)*k -n;
    cout << nl;
}

signed main()
{
    $rash$
    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}

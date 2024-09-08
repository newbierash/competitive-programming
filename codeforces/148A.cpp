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

int k,l,m,n,d,res=0;

void solve(){
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i<=d; i++){
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) res++;
    }
    cout << res;
}

signed main()
{
    $rash$
    solve();
    return 0;
}

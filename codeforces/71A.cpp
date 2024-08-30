#include <bits/stdc++.h>
#define $rash$ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define int ll
#define nl endl
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define vc vector<char>
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define eb emplace_back
#define f first
#define s second
using namespace std;

void solve(){
    string s;
    cin >> s;
    if (s.size() <= 10) cout << s << nl;
    else cout << s[0] << s.size()-2 << s.back() << nl;
}

signed main()
{
    $rash$
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

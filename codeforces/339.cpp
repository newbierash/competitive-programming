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

string s;

void solve(){
    getline(cin, s);
    vc v;
    for (int i = 0; i<s.size(); i++) if (s[i] != '+') v.pb(s[i]);
    sort(v.begin(), v.end());
    for (int i = 0; i<v.size(); i++){
        cout << v[i];
        if (i != v.size()-1) cout << "+";
    }
}

signed main()
{
    $rash$
    solve();
    return 0;
}

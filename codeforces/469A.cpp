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

int n,p,x,s=0;
vi v;

void solve(){
    cin >> n;
    for (int i = 0; i<2; i++){
        cin >> p;
        for (int j = 0; j<p; j++){
            cin >> x;
            if (count(v.begin(), v.end(),x) != 1){
                v.pb(x);
                s+=x;
            }
        }
    }
    if (s >= n*(n+1)/2) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}

signed main()
{
    $rash$
    solve();
    return 0;
}

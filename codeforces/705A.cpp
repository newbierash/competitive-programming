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

int n;

void solve(){
    cin >> n;
    for (int i = 0; i<n; i++){
        if (i%2 == 0) cout << "I hate ";
        else cout << "I love ";
        if (i == n-1) cout << "it";
        else cout << "that ";
    }
}

signed main()
{
    $rash$
    solve();
    return 0;
}

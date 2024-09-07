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

set<int> st;
int res=0,x;

void solve(){
    for (int i = 0; i<4; i++){
        cin >> x;
        if (st.count(x) != 1)
        st.insert(x);
        else res++;
    }
    cout << res;
}

signed main()
{
    $rash$
    solve();
    return 0;
}

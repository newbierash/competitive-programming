#include <bits/stdc++.h>
#define $rash$ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define int ll
#define nl '\n'
#define vi vector<int>
#define vc vector<char>
#define pii pair<int,int>
#define vpii vector<p
#define eb emplace_back
using namespace std;

void solve(){
    int n,x;
    cin >> n >> x;
    deque<int> dq(n);
    for (int i = 0; i<n; i++) cin >> dq[i];
    int res=0,s=0,t=0;
    sort(dq.begin(),dq.end());
    while (!dq.empty()){
        s+=dq.back();
        dq.pop_back();
        if (s+dq.front() <= x && !dq.empty()){
            s += dq.front();
            dq.pop_front();
        }
        res++;
        s=0;
    }
    cout << res;
}

signed main(){
    $rash$
    solve();
    return 0;
}

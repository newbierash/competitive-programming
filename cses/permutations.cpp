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
    int n;
    cin >> n;
    if (n>=4 || n==1){
        for (int i = 2; i<=n; i+=2) cout << i << " ";
        for (int i = 1; i<=n; i+=2) cout << i << " ";
    }
    else cout << "NO SOLUTION";
}

signed main(){
    $rash$
    solve();
    return 0;
}

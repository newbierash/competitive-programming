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

int n,res=0;
string s;

void solve(){
    cin >> n;
    while (n--){
        cin >> s;
        if (s[0] == 'T') res += 4;
        else if (s[0] == 'C') res += 6;
        else if (s[0] == 'O') res += 8;
        else if (s[0] == 'D') res += 12;
        else res += 20;
    }
    cout << res;
}

signed main()
{
    $rash$
    solve();
    return 0;
}

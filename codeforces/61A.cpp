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

string s1,s2;

void solve(){
    cin >> s1 >> s2;
    for (int i = 0; i<s1.size(); i++){
        if (s1[i] == s2[i]) cout << '0';
        else cout << '1';
    }
}

signed main()
{
    $rash$
    solve();
    return 0;
}

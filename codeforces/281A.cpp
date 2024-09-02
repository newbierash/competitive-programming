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
    if (s[0] <= 'Z') cout << s;
    else{
        s[0] -= 32;
        cout << s[0];
        for (int i = 1; i<s.size(); i++) cout << s[i];
    }
}

signed main()
{
    $rash$
    solve();
    return 0;
}

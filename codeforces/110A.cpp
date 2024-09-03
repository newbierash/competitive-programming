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
#define f first
#define s second
using namespace std;

string s;
int res=0;

void solve(){
    cin >> s;
    for (int i = 0; i<s.size(); i++){
        if (s[i] == '4' || s[i] == '7') res++;
    }
    if (res == 4 || res == 7) cout << "YES";
    else cout << "NO";
}

signed main()
{
    $rash$
    solve();
    return 0;
}

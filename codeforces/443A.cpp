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

string s;
set<char> st;

void solve(){
    getline(cin, s);
    for (int i = 0; i<s.size(); i++){
        if ((i+2)%3 == 0 && s[i] != '{' && s[i] != '}') st.insert(s[i]);
    }
    cout << st.size();
}

signed main()
{
    $rash$
    solve();
    return 0;
}

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
    string s;
    cin >> s;
    int res=1,x=1;
    for (int i = 0; i<s.size()-1; i++){
        if (s[i] == s[i+1]){
            x++;
            res = max(res,x);
        }
        else{
            res = max(res,x);
            x=1;
        }
    }
    cout << res;
}

signed main(){
    $rash$
    solve();
    return 0;
}

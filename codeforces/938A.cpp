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

int n,vov=0;
string s;

void solve(){
    cin >> n >> s;
    for (int i = 0; i<s.size()-1; i++){
        if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') && (s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'i' || s[i+1] == 'o' || s[i+1] == 'u' || s[i+1] == 'y')) vov++;
    }

    while (vov--){
        for (int i = 0; i<s.size()-1; i++){
        if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') && (s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'i' || s[i+1] == 'o' || s[i+1] == 'u' || s[i+1] == 'y')) s.erase(s.begin()+i+1);
        }
    }
    cout << s;
}

signed main()
{
    $rash$
    solve();
    return 0;
}

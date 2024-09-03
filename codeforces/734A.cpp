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

int n,a=0,d=0,res=0;
string s;

void solve(){
    cin >> n >> s;
    for (int i = 0; i<n; i++){
        if (s[i] == 'A') a++;
        else d++;
    }
    if (a > d) cout << "Anton";
    else if (a < d) cout << "Danik";
    else cout << "Friendship";
}

signed main()
{
    $rash$
    solve();
    return 0;
}

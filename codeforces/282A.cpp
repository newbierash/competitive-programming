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

void solve(){
    int n,p=0,m=0;
    string s;
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> s;
        if (s == "X++" || s == "++X") p++;
        else if (s == "--X" || s == "X--") m++;
    }
    cout << p - m;
}

signed main()
{
    $rash$
    solve();
    return 0;
}

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

int a,b,res=0;

void solve(){
    cin >> a >> b;
    while (a <= b){
        a*=3;
        b*=2;
        res++;
    }
    cout << res;
}

signed main()
{
    $rash$
    solve();
    return 0;
}

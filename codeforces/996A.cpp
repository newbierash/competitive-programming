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

void solve(){
    cin >> n;
    while (n!=0){
        if (n>=100){
            res++;
            n-=100;
        } else if (n>=20){
            res++;
            n-=20;
        } else if (n>=10){
            res++;
            n-=10;
        } else if (n>=5){
            res++;
            n-=5;
        } else {
            res += n;
            n=0;
        }
    }
    cout << res;
}

signed main()
{
    $rash$
    solve();
    return 0;
}

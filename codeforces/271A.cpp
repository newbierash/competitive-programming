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

int n;

void solve(){
    cin >> n;
    n++;
    int x=n/1000%10,y=n/100%10,z=n/10%10,k=n%10;
    while (!(x != y && x != z && x != k && y != z && y != k && z != k)){
        ++n;
        x=n/1000%10,y=n/100%10,z=n/10%10,k=n%10;
    }
    cout << n;
}

signed main()
{
    $rash$
    solve();
    return 0;
}

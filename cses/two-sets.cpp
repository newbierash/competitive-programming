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
    int n,s1=0,s2=0;
    cin >> n;
    vi v(n);
    if ((n*(n+1)/2)%2 == 1) cout << "NO";
    else if ((n*(n+1)/2)%2 == 0 && n%2 == 1){
        cout << "YES" << nl;
        for (int i = 1; i<=n; i++) v[i-1] = i;
        cout << n - n/2 << nl;
        for (
             int i = 0, j = 0, k = n;
             i<(n-n/2) && j<n && k>=0;
             i++
        ){
            if (i%2 == 0){
                cout << v[j] << " ";
                k-=2;
            }
            else{
                cout << v[k] << " ";
                j+=2;
            }
        }
        cout << nl << n/2 << nl;
        for (
             int i = 0, j = 0, k = n;
             i<n/2 && j<n && k>=0;
             i++
        ){
            if (i%2 == 0){
                cout << v[k-1] << " ";
                j+=2;
            }
            else{
                cout << v[j-1] << " ";
                k-=2;
            }
        }
    }
    else if ((n*(n+1)/2)%2 == 0 && n%2 == 0){
        cout << "YES" << nl;
        cout << n/2 << nl;
        for (int i = 1; i<=n/4; i++){
            cout << i << " ";
        }
        for (int i = n*3/4+1; i<=n; i++){
            cout << i << " ";
        }
        cout << nl << n/2 << nl;
        for (int i = n/4+1; i<=n*3/4; i++){
            cout << i << " ";
        }
    }
}


signed main(){
    $rash$
    solve();
    return 0;
}

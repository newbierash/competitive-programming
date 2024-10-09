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
    int n,k=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++) cin >> arr[i];
    for (int i = 0; i<n-1; i++){
        while (arr[i] > arr[i+1]){
            arr[i+1]++;
            k++;
        }
    }
    cout << k;
}

signed main(){
    $rash$
    solve();
    return 0;
}

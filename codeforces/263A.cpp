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

int arr[5][5];
int x,y;

void solve(){
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            cin >> arr[i][j];
            if (arr[i][j] == 1){
                x = i+1;
                y = j+1;
            }
        }
    }
    cout << abs(x-3) + abs(y-3);
}

signed main()
{
    $rash$
    solve();
    return 0;
}

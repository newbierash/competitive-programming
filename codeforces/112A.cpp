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

string s1,s2;
int res=0;

void solve(){
    cin >> s1 >> s2;
    for (int i = 0; i<s1.size(); i++){
        s1[i] = toupper(s1[i]);
        s2[i] = toupper(s2[i]);
        if (s1[i] > s2[i]){
            res = 1;
            break;
        }
        else if(s1[i] < s2[i]){
            res = -1;
            break;
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

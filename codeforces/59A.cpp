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

string s;
int up=0,lo;

void solve(){
    getline(cin, s);
    for (int i = 0; i<s.size(); i++){
        if (s[i] <= 'Z') up++;
    }
    lo = s.size() - up;
    if (up > lo){
        for (int i = 0; i<s.size(); i++){
            if (s[i] > 'Z'){
                s[i] -= 32;
            }
            cout << s[i];
        }
    }
    else{
        for (int i = 0; i<s.size(); i++){
            if (s[i] <= 'Z') s[i] += 32;
            cout << s[i];
        }
    }

}

signed main()
{
    $rash$
    solve();
    return 0;
}

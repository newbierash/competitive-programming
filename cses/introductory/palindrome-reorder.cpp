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
    string s;
    cin >> s;
    vi v(26,0);
    for (int i = 0; i<s.size(); i++){
        v[s[i]-'A']++;
    }


    bool ok=false;

    for (int i = 0; i<26; i++){
        if (v[i]%2 == 1 && ok == true){
            cout << "NO SOLUTION";
            return;
        }
        if (v[i]%2 == 1 && ok == false) ok = true;
    }
    for (int i = 0; i<26; i++){
        if (v[i]%2 != 1){
            for (int j = 0; j<v[i]/2; j++){
                char c = i + 'A';
                cout << c;
            }
        }
    }
    for (int i = 0; i<26; i++) if (v[i]%2 == 1){
        for (int j = 0; j<v[i]; j++){
            char c = i + 'A';
            cout << c;
        }
    }

    for (int i = 25; i>=0; i--){
        if (v[i]%2 != 1){
            for (int j = 0; j<v[i]/2; j++){
                char c = i + 'A';
                cout << c;
            }
        }
    }
}



signed main(){
    $rash$
    solve();
    return 0;
}

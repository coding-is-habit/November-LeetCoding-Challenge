#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;



void solve() {
    ll num,que;
    cin>>num>>que;
    ll quearr[num];
    for(ll m = 0; m<num;m++)
        cin>>quearr[m];
    ll brk=0,res=0;
    for(ll m = 0 ; m<num;m++){
        if(quearr[m]<que){
            res=m+1;
            brk=1;
            break;
        }
        quearr[m+1]+=(quearr[m]-que);
    }
    if(brk==1){
        cout<<res<<"\n";
    }
    else{
        res=num+(quearr[num-1]/que);
        cout<<res<<"\n";
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}
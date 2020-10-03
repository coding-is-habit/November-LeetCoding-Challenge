#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,k,y,flag=0;
        cin>>n>>k>>x>>y;
        set<int> s;
        while(true){
            
            if(s.find(x%n)==s.end())
                {s.insert(x%n);
                }
            else{
                break;
            }
            x=x+k;
            
        }
            if(s.find(y)!=s.end())
            cout<<"YES\n";
            else
            cout<<"NO\n";
        
    }
    return 0;
}
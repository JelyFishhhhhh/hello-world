#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

#define ll long long

#define pb(k) push_back(k)
#define all(l) l.begin(), l.end()
#define binzro(seq,m,n,k) seq.resize(m,k), seq.assign(n,k) 

#define MAX 1e3+5

using namespace std;

signed main(){
    fastio;

    string name;

    while(cin>>name && name != ""){
        cout<<"Hello, "<<name<<'\n';
    }
    
    return 0;
}
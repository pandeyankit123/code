/*  Waadon se apne mukarta nahin,          */
/*  Question se main kabhi darta nahin.    */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback O Laidback!                   */
/*  Laidback...                            */


#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define coutall(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" "; cout<<endl;
#define cinall(v) for(int i=0; i<v.size(); i++) cin>>v[i];
#define all(v) v.begin(),v.end()
#define newl cout<<endl;
#define ll long long
#define pb push_back
#define po pop_back
#define ss second
#define ff first

const int MOD=1e7+10;
const int N=1e7+10;

ll summation(ll n){
    return n*(n+1)/2;
}

int main(){
    fastIO;
    ll n,m; cin>>n>>m;
    ll ans=0;
    while(m--){
        ll x,d; cin>>x>>d;
        if(d>=0)ans+=n*x+d*(n-1)*n/2;
		else ans+=n*x+d*(n-(n+1)/2)*((n+1)/2);
    }
    cout<<fixed<<setprecision(15);
    cout<<1.0*ans/n;
    return 0;
}


/*
 
*/
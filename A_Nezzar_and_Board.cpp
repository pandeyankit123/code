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

int main(){
    fastIO;
    int t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        vector<ll> v(n);
        cinall(v);
        sort(all(v));
        k-=v[0];
        for(int i=1; i<n; i++)
            v[i]-=v[0];
        ll g=0;
        for(int i=1; i<n; i++)
            g=__gcd(g,v[i]);
        if(k%g==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;   
}


/*
    Bézout's identity
*/
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
#define fr(i,n,z) for(int i=n-1; i>=z; i--)
#define fo(i,z,n) for(int i=z; i<n; i++)
#define all(v) v.begin(),v.end()
#define newl cout<<endl;
#define ll long long
#define pb push_back
#define mp make_pair
#define po pop_back
#define ss second
#define ff first

const int MOD=1e7+10;
const int N=1e7+10;

int main(){
    fastIO;
    // int t; cin>>t;
    int t=1;
    while(t--){
        int n,l; cin>>n>>l;
        vector<int> v(n);
        cinall(v); sort(all(v));
        float d=max(2*v[0], 2*(l-v[n-1]));
        fo(i,0,n-1)
            if(v[i+1]-v[i]>d)
                d=(float)v[i+1]-v[i];
        cout<<fixed<<setprecision(10)<<d/2;
    }
    return 0;
}


/*
    
*/
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

int findLCM(int a, int b, int c) {
    int gcd=__gcd(a, b);
    int lcm=(a*b)/gcd;
    gcd=__gcd(lcm,c);
    lcm=(lcm*c)/gcd;
    return lcm;
}

int main(){
    fastIO;
    int t; cin>>t;
    // int t=1;
    while(t--){
        int x,y,z; cin>>x>>y>>z;
        bool flag=true;
        int b,a;
        if(flag){
            b=x; a=y*z;
            if(a%b==0) cout<<a<<" "<<b<<endl, flag=false;
        }
        if(flag){
            b=y; a=x*z;
            if(a%b==0) cout<<a<<" "<<b<<endl, flag=false;
        }
        if(flag){
            b=z; a=x*y;
            if(a%b==0) cout<<a<<" "<<b<<endl, flag=false;
        }
        if(flag) cout<<-1<<endl;
    }
    return 0;
}


/*
    
*/
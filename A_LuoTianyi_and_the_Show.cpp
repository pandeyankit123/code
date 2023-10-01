/*      __      ___      ______   ______    _____       ___      _____   _    __
       / /     / \ \    |__  __| | |  \ \  | |  \ \    / \ \    |  ___| | |  / /
      / /     / /_\ \      ||    | |   | | | |__/ /   / /_\ \   | |     | | / /
     / /___  / /---\ \   __||__  | |   | | | |  \ \  / /---\ \  | |___  | | \ \
    /_____/ /_/     \_\ |______| |_|__/_/  |_|__/_/ /_/     \_\ |_____| |_|  \_\ 

    Waadon se apne mukarta nahin,
    Question se main kabhi darta nahin.
    Laidback O Laidback!
    Laidback O Laidback!
    Laidback O Laidback!
    Laidback...
*/


#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define coutall(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" "; cout<<endl
#define cinall(v) for(int i=0; i<v.size(); i++) cin>>v[i]
#define fr(i,n,z) for(int i=n-1; i>=z; i--)
#define cout2n(n, m) cout<<n<<" "<<m<<endl
#define fo(i,z,n) for(int i=z; i<n; i++)
#define all(v) v.begin(),v.end()
#define coutn(n) cout<<n<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
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
    int t; cin>>t;
    // int t=1;
    while(t--){
        int n,m; cin>>n>>m;
        vector<int> v(n);
        int one=0,two=0,cnt=0;
        vector<int> res(m+1);
        fo(i,0,n){
            cin>>v[i];
            if(v[i]==-1) one++;
            else if(v[i]==-2) two++;
            else{    
                if(res[v[i]]==0) cnt++;
                res[v[i]]=1;
            }
        }
        vector<int> pre(m+1), suf(m+1);
        suf[m]=res[m];
        fr(i,m,1)
            suf[i]=suf[i+1]+res[i];
        pre[1]=res[1];
        fo(i,2,m+1)
            pre[i]=pre[i-1]+res[i];
        int ans=min(m,one+cnt), ans2=min(m,two+cnt);
        ans=max(ans,ans2);
        fo(i,1,m+1){
            if(res[i]==1){
                int ans1=1+min(i-1,pre[i-1]+one)+min(m-i,suf[i+1]+two);
                ans=max(ans,ans1);
            }
        }
        coutn(ans);   
    }
    return 0;
}


/*
    
*/


/*     __     ___     ____   _____    ____      ___     ____   _   __
      / /    / \ \   |_  _| | | \ \  | | \ \   / \ \   |  __| | | / /
     / /__  / /-\ \   _||_  | |  | | | |-< <  / /-\ \  | |__  | |< <
    /____/ /_/   \_\ |____| |_|_/_/  |_|_/_/ /_/   \_\ |____| |_| \_\ ,
*/
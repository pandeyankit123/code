/*       __      ___       _______   _______    ______        ___       _______   _    __
        / /     / \ \     |__   __| | |   \ \  | |   \ \     / \ \     |  _____| | |  / /
       / /     / /_\ \       | |    | |    | | | |___/ /    / /_\ \    | |       | | / /
      ----------------------------------------------------------------------------------
     / /___  / /-----\ \   __| |__  | |    | | | |   \ \  / /-----\ \  | |_____  | |  \ \
    /_____/ /_/       \_\ |_______| |_|___/_/  |_|___/_/ /_/       \_\ |_______| |_|   \_\ 

        __      ___      ______   ______    _____       ___      _____   _   __
       / /     / \ \    |__  __| | |  \ \  | |  \ \    / \ \    |  ___| | | / /
      / /     / /_\ \      ||    | |   | | | |__/ /   / /_\ \   | |     | |/ /
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
        float n,d,h; cin>>n>>d>>h;
        vector<int> v(n);
        cinall(v);
        double ans=0;
        ans=1.0*d*h/2* n;
        fo(i,1,n){
            int x=h-(v[i]-v[i-1]);
            if(x>0) ans-=1.0*x*x/h*d/2;
        }
        cout<<fixed<<setprecision(10)<<ans<<endl;
    }
    return 0;
}


/*
    
*/
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
    // int t; cin>>t;
    int t=1;
    while(t--){
        string str; cin>>str;
        int n=str.length(), ans=0, an=0;
        for(int i=2*n-1; i>=0; i--){
            int a=i%n;
            int b=(i+1)%n;
            if(str[a]!=str[b])
                an++;
            else an=1;
            ans=max(ans,an);
        }
        cout<<min(ans, n);
    }
    return 0;
}


/*
    
*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t ;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        int ans = 0;

        int a,p = 0;

        for(int i = 0 ; i < n ; i++){
            cin>>a;

            ans = max(ans,a-p);
            p=a;
        }

        ans = max(ans,2*(x-p));
        cout<<ans<<"\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solution(){
int n;
cin>>n;
vector<ll>v(n);

for(ll i=0 ; i<n ; i++){
    cin>>v[i];
}

sort(v.begin(),v.end());

for(auto x:v){
cout<<x<<" ";

}

cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solution();
    return 0;
}

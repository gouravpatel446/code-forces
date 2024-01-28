#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
set<int> a;
for (int i = 0; i < n; i++) {
    int elem;
    cin >> elem;
    a.insert(elem);
}
int result = 0;
while (!a.empty()) {
    int m = *a.rbegin();
    a.erase(m);
    if (m % 2 == 0) {
        result++;
        a.insert(m / 2);
    }
}
cout << result << endl;

}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
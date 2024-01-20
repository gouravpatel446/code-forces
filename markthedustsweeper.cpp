#include <iostream>

using namespace std;

signed main(){
    int t ; 
    cin>>t;

    while(t--){
        int n ; 
        cin >> n ;

        int arr[n+1];
        for(int i = 1 ; i <= n ; i++) cin>>arr[i];

        long long cntz = 0 ; 
        long long sum = 0 ;
        bool flag =  false;

        for(int i = 1 ; i <= n-1 ; i++){
            sum+= arr[i];
            if(arr[i]>0) flag = true;
            if(arr[i]==0 && flag==true)cntz++;
        }

        cout << sum + cntz << endl;
    }
    return 0;
}
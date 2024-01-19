#include <iostream>

using namespace std;

signed main(){
    int k ; cin>>k;
    int h = 21;

    while(k>=60){
        h += 1 ;
        k -= 60;
    }
    cout << h <<":";
    if(k<10){
        cout <<0<<k<<endl;
    }
    else{
        cout<<k<<endl;
    }
}
#include <iostream>
using namespace std;
int main(){
    int testc;
    cin>>testc;
    while(testc--){
        int N,x,k;
        cin>>N>>x>>k;
        if(x%k==0 || (N+1-x)%k==0){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
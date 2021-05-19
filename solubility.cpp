#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int X,A,B;
        cin>>X>>A>>B;
        int total=A+(100-X)*B;
        cout<<total*10<<endl;
    }
    return 0;
}
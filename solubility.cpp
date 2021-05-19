#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int X,A,B;
        cin>>X>>A>>B;
        int total=A+(100-X)*B;
        cout<<total*10<<endl;
    }
    return 0;
}
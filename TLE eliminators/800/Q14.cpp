#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;

       if(c%2 == 0){
        if(b>=a){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }

       } 
       else{
        if(a>b-1){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
       }
    }

    return 0;
}
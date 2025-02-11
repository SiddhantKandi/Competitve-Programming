#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,a,b;
        cin>>n>>a>>b;
        
        if(a+b >=n-1){
            if(a==n && b==n){
                cout<<"Yes"<<"\n";
            }
            else{
                cout<<"No"<<"\n";
            }
        }
        else{
            cout<<"Yes"<<endl;
        }

    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int x,k;
        cin>>x>>k;

        if(x%k==0){
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<x<<endl;
        }
    }

    return 0;
}
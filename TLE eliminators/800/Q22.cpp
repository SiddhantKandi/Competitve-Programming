#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        long long n,k;
        cin>>n>>k;

        if(n%2 != 0 && k%2 ==0){
            cout<<"No"<<endl;
        }
        else if(n%2 !=0 && k>n){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }

    }  

    return 0;
}
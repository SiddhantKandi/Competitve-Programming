#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        long long n,k;
        cin>>n>>k;

        if(n%2!=0){
            if(k%2 == 0){
                cout<<"No"<<endl;
                 continue;
            }
            else if(k>n){
                cout<<"No"<<endl;
                continue;
            }
        }

        cout<<"Yes"<<endl;
    }

    return 0;
}
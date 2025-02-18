#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 

 
int main() {
    int t;
    cin>>t;
 
    while(t--){

        ll n,k,x;

        cin>>n>>k>>x;

        ll lowSum = (k * (k+1)) /2;

        ll highSum = ((n * (n+1))/2) - (((n-k) * (n-k+1)) /2);

        if(x < lowSum || x > highSum){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }

    }
        
    return 0;
}

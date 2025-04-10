#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    int t;
    cin>>t;
 
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;

        ll sum = b-1;

        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num < a){
                sum+= num;
            }
            else{
                sum+= (a-1);
            }
        }

        cout<<sum+1<<endl;
    }
        
    return 0;
}
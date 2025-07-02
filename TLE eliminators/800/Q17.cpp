#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

   while(t--){
    int n,k,x;
    cin>>n>>k>>x;

    if(k==1 && x==1){
        cout<<"No"<<endl;
    }
    else if(k==2 && x==1 && n%2 !=0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
        if(x!=1){
            cout<<n<<endl;
            for(int i = 0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{
            if(n%2 == 0){
               cout<<n/2<<endl;
                for(int i = 0;i<n;i+=2){
                    cout<<2<<" ";
                }
                cout<<endl; 
            }
            else{
               cout<<1+(n-1)/2<<endl;
               cout<<3<<" ";
                for(int i = 0;i<n-3;i+=2){
                    cout<<2<<" ";
                }
                cout<<endl;  
            }
        }
    }


   } 

    return 0;
}
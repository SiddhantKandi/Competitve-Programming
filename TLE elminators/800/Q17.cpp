#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,k,x;
        cin>>n>>k>>x;

        if(k<=2 && x==1 && n%2!=0){
            cout<<"No"<<endl; 
            continue;       
        }
        else if(k==1 && x==1){
            cout<<"No"<<endl;
            continue;        
        }

        cout<<"Yes"<<endl;
        if(x==1){
            if(n%k ==1){
                int count = (n/2)-1+2;
                cout<<count<<endl;
                continue;
            }
            else{
                cout<<(n/k)+(n%k)<<endl;
                continue;
            }
        }
        else{
            cout<<n<<endl;
            for(int j=0;j<n;j++){
                cout<<1<<" ";
            }
            cout<<endl;
        }

    }

    return 0;
}
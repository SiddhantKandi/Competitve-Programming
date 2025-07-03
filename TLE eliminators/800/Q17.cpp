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
    else if(k<=2 && x==1 && n%2 !=0){
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
                vector<int> result;
                if(n%2 !=0){
                    result.push_back(3);
                    n = n-3;
                }
                while(n){
                    result.push_back(2);
                    n = n-2;
                } 

                cout<<result.size()<<endl;
                for(int i = 0;i<result.size();i++){
                    cout<<result[i]<<" ";
                }
                cout<<endl; 
            }
        }
    }

    return 0;
}
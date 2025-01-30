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
        vector<int> result;
        if(n%2==1){
            result.push_back(3);
            n = n-3;
        }

        while(n){
            result.push_back(2);
            n = n - 2;
        }

        cout << result.size() << endl;
           for(int val : result){
            cout<<val<<" ";
           }
        cout << endl;

       } 
       else{
        cout<<n<<"\n";
        while(n){
            cout<<1<<" ";
            n=n-1;
        }
        cout<<"\n";
       }

    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

   while(t--){
    int n;
    cin>>n;
    vector<int> store(n,0);
    int mini = INT_MAX;

    for(int i =0;i<n;i++){
        cin>>store[i];
        mini = min(mini,store[i]);
    }

    if(mini == store[0]){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
   } 
    

    return 0;
}
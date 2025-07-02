#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

   while(t--){
    int n;
    cin>>n;

    vector<int> arr;

    for(int i = 0;i<n;i++){
        int num;
        cin>>num;

        arr.push_back(num);
    }

    vector<int> ans;
    ans.push_back(arr[0]);

    for(int i = 1;i<n;i++){
        int prev = arr[i-1];
        int curr = arr[i];

        if(prev <= curr){
            ans.push_back(curr);
        }
        else{
           ans.push_back(curr);
           ans.push_back(curr); 
        }
    }

    cout<<ans.size()<<endl;
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    
   } 

    return 0;
}
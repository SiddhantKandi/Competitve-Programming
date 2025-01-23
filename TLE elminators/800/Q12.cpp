#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<int> arrayB(n,0);

        for(int j=0;j<n;j++){
            cin>>arrayB[j];
        }

        vector<int> ans;
        ans.push_back(arrayB[0]);

        for(int j=1;j<n;j++){
            if(arrayB[j-1]<=arrayB[j]){
                ans.push_back(arrayB[j]);
            }
            else{
                ans.push_back(arrayB[j]);
                ans.push_back(arrayB[j]);
            }
        }

        cout<<ans.size()<<endl;
        for(int k=0;k<ans.size();k++){
            cout<<ans[k]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
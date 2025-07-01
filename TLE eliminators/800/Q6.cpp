#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int n;
        cin>>n;

        vector<int> arr(n,0);
        unordered_map<int,int>mpp;

        for(int j=0;j<n;j++){
            cin>>arr[j];
            mpp[arr[j]]++;
        }
        
        if(mpp.size() > 2){
            cout<<"No"<<endl;
        }
        else if(mpp.size() == 2){
            auto it1 = mpp.begin();
            auto it2 = next(mpp.begin());

            if(abs(it1->second - it2->second)<=1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"Yes"<<endl;
        }


    }

    return 0;
}
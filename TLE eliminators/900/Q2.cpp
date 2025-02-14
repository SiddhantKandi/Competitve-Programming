#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 

 
int main() {
    int t;
    cin>>t;
 
    while(t--){

        int n,k;

        cin>>n>>k;

        string s;
        cin>>s;

        unordered_map<char,int> mpp;
        int count = 0;

        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }

        for(auto it : mpp){
            if(mpp[it.first] %2 !=0){
                count++;
            }
        }

        if(count - 1 <=k){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
 
    return 0;
}

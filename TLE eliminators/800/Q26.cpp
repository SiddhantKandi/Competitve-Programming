#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int gcdofArray(ll a, ll b){
    while(a > 0 && b > 0 ){
        if(a > b) {
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
 
    if(a ==0) {
        return b;
    }
 
    return a;
}
 
int main() {
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        bool flag = false;
 
        vector<int> arr(n,0);
        for(int j = 0;j<n;j++){
            cin>> arr[j];
        }
 
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(gcdofArray(arr[i],arr[j]) <=2){
                    flag = true;
                    break;
                }
            }
 
            if(flag){
                break;
            }
        }
 
        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
 
    }
 
    return 0;
}
